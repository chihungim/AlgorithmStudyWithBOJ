#include <iostream>
#include <vector>
#include <algorithm>

int main(){int N;std::vector<int> A(10);std::cin >> N;while(N--){for (auto& a : A) std::cin >> a;sort(A.begin(), A.end(), std::greater<int>());std::cout << A[2] << '\n';}return 0;}
