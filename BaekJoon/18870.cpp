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

    sort(v1.begin(), v1.end()); //sort ��
    v1.erase(unique(v1.begin(), v1.end()), v1.end()); //�ߺ� ��Ҹ� �ڷ� ������ ����
   
    for (auto c : v2) {
        cout << lower_bound(v1.begin(), v1.end(), c) - v1.begin() << ' '; //�̹� ������ �� �����̱⿡ �̺�Ž�� ����
    }
    return 0;
}