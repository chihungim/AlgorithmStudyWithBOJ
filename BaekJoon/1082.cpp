#include <iostream>
#include <algorithm>
#include <vector>

/*
 *스타트링크가 입주한 사무실은 방 번호를 직접 정할 수 있다. 방 번호를 정하려면
 *1층 문방구에서 파는 숫자를 구매해야 한다.
 *숫자를 구매하기 위해 준비한 금액은 M원이고, M원을 모두 사용해야 한다.
 */

using namespace std;


int main(int argc, char* argv[])
{
	int n = 0, m = 0, sum = 0, r = 0;
	cin >> n;
	vector<int> p(n);
	for (auto& pr : p)
	{
		cin >> pr;
		sum += pr;
	}
	cin >> m;
	
	if(sum == m)
	{

	}
	else
	{
		
	}

}



