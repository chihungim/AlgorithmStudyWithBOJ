#include <iostream>
#include <vector>

using namespace std;


int arr[100001], s[100001];

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	for(int i= 1; i<=n; i++)
	{
		cin >> arr[i];
		s[i] = s[i - 1] + arr[i];
	}
	
	while(m--)
	{
		int i, j;
		cin >> i >> j;
		
		cout << s[j] - s[i-1] << "\n";
	}

}
