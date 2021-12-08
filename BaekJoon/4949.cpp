#include <stack>
#include <iostream>
#include <vector>
using namespace std;


void check(string str)
{

	stack<char> p;

	string ans = "yes";

	for (int i = 0; i < str.length(); i++)
	{
		if (p.empty() && (str[i] == ')' || str[i] == ']')){
			ans = "no";
			break;
		}
		
		if (str[i] == '(' || str[i] == '[') {
			p.push(str[i]);
		}
		if (str[i] == ')' && p.top() == '(') 
			p.pop();
		else if(str[i] == ')' && p.top() != '(') {
			ans = "no";
			break;
		}
		if (str[i] == ']' && p.top() == '[') 
			p.pop();
		else if(str[i] == ']' && p.top() != '[')
		{
			ans = "no";
			break;
		}
	}

	if (!p.empty())
		ans = "no";

	cout << ans << "\n";

}

int main(int argc, char* argv[])
{
	string str1;
	while (true)
	{
		str1.clear();
		str1.shrink_to_fit();
		char a = ' ';
		while (a != '.')
		{
			cin.get(a);
			str1.push_back(a);
		}

		if (str1[1] == '.')
			break;

		check(str1);
	}
	return 0;
}
