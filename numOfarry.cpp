// Name: Ali Bayati
// Number Array Class 

#include<iostream>
#include"farray.h"

using namespace std;

int main()
{
	int d,t,r;
	float y;
	cout << "Enter the array total:";
	cin >> d;
	farray rrd(d);
	
	cout << endl;
	cout << "Enter the Element number you want to store in:";
	cin >> t;
	cout << "\nEnter the value you want to store :";
	cin >> y;
	rrd.strnum(t, y);
	cout << endl;

	cout << "What elemnt you want to retrieve:";
	cin >> r;
	cout << "Element "<<r<<" :"<<rrd.retrvnum(r)<<endl<<endl;
	
	cout << "Hightest value:" << rrd.hestnum() << endl<<endl;
	
	cout << "Lowest value :" << rrd.lowstnum() << endl << endl;
	
	cout << "Average of all numbers in the array :" << rrd.avg() << endl << endl;
	
	
		return 0;

}
/*Output
Enter the array total:10

Enter the Element number you want to store in:6

Enter the value you want to store :88

What elemnt you want to retrieve:6
Element 6 :88

Hightest value:88

Lowest value :1

Average of all numbers in the array :13.7

Press any key to continue . . .*/