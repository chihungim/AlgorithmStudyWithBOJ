#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string input[8];
	for (auto& i : input)
		cin >> i;
	int cnt = 0;

	for(int i = 0; i<8; i++)
		for(int j = 0; j<8; j++)
			if ((i + j) % 2 == 0 && input[i][j] == 'F')
				cnt++;

	cout << cnt << "\n";
}
