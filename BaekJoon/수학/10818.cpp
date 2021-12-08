
#include <iostream>
#include <vector>


using namespace  std;

int main()
{
	int n = 0,  min = 2147483647, max = -2147483648 ;
	
	
	cin >> n;

	int* nums = new int[n];

	for(int i = 0; i<n; i++)
	{
		cin >> nums[i];
		if (nums[i] > max)
			max = nums[i];
		if (nums[i] < min)
			min = nums[i];
	}
	cout << min << " " << max;
	
	return 0;
}

