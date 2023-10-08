
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double y; 
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (x * x + y * y <= R * R && x <= 0 && y >= 0 || y <= 0 && y >= (-2 * x) && y >= 2 * x - 2 * R)
		cout << "no" << endl;
	else
		cout << "yes" << endl;
	cin.get();
	return 0;
}