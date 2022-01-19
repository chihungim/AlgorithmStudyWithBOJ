#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n;
	cin >> n;
	vector<double> solution(n);

	for(auto& s : solution)
		cin >> s;


	cout.precision(2);

	for(auto s : solution)
	{
		cout << "$" << fixed << s * 0.8 << "\n";
	}
	
}
