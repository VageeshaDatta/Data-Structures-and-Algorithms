#************** Day - 1 **************

#************ Binary Search ***********

# Implementation: Python

# %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

def BinarySearch(list, target):
	first = 0
	last = len(list) - 1

	while(first <= last):
		mid_point = (first + last)//2

		if(list[mid_point] == target):
			
			return mid_point
		elif(list[mid_point] > target):
			last = mid_point - 1
		else:
			first = mid_point + 1

	return None



def verify(index):
	if index is not None:
		print("The element is found and is at index ", index)
		
	else:	
		print("The element is not in list")  

input = [1,2,3,4,5,6,7,8,9,10]
result = BinarySearch(input, 4)
verify(result)

# **************************************** Time Complexity *****************************************

# Time Complexity of Binary search in best case is O(1) [if target element is the first element]

# Time Complexity of Binary search in worst case is O(log N)  [if target is in the last postion or not in the list]

# Time Complexity of Binary search in Average case is O(N/2) [if middle element is target]


# **************************************** Space Complexity ****************************************

# Space Complexity is O(1) [As the assigned amount of data is fixed]






