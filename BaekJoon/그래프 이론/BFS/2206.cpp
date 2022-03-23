#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <tuple>

using namespace std;

#define INF 2147483647

int dist[1000][1000][2];

int main(int argc, char* argv[])
{
	
	int n, m, answer = INF;
	cin >> n >> m;
	vector<string> map(n);
	
	for(auto& ma : map)
		cin >> ma;
	

	fill_n(&dist[0][0][0], 1000*1000*2, 0);
	
	int dirR[] = { 0,1,-1,0 }, dirC[] = { 1,0,0,-1 };

	function<int()> bfs = [&]()
	{
		queue<tuple<int, int , int>> q;
		dist[0][0][0] = 1;
		q.push({ 0, 0, 0 });

		while (!q.empty())
		{
			auto from = q.front();
			int r = get<0>(from), c = get<1>(from), fromBreak = get<2>(from);
			q.pop();
			if (r == n - 1 && c == m - 1)
				return dist[n - 1][m - 1][fromBreak];

			for (int i = 0; i < 4; i++)
			{
				auto nextR = r + dirR[i];
				auto nextC = c + dirC[i];
				auto nextBreak = fromBreak;
				if (nextR < 0 || nextR > n - 1 || nextC < 0 || nextC > m - 1) continue;
				if (dist[nextR][nextC][fromBreak]) continue;


				if (map[nextR][nextC] == '0') //부술 수 없다? 
				{
					dist[nextR][nextC][nextBreak] = dist[r][c][fromBreak] + 1;
					q.push({ nextR, nextC , fromBreak });
				}

				if (map[nextR][nextC] == '1'  && fromBreak == 0 ) //부술 수 있으면 부숨
				{
					dist[nextR][nextC][1] = dist[r][c][fromBreak] + 1;
					nextBreak = 1;
					q.push({ nextR, nextC, nextBreak });
				}
			}
		}

		return -1;
	};

	cout << bfs() << "\n";

	return 0;
}

