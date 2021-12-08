#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int get_sum(vector<int> v, int l)
{
	int s = 0;
	for(int i = 0; i<l; i++)
	{
		s += v[i];
	}
	return s;
}

int getResidenceCount(int k, int n)
{
	vector<vector<int>> floor;
	
	for(int i = 0; i<k; i++)
	{
		vector<int> tier;
		for(int j = 1; j<=n; j++)
		{
			if(i == 0)
				tier.push_back(j);
			else
				tier.push_back(get_sum(floor[i - 1], j));
		}
		floor.push_back(tier);
	}

	return get_sum(floor[k - 1], n);
	
}

int main()
{
	int t = 0;
	cin >> t;
	for(int i = 0; i<t; i++)
	{
		int k = 0, n = 0;
		cin >> k >> n;
		cout << getResidenceCount(k, n) << "\n";
	}

	return 0;
}