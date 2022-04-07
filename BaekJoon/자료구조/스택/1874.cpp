#include<iostream>
#include<stack>
#include <vector>

using namespace std;

int main() {
    int n, x, max(0);
    cin >> n;
    vector<char> ans;
    stack<int> s;
    while (n--) {
        std::cin >> x;
        if (x > max) {
            for (int i = max + 1; i <= x; i++) {
                s.push(i);
                ans.push_back('+');
            }
        }
        else
            if (s.top() != x) {
                std::cout << "NO";
                return 0;
            }
        s.pop();
        ans.push_back('-');
        if (max < x) max = x;
    }

    for(auto& a : ans)
    {
        cout << a << "\n";
    }

    return 0;
}