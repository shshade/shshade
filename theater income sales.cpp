#include <iostream>
#include <iomanip>
using namespace std;

/* evening ticket price: $10
kid matinee price: $3
avg evening guest spends $6.50 on concessions
avg kid matinees guest spends $8.50 on concessions

program must show percent of evening show income and percent of matinees income that comes from ticket sales
program must also show what percent comes from concession stand purchases */

int main()
{
  int ticket_price = 10;
  int matinee_price = 3;
  float evening_concession = 6.50;
  float matinee_concession = 8.50;

  float evening_income = evening_concession + ticket_price;
  float matinee_income = matinee_concession + matinee_price;

  float eveningTicket_percent = (ticket_price / evening_income) * 100;
  float matineeTicket_percent = (matinee_price / matinee_income) * 100;
  float concessionEvening_percent = (evening_concession / evening_income) * 100; 
  float concessionMatinee_percent = (matinee_concession / matinee_income) * 100;

  cout << fixed << setprecision(2);
  cout << "Evening show income: \n" << "- Ticket sales: " << eveningTicket_percent << "% \n" << "- Concession sales: " << concessionEvening_percent << "%" << endl;
  cout << "Matinee show income: \n" << "- Ticket sales: " << matineeTicket_percent << "% \n" << "- Concession sales: " << concessionMatinee_percent << "%" << endl;

  return 0;
}