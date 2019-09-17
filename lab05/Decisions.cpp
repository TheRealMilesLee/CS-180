//Hengyi Li
//This Program is to deside the phone plan
//This Program finished by Hengyi Li on 10：40 AM, 17 Sep, 2019
//Copyright @ 2019 Hengyi Li. All rights reserved.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double user_choice;
  double A;
  double B;
  double C;
  double data_usage;
  double base_cost = 39.99;
  double data_cost_a;
  double data_cost_b;
  double data_cost_c;
  double invoice_total_a;
  double invoice_total_b;
  double invoice_total_c;
  const unsigned LABEL_WIDTH = 24;
  const unsigned PRECISION = 2;
  cout << "Choose the plan (A, B ,OR C): ";
  cin >> user_choice;
  cout << "Houw many gigs of data did you use? ";
  cin >> data_usage;

  if (user_choice = A)
  {
    data_cost_a = (data_usage - 4) * 9.99;
    invoice_total_a = base_cost + data_cost_a;
    cout << "Base Cost" << setw(LABEL_WIDTH) << setprecision(PRECISION) << fixed << base_cost << endl;
    cout << "Data Cost" << setw(LABEL_WIDTH) << data_cost_a << endl;
    cout << "Invoice Total" << setw(LABEL_WIDTH) << invoice_total_a << endl;
  }

  if (user_choice = B)
  {
    data_cost_b = (data_usage - 8) * 4.99;
    invoice_total_b = base_cost + data_cost_b;;
    cout << "Base Cost" << setw(LABEL_WIDTH) << base_cost << endl;
    cout << "Data Cost" << setw(LABEL_WIDTH) << data_cost_b << endl;
    cout << "Invoice Data" << setw(LABEL_WIDTH) << invoice_total_b << endl;
  }

  if (user_choice = C)
  {
    data_cost_c = 0;
    invoice_total_c = base_cost + data_cost_c + 30;
    cout << "Base Cost" << setw(LABEL_WIDTH) << base_cost << endl;
    cout << "Data Cost" << setw(LABEL_WIDTH) << data_cost_c << endl;
    cout << "Invoice Data" << setw(LABEL_WIDTH) << invoice_total_c << endl;
  }
}