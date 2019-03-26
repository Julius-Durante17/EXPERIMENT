#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double boxPrice, sidelinePrice, premiumPrice, generaladmissionPrice, box, sideline, premium, generaladmission, totalBox, totalSideline, totalPremium,
		totalGeneralAdmission;

	//Prices of each tickets and that was sold
	cout << "Enter each Box Ticket price: ";
	cin >> boxPrice;
	cout << "Enter each Sideline Ticket price: ";
	cin >> sidelinePrice;
	cout << "Enter each Premium Ticket price: ";
	cin >> premiumPrice;
	cout << "Enter each General Admission Price: ";
	cin >> generaladmissionPrice;
	cout << "Number of Box ticket/s that was sold: ";
	cin >> box;
	cout << "Number of Sideline ticket/s that was sold: ";
	cin >> sideline;
	cout << "Number of Premium ticket/s that was sold: ";
	cin >> premium;
	cout << "Number of General Admission ticket/s that was sold: ";
	cin >> generaladmission;

	//Total of Each Tickets
	totalBox = boxPrice * box;
	totalSideline = sidelinePrice * sideline;
	totalPremium = premiumPrice * premium;
	totalGeneralAdmission = generaladmission * generaladmissionPrice;

	//Summary
	cout << "Number of Box Tickets that was Sold:" << box << endl;
	cout << "Total Box Ticket Sale:" << totalBox << endl;
	cout << "Number of Sideline Tickets that was Sold:" << sideline << endl;
	cout << "Total Sideline Ticket Sale:" << totalSideline << endl;
	cout << "Number of Premium Tickets that was Sold:" << premium << endl;
	cout << "Total Premium Ticket Sale:" << totalPremium << endl;
	cout << "Number of General Admission Tickets that was Sold:" << generaladmission << endl;
	cout << "Total General Admission Ticket Sale:" << totalGeneralAdmission << endl;

	-getch();
	return 0;
}
