#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

struct rc
{
	int r, c;
	rc(int _r, int _c) :r(_r), c(_c) {}
	friend bool operator == (rc const& left, rc const& right);

};

bool operator==(rc const& left, rc const& right)
{
	return left.r == right.r && left.c == right.c;
}

int n;

vector<rc> _log;
vector<rc> goal;
vector<tuple<rc, rc, rc>> visit;
array <string, 51> flat;

int bfs(vector<rc> _log);
bool chk(rc rc1, rc rc2, rc rc3);
bool vertical(rc rc1, rc rc2, rc rc3);
bool turn_able(rc rc2);
tuple<rc, rc, rc, int> up(tuple<rc, rc, rc, int> t);
tuple<rc, rc, rc, int> down(tuple<rc, rc, rc, int> t);
tuple<rc, rc, rc, int> left(tuple<rc, rc, rc, int> t);
tuple<rc, rc, rc, int> right(tuple<rc, rc, rc, int> t);
tuple<rc, rc, rc, int> turn(tuple<rc, rc, rc, int> t);

void display(rc r1, rc r2, rc r3, int dep);

//void up();
//void down();
//void left();
//void right();
//void turn();



int main(int argc, char* argv[])
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> flat[i];
		for (int j = 0; j < flat[i].length(); j++)
		{
			if (flat[i][j] == 'B')
				_log.emplace_back(i, j);

			if (flat[i][j] == 'E')
				goal.emplace_back(i, j);
		}
	}

	//cout << _log[0].r << " " << _log[0].c << "\n";
	//cout << _log[1].r << " " << _log[1].c << "\n";
	//cout << _log[2].r << " " << _log[2].c << "\n";
	

	cout << bfs(_log) << "\n";
}

bool chk(rc rc1, rc rc2, rc rc3)
{
	bool comp1 = (rc1.r > -1 && rc2.r > -1 && rc3.r > -1) && (rc1.r < n && rc2.r < n && rc3.r < n);
	bool comp2 = (rc1.c > -1 && rc2.c > -1 && rc3.c > -1) &&  (rc1.c < n && rc2.c < n && rc3.c < n);
	//cout <<rc1.r << " " << rc1.c << "\n" << rc2.r << " " << rc2.c << "\n" << rc3.r << " " << rc3.c << "\n" << "r:" << (comp1 && comp2 && !(flat[rc1.r][rc1.c] == '1' || flat[rc2.r][rc2.c] == '1' || flat[rc3.r][rc3.c] == '1')) << "\n------------------------------------------------\n";
	return comp1 && comp2 && !(flat[rc1.r][rc1.c] == '1' || flat[rc2.r][rc2.c] == '1' || flat[rc3.r][rc3.c] == '1');
}




bool vertical(rc rc1, rc rc2, rc rc3)
{
	return rc1.c == rc2.c && rc3.c == rc2.c;
}

bool turn_able(rc rc2)
{
	rc n1(rc2.r + 1,rc2.c + 1), n2(rc2.r + 1, rc2.c), n3(rc2.r + 1, rc2.c - 1);
	rc c1(rc2.r, rc2.c + 1), c2(rc2.r, rc2.c), c3(rc2.r, rc2.c - 1);
	rc s1(rc2.r - 1, rc2.c + 1), s2(rc2.r - 1, rc2.c), s3(rc2.r - 1, rc2.c - 1);
	bool comp1 = chk(n1, n2, n3);
	bool comp2 = chk(c1, c2, c3);
	bool comp3 = chk(s1, s2, s3);
	return comp1 && comp2 && comp3;
}

tuple<rc, rc, rc, int> up(tuple<rc,rc,rc,int> t)
{
	int r1 = get<0>(t).r - 1;
	int r2 = get<1>(t).r - 1;
	int r3 = get<2>(t).r - 1;
	if(chk({r1, get<0>(t).c}, { r2, get<1>(t).c }, { r3, get<2>(t).c }))
	{
		get<0>(t).r = r1;
		get<1>(t).r = r2;
		get<2>(t).r = r3;
	}
	get<3>(t)++;
	return t;
}

