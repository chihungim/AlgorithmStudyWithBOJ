

#include <iostream>

using namespace  std;

int main()
{
	int digit[10] = {0,};
	int a, b, c;
	cin >> a >> b >> c;
	int r = a * b * c;

	while(r != 0)
	{
		digit[r % 10]++;
		r /= 10;
	}

	for(int i = 0; i<10; i++)
	{
		cout << digit[i] << "\n";
	}
	
	return 0;
}

