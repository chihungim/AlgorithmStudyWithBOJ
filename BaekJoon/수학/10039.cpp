#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int avg = 0;
	for(int i =0; i<5; i++)
	{
		int temp; cin >> temp;
		if (temp < 40)
			temp = 40;
		avg += temp;
	}

	cout << avg / 5;

	return 0;
}
