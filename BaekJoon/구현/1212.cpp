#include <iostream>
#include <bitset>

using namespace std;

string Oct2Bin(string& s)
{
	string result;
	if (s == "0")
	{
		result = "0\n";
		return result;
	}

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i] - '0')
		{
		case 0:
			result += "000";
			break;
		case 1:
			if (!i)
				result += "1";
			else
				result += "001";
			break;
		case 2:
			if (!i)
				result += "10";
			else
				result += "010";
			break;
		case 3:
			if (!i)
				result += "11";
			else
				result += "011";
			break;
		case 4:
			result += "100";
			break;
		case 5:
			result += "101";
			break;
		case 6:
			result += "110";
			break;
		case 7:
			result += "111";
			break;
		}
	}
	return result;
}

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string oct_v;
	cin >> oct_v;
	cout << Oct2Bin(oct_v);

	return 0;
}
