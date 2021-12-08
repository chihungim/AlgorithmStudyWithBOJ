#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1(n),v2(n);
   
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i];
    }

    sort(v1.begin(), v1.end()); //sort 후
    v1.erase(unique(v1.begin(), v1.end()), v1.end()); //중복 요소를 뒤로 보낸후 삭제
   
    for (auto c : v2) {
        cout << lower_bound(v1.begin(), v1.end(), c) - v1.begin() << ' '; //이미 정렬이 된 상태이기에 이분탐색 가능
    }
    return 0;
}