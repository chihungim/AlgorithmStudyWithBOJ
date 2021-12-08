

#include <iostream>

using namespace  std;

int main()
{
	int result = 0;
	int nums[10] = { 0, };
	
	for(int i =0; i<10; i++)
	{
		cin >> nums[i];
		nums[i] = nums[i] % 42;
	}

	for(int i = 0; i<10; i++)
	{
		int cnt = 0;
		for(int j = i+1; j<10; j++ )
		{
			if (nums[i] == nums[j])
				cnt++;
		}
		if (cnt == 0)
			result++;
	}

	cout << result; 
	
	return 0;
}

