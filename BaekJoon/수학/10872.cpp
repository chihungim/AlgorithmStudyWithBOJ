#include <iostream>

using namespace std;
int factorial(int n) {
    if (n == 0)
        return 1;
    if (n > 2)
        n *= factorial(n - 1);
    return n;
}
int main()
{
    int n = 0;
    cin >> n;
    cout << factorial(n);
}
