//************** Day - 1 **************

//************ Binary Search (Recursive) ***********

// Implementation: C++

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include<iostream>
#include<vector>
#include<valarray>
using namespace std;

valarray <int>  Slicing_Array(valarray<int> arr_slice, int X, int Y)
{
	return(arr_slice[slice(X, Y-X+1, 1)]);
}


bool Recursive_BinarySearch(valarray<int> nums, int target)
{
	int midpoint;
	int length = nums.size();
	if(nums.size() == 0)
		return false;
	else
		midpoint = length/2;

	if(nums[midpoint] == target)
			return true;
    else if(nums[midpoint] < target)
			return(Recursive_BinarySearch(Slicing_Array(nums, midpoint+1, length-1), target));
    else if(nums[midpoint] > target)
            return(Recursive_BinarySearch(Slicing_Array(nums, 0, midpoint), target));
    else
         return false;    



}



void verify(bool index)
{
	if(index == true)
		cout << "The element is in the list " << endl;
	else
		cout << "The element is not in the list" << endl;
}



int main()
{
	valarray<int> arr {1,2,3,4,5,6,7,8,9,10};
    int result = Recursive_BinarySearch(arr,4);
    verify(result);
}