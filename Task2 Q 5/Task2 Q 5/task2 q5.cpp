#include <iostream>
using namespace std;
int Multi_Alternative(int x, int y)
{
	if (x == 0 || y == 0)
		return 0;
	if (x == 1)
		return y;
	if (y == 1)
		return x;
	if (y > 0)
		return x + Multi_Alternative(x, y - 1);
	if (y < 0)
		return -Multi_Alternative(x, -y);
	if (x < 0)
		return -Multi_Alternative(-x, y);
	if (x < 0 && y < 0)
		return -Multi_Alternative(-x, -y);
}
int main()
{
	int x, y;
	cout << "Enter two numbers you wish to multiply \n";
	cin >> x;
	cin >> y;
	cout << "The product of " << x << " and " << y << " is " << Multi_Alternative(x, y);
	return 0;
}