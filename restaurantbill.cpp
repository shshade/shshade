#include <iostream>
#include <iomanip> // needed to use set precision 
using namespace std;

/* $88.67 meal charge
tax is 6.75% of meal charge
tip is 20% of total after adding tax
display meal cost, tax amount, tip amount and total bill on screen
  */

int main() 
{ float meal_charge = 88.67;
  float tax_amount = meal_charge * 0.0675;
  float tip_amount = (meal_charge + tax_amount) * 0.20;
  float total_bill = meal_charge + tax_amount + tip_amount;

  cout << fixed << setprecision(2); // sets precision to hundredths place 
  cout << "The cost of your meal is $" << meal_charge << endl;
  cout << "The tax that will be added to your meal cost is $" << tax_amount << endl;
  cout << "The tip amount is $" << tip_amount << endl;
  cout << "Your total bill is $" << total_bill << endl;

 return 0;
  }