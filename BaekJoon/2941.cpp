#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string croatian[] = { "c=","c-", "dz=","d-","lj","nj","s=","z="};
	string str;
	cin >> str;
	for(string cr : croatian)
	{
		
		while(str.find(cr) != string::npos)
		{
			str.replace(str.find(cr), cr.length(), "@");
		}
	}

	cout << str.length();
	//정규식 없이 해보자
}