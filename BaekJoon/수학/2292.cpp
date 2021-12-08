#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n; 

	int r = 2,lv = 0; 

	if (n == 1) 
		lv = 1;
	while (n >= r) 
		r += 6 * (lv++); 
	cout << lv << endl;

	return 0;
}