tuple<rc, rc, rc, int> down(tuple<rc, rc, rc, int> t)
{
	int r1 = get<0>(t).r + 1;
	int r2 = get<1>(t).r + 1;
	int r3 = get<2>(t).r + 1;
	if (chk({ r1, get<0>(t).c }, { r2, get<1>(t).c }, { r3, get<2>(t).c }))
	{
		get<0>(t).r = r1;
		get<1>(t).r = r2;
		get<2>(t).r = r3;
	}
	get<3>(t)++;
	return t;
}

tuple<rc, rc, rc, int> left(tuple<rc, rc, rc, int> t)
{
	int c1 = get<0>(t).c - 1;
	int c2 = get<1>(t).c - 1;
	int c3 = get<2>(t).c - 1;
	if (chk({ get<0>(t).r,c1 }, { get<1>(t).r, c2 }, { get<2>(t).r ,c3 }))
	{
		get<0>(t).c = c1;
		get<1>(t).c = c2;
		get<2>(t).c = c3;
	}
	get<3>(t)++;
	return t;
}

tuple<rc, rc, rc, int> right(tuple<rc, rc, rc, int> t)
{
	int c1 = get<0>(t).c + 1;
	int c2 = get<1>(t).c + 1;
	int c3 = get<2>(t).c + 1;
	if (chk({ get<0>(t).r,c1 }, { get<1>(t).r, c2 }, { get<2>(t).r,c3 }))
	{
		get<0>(t).c = c1;
		get<1>(t).c = c2;
		get<2>(t).c = c3;
	}
	get<3>(t)++;
	return t;
}

tuple<rc, rc, rc, int> turn(tuple<rc, rc, rc, int> t)
{

	//8방향으로 확인	
	if (turn_able(get<1>(t)))
	{
		if (vertical(get<0>(t), get<1>(t), get<2>(t)))
		{
			int r2 = get<1>(t).r;
			int c1 = get<1>(t).c - 1;
			int c3 = get<1>(t).c + 1;
			get<0>(t).c = c1; get<0>(t).r = r2;
			get<2>(t).c = c3; get<2>(t).r = r2;

		}
		else
		{
			int c2 = get<1>(t).c;
			int r1 = get<1>(t).r - 1;
			int r3 = get<1>(t).r + 1;
			get<0>(t).c = c2; get<2>(t).c = c2;
			get<0>(t).r = r1; get<2>(t).r = r3;
		}
	}
	get<3>(t)++;
	return t;
}

void display(rc r1, rc r2, rc r3, int dep)
{
	cout << dep << "-----------------\n" ;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
			if (r1 == rc(i, j) || r2 == rc(i, j) || r3 == rc(i, j))
				cout << "B ";
			else
				cout << "0 ";
		cout << "\n";
	}
}


int bfs(vector<rc> _log)
{
	queue<tuple<rc, rc, rc, int>> q;
	q.emplace(_log[0], _log[1], _log[2], 0);
	visit.emplace_back(_log[0], _log[1], _log[2]);
	
	while (!q.empty())
	{
		auto p1 = get<0>(q.front());
		auto p2 = get<1>(q.front());
		auto p3 = get<2>(q.front());
		int dep = get<3>(q.front());
			
		//display(p1, p2, p3,dep);

		auto u = up(q.front());
		auto d = down(q.front());
		auto l = left(q.front());
		auto r = right(q.front());
		auto t = turn(q.front());

		q.pop();

		if (make_tuple(p1, p2, p3) == make_tuple(goal[0], goal[1], goal[2]))
			return dep;

		if (find(visit.begin(), visit.end(), make_tuple(get<0>(u), get<1>(u), get<2>(u))) == visit.end())
		{
			q.push(u);
			visit.emplace_back(get<0>(u), get<1>(u), get<2>(u));
		}
		if (find(visit.begin(), visit.end(), make_tuple(get<0>(d), get<1>(d), get<2>(d))) == visit.end())
		{
			q.push(d);
			visit.emplace_back(get<0>(d), get<1>(d), get<2>(d));
		}
		if (find(visit.begin(), visit.end(), make_tuple(get<0>(l), get<1>(l), get<2>(l))) == visit.end())
		{
			q.push(l);
			visit.emplace_back(get<0>(l), get<1>(l), get<2>(l));
		}
		if (find(visit.begin(), visit.end(), make_tuple(get<0>(r), get<1>(r), get<2>(r))) == visit.end())
		{
			q.push(r);
			visit.emplace_back(get<0>(r), get<1>(r), get<2>(r));
		}
		if (find(visit.begin(), visit.end(), make_tuple(get<0>(t), get<1>(t), get<2>(t))) == visit.end())
		{
			q.push(t);
			visit.emplace_back(get<0>(t), get<1>(t), get<2>(t));
		}
	}
	return 0;
}







