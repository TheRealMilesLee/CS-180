//Hengyi Li
//This Program is to calculate the price of the order
//This Program finished by Hengyi Li on 12:11 PM, 3 Sep, 2019
//Copyright © 2019 Hengyi Li. All rights reserved.

#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to Java Joe's!" << endl;
  cout << "Enter your name";
  string name;
  getline (cin,name);
  cout << "How many ounces of Colombian, Decaf, and Chai?";
  double colombian_quantity;
  double decaf_quantity;
  double chai_quantity;
  cin >> colombian_quantity >> decaf_quantity >> chai_quantity;
  cout << endl << "Invoice for Fred Flintstone" << endl;
  const double unit_price_colombian = 0.35;
  const double unit_price_decaf = 0.85;
  const double unit_price_chai = 1.10;
  double amount_colom_supr;
  amount_colom_supr =  colombian_quantity * unit_price_colombian;
  double amount_organ_gold;
  amount_organ_gold =  decaf_quantity * unit_price_decaf;
  double amount_heavn_chai;
  amount_heavn_chai =  chai_quantity * unit_price_chai;
  double total;
  total =  amount_colom_supr + amount_organ_gold + amount_heavn_chai;
  cout << "                  Colom Supr  Organ Gold  Heavn Chai" << endl;
  cout << "                  ----------  ----------  ----------" << endl;
  cout << "Quantity (oz)  " << "     " << colombian_quantity << "         " << decaf_quantity << "         " << chai_quantity << endl;
  cout << "Unit Price  " << "         " << unit_price_colombian <<"             " <<  unit_price_decaf <<"             "  << unit_price_chai << endl;
  cout << "Amount  " << amount_colom_supr << amount_organ_gold << amount_heavn_chai << endl;
  cout << endl << "Total" << total << endl;
  unsigned int  bonus_discount;
  srand(bonus_discount);
  cout << "Bonus Discount  " << bonus_discount << endl;
  cout << "Grand Total  " << total + bonus_discount << endl;
  cout << endl << "Thank you for your ordering !" << endl;

  return 0; 
}