//Hengyi Li
//This Program is to decide the phone plan
//This Program finished by Hengyi Li on 11：05 AM, 24 Sep, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const unsigned LABEL_WIDTH = 13;
  const unsigned PRECISION = 2;
  const double ADDITIONAL_DATA_COSTS_A = 9.99;
  const double ADDITIONAL_DATA_COSTS_B = 4.99;
  const double MAX_DATA_IN_PLAN_A = 4.0;
  const double MAX_DATA_IN_PLAN_B = 8.0;
  const double ZERO = 0.0;
  double base_cost_a = 39.99;
  double base_cost_b = 59.99;
  double base_cost_c = 69.99;
  string input_choice;

  cout << "Choose the plan (A, B ,Or C) or Q to quit: " << endl;
  cin >> input_choice;

  while (input_choice != "Q")
  {
    if (input_choice != "A" || "B" || "C")
    {
      cout << "Invalid Choice" << endl;
    }
    else
    {
      do
      {
        if (input_choice == "A")
        {
          double data_usage;
          cout << "How many gigs of data did you use? " << endl;
          cin >> data_usage;
          while (data_usage < 0)
          {
            cout << "Data usage cannot be negative. Please re-enter: ";
            cin >> data_usage;
          }
          double plan_a;
          double invoice_total_a;
          cout << "Base Cost     " << setw(LABEL_WIDTH) << setprecision(PRECISION)
               << fixed << base_cost_a << endl;

          if (data_usage > MAX_DATA_IN_PLAN_A)
          {
            plan_a = (data_usage - MAX_DATA_IN_PLAN_A) * ADDITIONAL_DATA_COSTS_A;
            cout << "Data Cost     " << setw(LABEL_WIDTH)
                 << setprecision(PRECISION) << fixed << plan_a << endl;
            invoice_total_a = base_cost_a + plan_a;
            cout << "Invoice Total " << setw(LABEL_WIDTH)
                 << invoice_total_a << endl;
          }
          else
          {
            cout << "Data Cost     " << setw(LABEL_WIDTH)
                 << setprecision(PRECISION) << fixed << ZERO << endl;
            invoice_total_a = base_cost_a;
            cout << "Invoice Total " << setw(LABEL_WIDTH)
                 << invoice_total_a << endl;
            return 0;
          }
        }
        else if (input_choice == "B")
        {
          double data_usage;
          cout << "How many gigs of data did you use? " << endl;
          cin >> data_usage;
          while (data_usage <= 0)
          {
            cout << "Data usage cannot be negative. Please re-enter: ";
            cin >> data_usage;
          }
          double plan_b;
          double invoice_total_b;

          if (data_usage > MAX_DATA_IN_PLAN_B)
          {
            plan_b = (data_usage - MAX_DATA_IN_PLAN_B) * ADDITIONAL_DATA_COSTS_B;
            invoice_total_b = base_cost_b + plan_b;;
            cout << "Base Cost    " << setw(LABEL_WIDTH) << setprecision(PRECISION)
                 << fixed << base_cost_b << endl;
            cout << "Data Cost    " << setw(LABEL_WIDTH) << plan_b << endl;
            cout << "Invoice total " << setw(LABEL_WIDTH) << invoice_total_b
                 << endl;
          }
          else
          {
            invoice_total_b = base_cost_b;
            cout << "Base Cost    " << setw(LABEL_WIDTH) << setprecision(PRECISION)
                 << fixed << base_cost_b << endl;
            cout << "Data Cost    " << setw(LABEL_WIDTH) << ZERO << endl;
            cout << "Invoice total " << setw(LABEL_WIDTH) << invoice_total_b
                 << endl;
            return 0;
          }
        }
        else if (input_choice == "C")
        {
          double invoice_total_c;
          invoice_total_c = base_cost_c;
          cout << "Invoice total " << setw(LABEL_WIDTH) << invoice_total_c
               << endl;
          return 0;
        }
      }
      while (input_choice == "A" || "B" || "C");
    }
  }
  return 0;
}
