#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;


//TODO: 나중에 풀기

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }

    int previous[] = { 0, 1 };    

	for (int i = 2; i <= n; ++i) {
        previous[i & 1] += previous[(i - 1) & 1];   
    }
	
    return previous[n & 1];
}



int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unsigned long long n;
	cin >> n;
	cout << fibonacci(n);

}
