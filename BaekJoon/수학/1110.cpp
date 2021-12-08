
#include <iostream>


using namespace  std;

int main()
{
	int n = 0, nn = 0,cycle = 0;
	cin >> n;
	do 
	{
		int a = 0, b = 0;
		if(nn == 0)
		{
			a = n / 10;
			b = n % 10;
		}
		else
		{
			a = nn / 10;
			b = nn % 10;
		}
		nn = (a + b) % 10 + (b*10);
		cycle++;
	} while (nn != n);

	cout << cycle;

	return 0;
}

