
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void str_upper(string &str)
{
	for(auto& ch : str)
	{
		ch = static_cast<char>(toupper(ch));
	}
}


auto main() -> int
{
	
	int arr[26] = {0,};
	string str;
	cin >> str;
	str_upper(str);

	for(int i = 0; i<26; i++)
	{
		for(auto ch : str)
		{
			if(i+65 == ch)
			{
				arr[i]++;
			}
		}
	}

	int max = 0;
	char ch = '\0';

	for(int i = 0; i<26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			ch = static_cast<char>(i + 65);
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i] && i != ch-65)
		{
			cout << '?';
			return 0;
		}
	}
	cout << ch;
	
	return 0;
}
