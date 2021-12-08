#include <iostream>
#include <array>


using namespace std;

int main(int argc, char* argv[])
{
	array<array<char, 100>, 100> board{ {0,}, };
	array<array<char, 8>, 8> chessboard{ {0,}, };
	int n, m;
	cin >> n >> m;

	if(n == 8 && m == 8)
	{
		for(auto &row : chessboard)
		{
			for(auto& col : row)
			{
				cin >> col;
			}
		}
	}
	
}
