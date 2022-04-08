#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

//O(N^2)Approach
void BubbleSort(vector<int> nums, int n){
	int temp;
	for(int i=n-1; i>=0; i--)
	{
		for(int j=0; j<i; j++)
		{
             if(nums[j] > nums[j+1])
             {
             	temp = nums[j];
             	nums[j] = nums[j+1];
             	nums[j+1] = temp;
             }
		}
	}

    cout << "The sorted Array is " << endl;
	for(int i = 0; i<n; i++)
	{
        cout <<  nums[i] << " " ;
	}

}

//O(N)Approach
void BubbleSortModified(vector<int> nums, int n){
	int temp, swapped;
	for(int i=n-1; i>=0 && swapped; i--)
	{
		swapped = 0;
		for(int j=0; j<i ; j++)
		{
             if(nums[j] > nums[j+1])
             {
             	temp = nums[j];
             	nums[j] = nums[j+1];
             	nums[j+1] = temp;
             	swapped = 1;
             }
		}
	}

    cout << "The sorted Array is " << endl;
	for(int i = 0; i<n; i++)
	{
        cout <<  nums[i] << " " ;
	}

}





int main()
{
	vector<int> arr{0, 1, 2, 4, 5, 7, 10};
	int length = arr.size();
	BubbleSort(arr, length); 
	cout  << endl;
	BubbleSortModified(arr, length);
}