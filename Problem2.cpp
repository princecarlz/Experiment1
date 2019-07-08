#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
	{

		double mass , volume , density;

		cout<< fixed << showpoint << setprecision(2);
 
		cout << "Input the mass in grams: ";

		cin >> mass;

		cout << "Input the volume in per cubic centimetre: ";

		cin >> volume;

		cout << "Therefore the density is: "<< (.25 * mass / volume) << " " << "grams per cubic centimetre" << endl;

system ("pause");
return 0;
}
