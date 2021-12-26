#include <iostream>

using namespace std;

struct circle
{
	int x, y, r;
	circle(int _x, int _y, int _r)  : x(_x), y(_y), r(_r){}

	bool entered(int x1, int y1, int x2, int y2);
	bool departed(int x1, int y1, int x2, int y2);
};

bool circle::entered(int x1,int y1, int x2, int y2)
{
	if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
		if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
			return true;
	return false;
}

bool circle::departed(int x1, int y1, int x2, int y2)
{
	if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
		if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
			return true;
	return false;
}

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int ent = 0, dep = 0,n;
		cin >> n;
		while (n--)
		{
			circle c(0,0,0);
			cin >> c.x >> c.y >> c.r;
			if (c.departed(x1, y1, x2, y2))
				dep++;
			if (c.entered(x1, y1, x2, y2))
				ent++;
		}
		cout << ent + dep << "\n";
	}
}
