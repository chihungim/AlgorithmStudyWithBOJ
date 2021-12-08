#include <iostream>
#include <vector>
#define MAX_V 626

using namespace std;

namespace grh
{
	int label = 0;
	struct Node
	{
		int id;
		Node* linked; //LinkedNode
		Node(int _id, Node* _linked) : id(_id), linked(_linked) {}
	};

	class ListGraph
	{
		int size = 0;
		Node* vertices[MAX_V];

		void addVertice(int v)
		{
			vertices[size++] = new Node(v, nullptr);
		}

		void addEdge(int v, int u)
		{
			vertices[v]->linked = vertices[u];
		}

		bool isConnectd(int v, int u)
		{
			return vertices[v]->linked == vertices[u];
		}
	};
}

bool isEqual(const pair<int, int>& e, const pair<int, int>& c)
{
	return e.first == c.first && e.second == c.second;
}


int main(int argc, char* argv[])
{
	vector<pair<int, int>> v;
	v.emplace_back(1, 1);
	cout << (find(v.begin(), v.end(), make_pair<int, int>(1, 1)) - v.begin());
}



void dfs(int n)
{
	
}
