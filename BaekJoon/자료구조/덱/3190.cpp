#include <deque>
#include <vector>
#include <iostream>
#include <conio.h>

using namespace std;

int map[101][101] = { {0,}, };

int dirX[] = { 1,0,-1,0 };
int dirY[] = { 0,1,0,-1 };

//todo: 미해결 문제

struct tail
{
	int x, y; //push tails current pos
};

void display();


int main(int argc, char* argv[])
{

	int r = 0, c = 0, dir = 0;

	map[1][1] = 1;
	
	while(true)
	{
		int range;
		char cmd;
		cin >> range;
		cin >> cmd;

		if(cmd == 'L')
		{
			dir++;

			if (dir > 3)
				dir = 0;
		}
		else if(cmd == 'D')
		{
			if (dir < 0)
				dir = 3;
			dir--;
		}

		cout << "dir->idx:" << dir << "\n";
		
		
		for(int i = 0; i<range; i++)
		{
			r += dirY[dir];
			c += dirX[dir];
			memset(map, 0, sizeof map);
			map[r][c] = 1;
			display();
		}
	}
}


void display()
{

	cout << "--------------------------\n";
	
	for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<10; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}

}