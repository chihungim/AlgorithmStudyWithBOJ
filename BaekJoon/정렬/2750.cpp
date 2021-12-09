#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct boj
{
	int age = 0;
	string name;
	int id = 0;
};


int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	vector<boj> v(n);

	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i].age >> v[i].name;
		v[i].id = i;
	}

	sort(v.begin(), v.end(), [](boj a, boj b)
		{
			if (a.age == b.age)
				return a.id < b.id;
			return a.age < b.age;
		});

	for (auto& val : v)
		cout << val.age << " " << val.name << "\n";
}
