#include <iostream>

using namespace  std;

//

int main()
{
	int a = 0, b = 0, c = 0, cnt = 1; //고정 비용 a 생산비 b 가격 c
	cin >> a >> b >> c;

	if (b >= c) 
		cout << -1;
	else
		cout << a / (c - b) + 1;	
	return 0;
}