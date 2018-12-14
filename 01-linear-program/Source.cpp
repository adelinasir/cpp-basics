#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double z1, z2, a;
	const double PI = 3.1415926535897932384626433832795;

	cout << "Enter a " << endl;
	cin >> a;

	z1 = pow((cos((3 / 8)*PI - (a / 4))), 2) - pow((cos((11 / 8)*PI + (a / 4))), 2);
	z2 = (sqrt(2) / 2)*(sin(a / 2));

	cout << "Value z1= " << z1 << ", value z2= " << z2 << endl;

	return 0;
}