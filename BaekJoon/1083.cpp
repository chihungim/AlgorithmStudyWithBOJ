#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;


int main(int argc, char* argv[])
{
	int n = 0, s = 0;

	cin >> n;
	vector<int> elements(n);

	for (auto& val : elements)
		cin >> val;
	cin >> s;


	/*for(int i = 0; i<n; i++)
	{
		int max_idx = i;
		for(int j = i+1; j<=i+s && j<n;j++)
			if (elements[max_idx] < elements[j]) max_idx = j;

		
		for(int j = max_idx; j>i; j--)
		{
			swap(elements[j], elements[j - 1]);
			s--;
		}
	}*/
	
		while(s > 0)
			for(int j = 2; j<elements.size(); j+=2)
				if(elements[j-2] < elements[j-1])
				{
					swap(elements[j-2], elements[j - 1]);
					if (is_sorted(elements.begin(), elements.end())) break;
					s--;
				}
		
	for(auto e : elements)
		cout << e << " ";
	
		
	
	return 0;
}
