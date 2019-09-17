//Hengyi Li
//This Program is to deside the phone plan
//This Program finished by Hengyi Li on 10：40 AM, 17 Sep, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double data_usage;
  double base_cost_a = 39.99;
  double base_cost_b = 59.99;
  double base_cost_c = 69.99;
  const unsigned LABEL_WIDTH = 13;
  const unsigned PRECISION = 2;
  string input_choice;

  cout << "Choose the plan (A, B ,Or C): " << endl;
  cin >> input_choice;

  if (input_choice == "A")
  {
    cout << "How many gigs of data did you use? " << endl;
    cin >> data_usage;
    unsigned plan_a;
    double invoice_total_a;


    cout << "Base Cost    " << setw(LABEL_WIDTH) << setprecision(PRECISION) << fixed << base_cost_a << endl;
    if (data_usage > 4)
    {
      plan_a = (data_usage - 4.0) * 9.99;
      cout << "Data Cost    " << setw(LABEL_WIDTH) <<  plan_a << endl;
      invoice_total_a = base_cost_a + plan_a;
      cout << "Invoice Total" << setw(LABEL_WIDTH) << invoice_total_a << endl;
    }
    else
    {
      cout << "Data Cost    " << setw(LABEL_WIDTH) << "0.00" << endl;
      invoice_total_a = base_cost;
      cout << "Invoice Total" << setw(LABEL_WIDTH) << invoice_total_a << endl;
    }
    

    return 0;
  }

  if (input_choice == "B")
  {
    cout << "How many gigs of data did you use? " << endl;
    cin >> data_usage;
    double plan_b;
    double invoice_total_b;
    if (data_usage > 8)
    {
      plan_b = (data_usage - 8.0) * 4.99;
      invoice_total_b = base_cost_b + plan_b;;
      cout << "Base Cost" << setw(LABEL_WIDTH) << setprecision(PRECISION) << fixed << base_cost_b << endl;
      cout << "Data Cost" << setw(LABEL_WIDTH) << plan_b << endl;
      cout << "Invoice Data" << setw(LABEL_WIDTH) << invoice_total_b << endl;
    }
    else
    {
      invoice_total_b = base_cost_b;
      cout << "Base Cost" << setw(LABEL_WIDTH) << setprecision(PRECISION) << fixed << base_cost_b << endl;
      cout << "Data Cost" << setw(LABEL_WIDTH) << "0" << endl;
      cout << "Invoice Data" << setw(LABEL_WIDTH) << invoice_total_b << endl;
    }
    return 0;
  }

  if (input_choice == "C")
  {
    cout << "How many gigs of data did you use? " << endl;
    cin >> data_usage;
    double plan_c;
    double invoice_total_c;
    plan_c = 0;
    invoice_total_c = base_cost_c + plan_c + 30;
    cout << "Base Cost" << setw(LABEL_WIDTH) << setprecision(PRECISION) << fixed << base_cost_c << endl;
    cout << "Data Cost" << setw(LABEL_WIDTH) << plan_c << endl;
    cout << "Invoice Data" << setw(LABEL_WIDTH) << invoice_total_c << endl;
    return 0;
  }
  return 0;
}