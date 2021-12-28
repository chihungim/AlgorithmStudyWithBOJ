#include <iostream>

using namespace std;


int getCorrect(int h, int k)
{
	int cnt = 0;
	if (h < k)
	{
		for (int i = h; i < k; i++)
			cnt++;
		return cnt;
	}
	else if (h > k)
	{
		for (int i = h; i > k; i--)
			cnt--;
		return cnt;
	}
	else
		return 0;
}

int main(int argc, char* argv[])
{
	int k, q, l, b, n, p;
	cin >> k >> q >> l >> b >> n >> p;

	cout << getCorrect(k, 1) << " " << getCorrect(q, 1) << " " << getCorrect(l, 2) << " " << getCorrect(b, 2) << " " << getCorrect(n, 2) << " " << getCorrect(p, 8);
}
