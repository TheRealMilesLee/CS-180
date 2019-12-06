// Your name here
// Program purpose here

#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

const unsigned MAX_DESCRIPTION_WIDTH = 25;

struct Part
{
    char description [MAX_DESCRIPTION_WIDTH];
    uint16_t current_quantity;
    uint16_t max_quantity;
};

/**
 * generate a string representation of a part
 * @param part the part to represent
 * @return a string representation of the part
 */
string to_string(Part &part);

/**
 * prompt for a numeric value in a range, and accept only values within
 * that range (with one exception: if the user enters a string beginning
 * with 'q' or 'Q', then return the value one larger than the maximum)
 * @param prompt the prompt to show to the user
 * @param min_value the minimum value to accept
 * @param max_value the maximum value to accept
 * @param accept_quit whether or not to accept q
 * @return a numeric value between min_value and max_value inclusive
 * (except max_value + 1 if the user enters q and q is acceptable)
 */
unsigned get_numeric_value(const string& prompt, unsigned min_value,
                           unsigned max_value,bool accept_quit);
/**
 * if this part's quantity on hand has fallen below the minimum, re-stock
 * the part up to the part's maximum
 * @param part the part
 */
unsigned restock(Part &part);

int main()
{
  const unsigned NUMBER_OF_PARTS = 12;
  fstream file;
  file.open("../inventory.inv", ios::in | ios::out | ios::binary);
  if (file.fail())
  {
    cerr << "Error opening inventory database" << endl;
    return 1;
  }

  bool done = false;
  while (!done)
  {
    unsigned choice = get_numeric_value("Choose part number or q to quit", 0,
                          NUMBER_OF_PARTS - 1, true);
    if (choice == NUMBER_OF_PARTS)
    {
      done = true;
    }
    else
    {
      Part part;
      file.seekg(static_cast<long>(choice * sizeof part));
      file.read(reinterpret_cast<char*>(&part), sizeof part);
      cout << choice << ' ' << to_string(part) << endl;
      cout << endl;
      string user_choice;
      cout << "Restock? (Y/N) ";
      cin >> user_choice;
      if (user_choice == "Y" || user_choice == "y")
      {
        restock (part);
      }
      else if (user_choice == "N" || user_choice == "n")
      {
        done = true;
      }
      file.write(reinterpret_cast<char*>(&part), sizeof part);
    }

  }
  file.close();
  return 0;
}

unsigned get_numeric_value(const string& prompt, unsigned min_value,
    unsigned max_value, bool accept_quit)
{
  bool done = false;
  unsigned value = 0;

  do
  {
    cout << prompt << " (" <<
         min_value << " to " << max_value << "): ";
    string value_string;
    getline(cin, value_string);

    if (value_string.size() > 0 && isdigit(value_string.at(0)))
    {
      value = static_cast<unsigned>(stoul(value_string));
      if (value >= min_value && value <= max_value)
      {
        done = true;
      }
    }
    else if (accept_quit && value_string.size() > 0 && tolower(value_string
    .at(0)) == 'q')
    {
      done = true;
      value = max_value + 1;
    }

    if (!done)
    {
      cout << "invalid value; please re-enter" << endl;
    }
  }
  while (!done);
  return value;
}

string to_string(Part &part)
  {
    string description = static_cast<string>(part.description);
    string current_quantity = static_cast<string>(reinterpret_cast<const
    char * >(part.current_quantity));
    string max_quantity = static_cast<string>(reinterpret_cast<const char * >
    (part.max_quantity));
    string to_string_result = description + current_quantity + max_quantity;
    return to_string_result;
  }
unsigned restock(Part &part)
{
  unsigned restock_quantity = part.max_quantity - part.current_quantity;
  cout << "Restocking " << part.description << " adding " <<
       restock_quantity << endl;
}