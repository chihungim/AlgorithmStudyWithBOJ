#include <string>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

vector<string> split(string str, char delimiter)
{
	vector<string> v;
	string temp;

	for (int i = 0; !(str[i] == 13 || str[i] == '\n' || str[i] == 0); i++)
	{
		if (str[i] == delimiter)
		{
			v.push_back(temp);
			temp.clear();

			continue;
		}

		temp.push_back(str[i]);
	}
	v.push_back(temp);
	return v;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;
	map<string,int> m;
	
	while(n--)
	{
		string s;
		cin >> s;
		string extension = split(s, '.')[1];
		if (m.find(extension) == m.end())
			m[extension] = 1;
		else
			m[extension]++;
	}

	for (auto m1 : m)
	{
		cout << m1.first << " " << m1.second << '\n';
	}
}
