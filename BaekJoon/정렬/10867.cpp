#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[])
{
	set<int> s;
	int n;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		int temp; cin >> temp;
		s.insert(temp);
	}

	for (int i : s)
		cout << i <<" ";

	return 0;
}
