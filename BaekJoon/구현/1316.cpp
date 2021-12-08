#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGroupWord(string &str)
{
	if (str.length() == 1 || str.length() == 2 ) return true;
	
	int abc[26] = {0,};
	for (int i = 0; i < str.length(); i++)
		abc[str[i] - 97]++;

	for(int i = 0; i<26; i++)
	{
		if(abc[i] > 1)
		{
			int prev = str.find(i + 97), next = 0;
			while (prev != string::npos)
			{
				str[prev] = '\0';
				next = str.find(i + 97);
				if (next == string::npos) break;
				if (next - prev != 1) return false;
				prev = next;
			}
		}
	}
	return true;
}

int main()
{
	int n = 0, cnt = 0;
	cin >> n;

	for(int i = 0; i<n; i++)
	{
		string str;
		cin >> str;
		if (isGroupWord(str))
			cnt++;
	}
	cout << cnt;

	return 0;
}