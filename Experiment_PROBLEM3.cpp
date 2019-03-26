#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	//PAYMENT
	double averageDailyBalance, netbalance, payment, d1, d2, interest;

	const double interestconstant = 0.0152;

	cout << setprecision(2) << fixed << showpoint;

	cout << "Please type in Balance shown in the bill: ";
	cin >> netbalance;
	cout << "Please type in Payment made: ";
	cin >> payment;
	cout << "Please type in the number of days in the billing cycle: ";
	cin >> d1;
	cout << "Please type in the number of days payment is made before the billing cycle: ";
	cin >> d2;

	//Computations
	averageDailyBalance = (netbalance * d1 - payment * d2)/d1;
	interest = (averageDailyBalance * interestconstant);

	//Output
	cout << "Daily Balance is " << averageDailyBalance << endl;
	cout << "Computed Interest is " << interest << endl;

	getch();
	return 0;

}
