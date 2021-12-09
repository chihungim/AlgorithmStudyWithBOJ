#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;

	cin >> n;
	
	for(int i = 2; i<=n; i++)
	{
		while(n%i == 0)
		{
			n /= i;
			cout << i << "\n";
		}
	}
}
