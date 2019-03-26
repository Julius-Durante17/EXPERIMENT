#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double mass, density;
	cout << "Input mass: " <<endl;
	cin >> mass;
	cout << "Input density: " << endl;
	cin>> density;
	cout << "Now the mass of the object is " << mass << "g" << " and the density of object is " << density << "g/cm^3" << endl;
	cout << "Based from the Given \n";
	cout << "Volume of the Object = " << mass/(4*density) << "cm^3" << endl;
	getch();
	return 0;
}
