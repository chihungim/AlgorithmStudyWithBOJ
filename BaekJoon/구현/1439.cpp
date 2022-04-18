#include <iostream>
#include <string>

using namespace std;


//todo: Solve this

bool isCOR(string& str) // contains one range
{
	int j1 = 0, j2 = 0;
	bool f1 = true, f2 = false;

	for(int i = 0; i<str.length(); i++)
	{
		if(f1 && str[i]== '1')
		{
			f1 = false;
			j1 = i;
		}

		
	}
}


int main()
{
	string str;
	cin >> str;
	//연속하는 숫자가 하나만 존재한다면?

	


	//연속하는 숫자가 아니라면?
	
}