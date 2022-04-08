//************** Day - 1 **************

//************ Linear Search ***********

// Implementation: C++

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include<iostream>
#include <vector>
using namespace std;


int LinearSearch(vector<int> nums, int target)
{
	for(int i =0;i<nums.size();i++)
	{
		if(nums[i] == target)
             return i;
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
	vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
    int result = LinearSearch(arr, 8);
    verify(result);
}


// **************************************** Time Complexity *****************************************

// Time Complexity of linear search in best case is O(1) [if target element is the first element]

// Time Complexity of linear search in worst case is O(N)  [if target is in the last postion or not in the list]

// Time Complexity of linear search in Average case is O(N/2) [if middle element is target]


// **************************************** Space Complexity ****************************************

// Space Complexity is O(1) [As the assigned amount of data is fixed]