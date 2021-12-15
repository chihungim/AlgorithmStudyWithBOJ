#include <string>
#include <iostream>

using namespace std;

//todo: 미해결 문제

int main(int argc, char* argv[])
{
	int n, m;
	string s, criteria = "";
	cin >> n >> m;
	cin >> s;
	for(int i = 0; i<n; i++)
		criteria.append("IOI");

	int cnt = 0;

	while (m--)
	{
		try
		{
			if (s.find(criteria) == string::npos)
				break;
			const int idx = s.find(criteria);
			s.erase(idx, n*2);
			cnt++;
		}
		catch (out_of_range &e)
		{
			break;
		}
	}

	cout << cnt << '\n';

}
