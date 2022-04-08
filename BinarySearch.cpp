//************** Day - 1 **************

//************ Binary Search ***********

// Implementation: C++

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#include<iostream>
#include<vector>
using namespace std;


int BinarySearch(vector<int> nums, int target)
{
	int first,last,midpoint;

	first = 0;
	last = nums.size() - 1;

	while(first<=last)
	{
		midpoint = (first+last)/2;

		if(nums[midpoint] == target)
			return midpoint;
		else if(nums[midpoint] < target)
			first  = midpoint + 1;
		else
			last = midpoint - 1;

	}

	return -1;

}



void verify(int index)
{
	if(index!= -1)
		cout << "The element is in the list and is at " << index  << endl;
	else
		cout << "The element is not in the list" << endl;
}



int main()
{
	vector<int> arr {1,2,3,4,5,6,7,8,9,10};
    int result = BinarySearch(arr, 6);
    verify(result);
}