#include <iostream>
#include <array>
using namespace std;
/*

C���(�л���) IQ * C��� ������ �� < C��� �������� �� IQ

C���(�л���) IQ * ������ ������ �� > ������ �������� �� IQ
 */

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;

	
	while(t-->0)
	{
		int m = 0, n = 0, r = 0;
		long suma = 0, sumb = 0;
		cin >> n >> m;

		auto *arr  = new long[n];

		//n
		for(int i = 0; i<n; i++)
		{
			cin >> arr[i];
			suma += arr[i];
		}

		//m
		for(int i = 0; i<m; i++)
		{
			int input = 0;
			cin >> input;
			sumb += input;
		}

		
		for (int i = 0; i < n; i++) if (arr[i] * n < suma &&arr[i] * m > sumb) r++;
		
		cout << r << "\n";
		delete[] arr;
	}
}
