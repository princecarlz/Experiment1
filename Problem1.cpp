#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int ticketsales (int x, int y)
{
	int z;
	z = x*y;
	return z;
}


int main() 
	{
		int Premium, Sideline, Box , GenAd;
		int PPrice = 250 , SPrice = 100 , BPrice = 50,GPrice = 25;
		int p,sl,b,ga;

		cout << "Enter the no. of tickets sold:" << endl << endl;
		cout << "Ticket Type\t\t"; 
		cout << "Ticket Price\t\t";
		cout << "No of Tickets Sold\t\t";
		cout <<"Total price of type of ticket sold" << endl;
		

		cout << "Premium";
		cout.width(10);
		cout << "\t" <<  PPrice << flush;
		cin >> Premium;
		p = ticketsales (Premium, PPrice);
		cout.width(100);
		cout << p << endl;
	

		cout << "Sideline";
		cout.width(10);
		cout << "\t" <<  SPrice << flush;
		cin >> Sideline;
		sl = ticketsales (Sideline, SPrice);
		cout.width(100);
		cout << sl << endl;
	

		cout << "Box";
		cout.width(20);
		cout << "\t" <<  BPrice << flush;
		cin >> Box;
		b = ticketsales (Box, BPrice);
		cout.width(100);
		cout << b << endl;

		cout << "GenAd";
		cout.width(15);
		cout << "\t" <<  GPrice << flush;
		cin >> GenAd;
		ga = ticketsales (GenAd, GPrice);
		cout.width(100);
		cout << ga << endl;
		
		
		cout << "The total ticket sales is: " << p + sl + b + ga << endl;
system ("pause");
return 0;
}

