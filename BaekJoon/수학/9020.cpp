#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char* argv[])
{
	int a[10001];

	int t;
	cin >> t;
	while (t--)
	{
		int min = 9999;
		int m1 = 0;
		int m2 = 0;
		int n = 0;
		cin >> n;

		a[0] = 0;
		a[1] = 0;

		for (int i = 2; i <= n; i++)
			a[i] = 1;

		for(int i = 2; i<=((int)sqrt(n)); i++ )
			for(int j = 2; i*j <=n ; j++)
				a[i * j] = 0;
		//°Å¸§¸· ¤»¤»¤»
		
		int hf = n / 2;
		for(int m = hf; m>=2; m--)
		{
			if(a[m] ==1  && a[n-m] ==1 && m <= n - m)
			{
				if(min > n-2*m)
				{
					min = n - 2 * m;
					m1 = m;
					m2 = n - m;
				}
			}
		}

		cout << m1 << ' ' << m2 << '\n';
	}
}


//bool isPrime(int n) {
//	int root = sqrt(n);
//	if (root == 1 && n != 1) {	
//		return true;
//	}
//	if (n % 2) {	
//		for (int i = 2; i <= root; i++) {
//			if (!(n % i))
//				return false;
//			if (i == root) {
//				return true;
//			}
//		}
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		int n;
//		cin >> n;
//
//		for (int i = n / 2; i >= 2; i--) {
//			if (isPrime(i) && isPrime(n - i)) {
//				cout << i << " " << n - i << '\n';
//				break;
//			}
//		}
//	}
//}
