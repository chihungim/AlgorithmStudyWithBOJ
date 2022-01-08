#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	auto getSum = [](map<string, int> m)
	{
		float total = 0;
		for (auto& mm : m)
			total += mm.second;
		return total;
	};
	
	map < string, int> tree_map;
	string tree_type;
	while(!getline(cin, tree_type).eof())
	{
		const auto condition = tree_map.insert({ tree_type, 1 });
		if (!condition.second)
			tree_map[tree_type]++;
	} 

	const auto &sum = getSum(tree_map);

	cout.precision(4);
	
	for(const auto& m : tree_map)
		cout << fixed << m.first <<  " " <<  ((m.second / sum) * 100.0) << "\n";
}
