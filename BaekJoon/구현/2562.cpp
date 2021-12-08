
#include <iostream>
#include <vector>


using namespace  std;

int main()
{
	int  mIdx = 0, max = -2147483648;


	int nums[9] = {0,};

	for (int i = 0; i < 9; i++)
	{
		cin >> nums[i];
		if (nums[i] > max)
		{
			max = nums[i];
			mIdx = i+1;
		}
		
	}
	cout << max << "\n" << mIdx;

	return 0;
}

