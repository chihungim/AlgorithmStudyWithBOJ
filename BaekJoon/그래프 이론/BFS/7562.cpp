#include <iostream>
#include <queue>

using namespace std;

struct matrix
{
	int r, c;
	
};

int l;

matrix dir[] = {
	{-2,1},
	{-1,2},
	{1,2},
	{2,1},
	{2,-1},
	{1,-2},
	{-1,-2},
	{-2,-1}};

int bfs(const matrix& start, const matrix& end);

int main(){
	int n;
	cin >> n;
	while(n--){
		matrix start, end;
		cin >> l;
		cin >> start.c >> start.r; 
		cin >> end.c >> end.r;
		cout << bfs(start, end) << "\n";
	}
	
	return 0;
}

int bfs(const matrix& start, const matrix& end)
{
	int map[300][300] = {0,};
	bool visited[300][300]= {false,};

	queue<matrix> q;
	q.push(start);
	visited[start.r][start.c] = true;

	while(!q.empty())
	{
		const auto& cir = q.front();

		if(cir.r == end.r && cir.c == end.c)
			return map[end.r][end.c];
		q.pop();
		
		for(const auto& d : dir)
		{
			matrix to = matrix{ cir.r + d.r, cir.c + d.c };
			if (to.r < 0 || to.r > l - 1 || to.c < 0 || to.c > l - 1) continue;
			if (visited[to.r][to.c]) continue;
			visited[to.r][to.c] = true;
			map[to.r][to.c] = map[cir.r][cir.c] + 1;
 			q.push(to);
		}
	}
	return -1;
}
