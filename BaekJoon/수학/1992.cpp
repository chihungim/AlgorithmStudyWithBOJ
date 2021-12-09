#include <iostream>
using namespace std;


bool PrimeArray[1000001];

void Erastos(int m)
{
	if (m <= 1) return;

	for(int i = 2; i<=m; i++)
		PrimeArray[i] = true;


	for(int i = 2; i*i<=m; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= m; j += i)
				PrimeArray[j] = false;
	}
}

int main(int argc, char* argv[])
{
	int n, m;
	cin >> n >> m;
	Erastos(m);


	for(int i = n; i<=m; i++)
	{
		if (PrimeArray[i])
			cout << i << "\n";
	}

}
