#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arr[26] = { 0, };
	string str;
	cin >> str;

	for(int i = 0; i<26; i++)
	{
		arr[i] = -1;
		for(int j = 0; j < str.size(); j++)
		{
			if(str[j] == i+97 && arr[i] == -1)
			{
				arr[i] = j;
			}
			
		}

		cout << arr[i] << " ";
	}
	
}