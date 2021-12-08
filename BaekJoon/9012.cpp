#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

string chk(string &vp)
{
	stack<char> st;
	for(auto v : vp)
	{
		if (v == '(') 
			st.push('(');
		else
		{
			if(!(st.empty()))
			{
				st.pop();
			}
			else
			{
				return "NO";
			}
		}
	}	
	if (st.empty())
		return "YES";
	else
		return "NO";
}

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;

	while(t--)
	{
		string str;
		cin >> str;
		cout << chk(str) << "\n";


	}
}
