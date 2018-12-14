#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	const double kEps = 1e-15;
	double a, b, c, xn, xk, dx;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter c: ";
	cin >> c;

	cout << "Enter xn: ";
	cin >> xn;

	cout << "Enter xk: ";
	cin >> xk;

	cout << "Enter dx: ";
	cin >> dx;

	if (dx > 0 && xk >= xn)
	{
		cout << endl << string(37, '-') << endl;
		cout << "|" << setw(9) << "x" << setw(9);
		cout << "|" << setw(9) << "f" << setw(9) << "|";
		cout << endl << string(37, '-') << endl;
		cout << fixed;
		cout.precision(3);
		double x = xn;
		while (x <= xk)
		{
			cout << "|" << setw(11) << x << setw(7) << "|";
			double f;
			if ((x < 5) && (abs(c) > kEps))
			{
				f = -a * pow(x, 2) - b;
			}
			else if ((x > 5) && (abs(c) < kEps))
			{
				f = (x - a) / x;
			}
			else
			{
				if (abs(c) > kEps)
				{
					f = (-x) / c;
				}
				else
				{
					cout << "  division by 0  |\n";
					x += dx;
					continue;
				}
			}
			if (((int(a) | int(b)) ^ (int(a) | int(c))) != 0)
				cout << setw(11) << f << setw(7);
			else
				cout << setw(9) << int(f) << setw(9);
			cout << "|" << endl;
			x += dx;
		}
		cout << string(37, '-') << endl;
	}
	else
	{
		cout << "\nError dx or xk!\n";
	}
	return 0;
}