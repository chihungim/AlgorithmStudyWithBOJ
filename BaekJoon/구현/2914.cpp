#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int l, result = 1;
	double a;
	cin >> a >> l;
	while (l != static_cast<int>(ceil(result / a)))result++;
	cout << result;
}
