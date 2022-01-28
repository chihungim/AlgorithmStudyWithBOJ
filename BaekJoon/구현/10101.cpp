#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a == 60 && a == b && b == c)
		cout << "Equilateral";
	else if (a + b + c == 180) {
		if (a != b && b != c && c != a)
			cout << "Scalene";
		else
			cout << "Isosceles";
	}
	else  
		cout << "Error";

	return 0;
}
