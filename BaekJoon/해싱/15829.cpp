#include <iostream> 
#include <string> 
using namespace std; 
const int m = 1234567891;

int main(void) { 
    int l; 
    cin >> l;
    string s;
    cin >> s;
    long long hash = 0,r = 1;
	
    for (int i = 0; i < l; i++) { 
        hash = (hash + (s[i] - 'a' + 1) * r) % m; 
        r = (r*31) % m; 
    } 
    cout << hash << "\n"; 
    return 0; 
}



