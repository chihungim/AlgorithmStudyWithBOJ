#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char input;
	cin >> input;
	if(tolower(input) == 'n')
		cout << "Naver D2";
	else
		cout << "Naver Whale";
	return 0;
}
