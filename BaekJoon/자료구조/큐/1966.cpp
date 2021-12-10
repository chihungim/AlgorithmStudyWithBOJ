#include <iostream>
#include <queue>

using std::cin;
using std::cout;
using std::priority_queue;


struct document
{
	int index = 0;
	int priority = 0;
};

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;

	auto comp = [](document d1, document d2)
	{
		if (d1.priority == d2.priority)
			return d1.index < d2.index;
		return d1.priority < d2.priority;
	};
	
	while (t--)
	{
		int n = 0, m = 0; //n-> 문서의 개수, m-> 현재 문서의 위치
		cin >> n >> m;
		priority_queue<document, std::vector<document>, decltype(comp)> pq(comp);

		for (int i = 0; i < n; i++)
		{
			document doc;
			cin >> doc.priority;
			doc.index = i;
			pq.push(doc);
		}

		int order = 0;
		
		while(pq.top().index != m )
		{
			order++;
			pq.pop();
		}

		cout << order << "\n";
	}
}
