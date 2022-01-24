#include <iostream>
#define ball 1
using namespace std;


int main(int argc, char* argv[])
{
	int cups[] = { ball,0,0 };
	int m;
	cin >> m;
	while(m--)
	{
		int a, b; cin >> a >> b;
		swap(cups[a - 1], cups[b - 1]);
	}

	for(int i = 0; i<3; i++)
		if(cups[i] == ball)
			cout << i + 1;

	return 0;
}