//void up()
//{
//	int r = pos.first, c = pos.second;
//	if (isVertical(r, c))
//	{
//		if (chk(r - 2, c, r - 1, c, r, c))
//		{
//			flat[r + 1][c] = '0';
//			flat[r - 2][c] = 'B';
//			pos.first = r - 1;
//		}
//	}
//
//	if (isHorizontal(r, c))
//	{
//		if (chk(r - 1, c - 1, r - 1, c, r - 1, c + 1))
//		{
//			flat[r][c - 1] = '0';  flat[r][c] = '0'; flat[r][c + 1] = '0';
//			flat[r - 1][c - 1] = 'B';  flat[r - 1][c] = 'B'; flat[r - 1][c + 1] = 'B';
//			pos.first = r - 1;
//		}
//	}
//}
//
//void down()
//{
//	int r = pos.first, c = pos.second;
//	if (isVertical(r, c))
//	{
//		if (chk(r, c, r + 1, c, r + 2, c))
//		{
//			flat[r - 1][c] = '0';
//			flat[r + 2][c] = 'B';
//			pos.first = r + 1;
//		}
//	}
//
//	if (isHorizontal(r, c))
//	{
//		if (chk(r + 1, c - 1, r + 1, c, r + 1, c + 1))
//		{
//			flat[r][c - 1] = '0';  flat[r][c] = '0'; flat[r][c + 1] = '0';
//			flat[r + 1][c - 1] = 'B';  flat[r + 1][c] = 'B'; flat[r + 1][c + 1] = 'B';
//			pos.first = r + 1;
//		}
//	}
//}
//
//void left()
//{
//	int r = pos.first, c = pos.second;
//	if (isVertical(r, c))
//	{
//		if (chk(r - 1, c - 1, r, c - 1, r + 1, c - 1))
//		{
//			flat[r - 1][c] = '0';
//			flat[r][c] = '0';
//			flat[r + 1][c] = '0';
//
//			flat[r - 1][c - 1] = 'B';
//			flat[r][c - 1] = 'B';
//			flat[r + 1][c - 1] = 'B';
//			pos.second = c - 1;
//		}
//	}
//
//	if (isHorizontal(r, c))
//	{
//		if (chk(r, c - 2, r, c - 1, r, c))
//		{
//			flat[r][c + 1] = '0';
//			flat[r][c - 2] = 'B';
//			pos.second = c - 1;
//		}
//	}
//}
//
//void right()
//{
//	int r = pos.first, c = pos.second;
//	if (isVertical(r, c))
//	{
//		if (chk(r - 1, c + 1, r, c + 1, r + 1, c + 1))
//		{
//			flat[r - 1][c] = '0';
//			flat[r][c] = '0';
//			flat[r + 1][c] = '0';
//
//			flat[r - 1][c + 1] = 'B';
//			flat[r][c + 1] = 'B';
//			flat[r + 1][c + 1] = 'B';
//			pos.second = c + 1;
//		}
//	}
//
//	if (isHorizontal(r, c))
//	{
//		if (chk(r, c + 2, r, c + 1, r, c))
//		{
//			flat[r][c - 1] = '0';
//			flat[r][c + 2] = 'B';
//			pos.second = c + 1;
//		}
//	}
//}
//
//void turn()
//{
//	int r = pos.first, c = pos.second;
//	if (isVertical(r, c))
//	{
//		if (chk(r, c - 1, r, c, r, c + 1))
//		{
//			flat[r - 1][c] = '0';
//			flat[r + 1][c] = '0';
//			flat[r][c - 1] = 'B';
//			flat[r][c + 1] = 'B';
//		}
//	}
//	else if (isHorizontal(r, c))
//	{
//		if (chk(r - 1, c, r, c, r + 1, c))
//		{
//			flat[r][c - 1] = '0';
//			flat[r][c + 1] = '0';
//			flat[r - 1][c] = 'B';
//			flat[r + 1][c] = 'B';
//		}
//	}
//}