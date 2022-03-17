#include <iostream>
#include <vector>
#include <queue>

#define N_VER 5

using namespace std;

class Node
{
private:
	Node* from = nullptr;
	int me;
public:
	Node(int _me, Node* _from)
	{
		me = _me;
		from = _from;
	}

	int getVertex()
	{
		return me;
	}

	Node *getFrom()
	{
		return from;
	}
	
};

vector<pair<int,int>> _graph[N_VER];

void Backtrack_AStar(Node& end) {

}

void A_Star(int vStart, int vEnd)
{
	using ii = pair<int, Node*>;
	priority_queue<ii, greater<>, vector<ii>> pq;

	int dist[N_VER], cost[N_VER][N_VER];
	pq.push(make_pair(0, new Node(vStart, nullptr)));

	while(!pq.empty())
	{
		auto& v = pq.top(); pq.pop();
		if(v.second().getVertex() == vEnd)
		{
			Backtrack_AStar(v.second());
			return;
		}
		
	}
}



int main(int argc, char* argv[])
{

}

