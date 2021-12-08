#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;


int getMode(vector<int> &v)
{

	int modes[8002] = {0,};
	for(auto val : v)
	{
		modes[val + 4000]++;
	}

	const int max_cnt = *max_element(&modes[0], &modes[8001]);
	vector<int> yeah;

	for(int i = 0;  i<sizeof(modes)/4; i++)
	{
		if(modes[i] == max_cnt)
		{
			yeah.push_back(i - 4000);
		}
	}

	sort(yeah.begin(), yeah.end());

	return yeah.size() < 2 ? yeah[0] : yeah[1];
}


int main()
{
	int n = 0 , avg = 0, mid = 0,  mode = 0, rg = 0;
	cin >> n;
	vector<int> values(n);
	for (auto &v : values)
	{
		cin >> v;
		avg += v;
	}

	avg = round((float)avg/ n);
	sort(values.begin(), values.end());
	mid = values[values.size()/2];
	rg = values.size() < 2 ? 
		0 :
	values[n - 1] - values[0];
	mode = getMode(values);

	std::cout << avg << "\n" << mid << "\n" << mode << "\n" << rg;

	return 0;
}