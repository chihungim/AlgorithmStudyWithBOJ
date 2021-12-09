#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int filter[10001];

int main(int argc, char* argv[])
{
	int m, n;

	
	cin >> m >> n;
	for (int i = 2; i <= n; i++)
		filter[i] = i;

}
