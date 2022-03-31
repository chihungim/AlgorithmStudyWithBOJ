#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;

    int n, ans = 0, num1, in;
    cin >> n;
    cin >> num1;
    n--;
    while (n--) {
        cin >> in;
        if (in >= num1) pq.push(in);
    }

    while (!pq.empty() && pq.top() >= num1) {
        int t = pq.top(); pq.pop();
        t--;
    	ans++;
    	num1++;
        pq.push(t);
    }

    cout << ans << "\n";
}