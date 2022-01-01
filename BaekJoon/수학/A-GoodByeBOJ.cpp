#include <iostream>
#include <vector>

using namespace std;

int nums[10001] = { 0,1,0, };

void filter(int n)
{
	for(int p = 2; p<= n; p++)
	{
		if (!nums[p])
			for (int i = 2; p * i <= n; i++)
				nums[p * i] = 1;
	}
}

int main(int argc, char* argv[])
{
	int n;
	cin >> n;

	if(n == 2 || n == 1)
	{
		cout << 6;
		return 0;
	}
	
	filter(n);

	vector<int> v;

	for (int i = 0; i <= n; i++)
		if (!nums[i])
			v.push_back(i);

	
	for(int i = 1; i<v.size(); i++)
	{
		if(n < v[i - 1] * v[i])
		{
			cout << v[i - 1] * v[i] << "\n";
			break;
		}
	}

	return 0;
}
