#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int ÆşÆş = 0, Áö·Ú= 0;

	for (int i = 0; i < 5; i++)
	{
			cin >> ÆşÆş;
			Áö·Ú += (ÆşÆş*ÆşÆş);
	}

	auto ÆşÆş³² = Áö·Ú % 10;

	cout << ÆşÆş³²;
}
