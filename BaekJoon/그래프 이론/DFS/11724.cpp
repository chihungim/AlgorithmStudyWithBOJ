#include <iostream>
#include <cstring>


using namespace std;

constexpr int max_vtx = 1001;
int n = 0, m = 0;

int adj_mat[max_vtx][max_vtx] = { {0,} };
int label_value = 0;
int label[max_vtx];

void reset_label()
{
	memset(label, 0, sizeof label);
}

void insert_edge(const int i, const int j)
{
	adj_mat[i][j] = adj_mat[j][i] = 1;
}

bool is_linked(const int v, const int u)
{
	return adj_mat[v][u];
}

void label_dfs(const int v)
{
	label[v] = label_value;

	for (int u = 1; u <= n; u++)
		if (is_linked(v, u) && label[u] == 0)
			label_dfs(u);
}

void fcc() //find connected component
{
	label_value = 0;
	
	for (int i = 1; i <= n; i++)
		if (label[i] == 0)
		{
			label_value++;
			label_dfs(i);
		}
	
	cout << label_value << "\n";
}

auto main() -> int
{

	cin >> n >> m;

	for(int i =0; i<m; i++)
	{
		int v = 0, u = 0;
		cin >> v >> u;
		insert_edge(v, u);
	}
	fcc();
	return 0;
}

