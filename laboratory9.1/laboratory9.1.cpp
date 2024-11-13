#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p= "; cin >> x_p;
	cout << "x_k= "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;

	x = x_p;

	cout << "---------------------------------" << endl;
	cout << "|" << setw(5) << left << "x" << "|"
		<< setw(8) << "s" << "|" 
		<< setw(10) << "exp(x * x)" << "|"
		<< setw(5) << "n" << "|" 
		<< endl;

	cout << "---------------------------------" << endl;

	while (x < x_k)
	{
		sum();

		cout << "|" << setw(5) << x << "|"
			<< setw(8) << s << "|" 
			<< setw(10) << exp(x * x) << "|" 
			<< setw(5) << n << "|" 
			<< endl;

		x += dx;

		cout << "---------------------------------" << endl;
	}
	cin.get();
	return 0;
}