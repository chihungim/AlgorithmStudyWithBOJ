#include <iostream>
#include <array>

using namespace std;

//todo: 미해결 문제

int main(int argc, char* argv[])
{
	int arr[10][10] = { 0, };

	int cnt = 100, row  = 0, col = 0, rate = 10, dir = 1;
	
	while(cnt != 0)
	{
		arr[row][col] = cnt;
		if(row < rate || col < rate)
		{
			row += dir;
			
			col += dir;
		}
	

		
		cnt--;
	}
	
	
	
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
}
