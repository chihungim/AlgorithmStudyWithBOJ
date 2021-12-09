#include <iostream>
using namespace std;

#define MAX 123456 * 2

int arr[MAX + 1];

int main()
{


	//그냥 함수에서 내려놨는데 되네 ㅅㅂ;
	for (int i = 2; i <= MAX; i++)
		arr[i] = i;

	for (int i = 2; i * i <= MAX; i++) {
		if (arr[i] == 0)
			continue;

		for (int j = i * i; j <= MAX; j += i)
			arr[j] = 0;
	}

	while (true)
	{
		int n;
		cin >> n;

		if (n == 0)
			break;

		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (arr[i] != 0)
				cnt += 1;
		cout << cnt << '\n';
	}

	return 0;
}