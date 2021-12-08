#include <iostream>
#include <string>
#include <cmath>
using namespace  std;
long long arr[10] = { 0 };

void numberOf2sinRange(long long n)
{
    string s = "";
    for (int i = 0; i < n + 1; i++)
        s += to_string(i);
    int count = 0;
    for(int i = 0; i<10; i++)
    {
        count = 0;
        for (int j = 0; j < s.length(); j++)
            if (s[j] == i + '0')
                count++;          
        arr[i] = count;
    }
	
}

int main()
{
	long long n = 0;
	cin >> n;

	for (auto v : arr)
		cout << v << " ";

}