#include <iostream>
#define ll long long

ll cache[101] = {1,1,1,2,2};

using namespace std;

ll solution(int n)
{
	for(int i = 5; i<n; i++)
		cache[i] = cache[i - 1] + cache[i -5];
	
	return cache[n - 1];
}

int main(int argc, char* argv[])
{

	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << solution(n) << '\n';
	}
}
