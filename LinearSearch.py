#************** Day - 1 **************

#************ Linear Search ***********

# Implementation: Python

# %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

def LinearSearch(list, target):
	for i in range(0, len(list)):
		if(list[i] == target):
			return i

	return None
	
def verify(index):
	if index is not None:
		print("The element is found and is at index ", index)
		
	else:	
		print("The element is not in list")
	  

input = [1,2,3,4,5,6,7,8,9,10]
result = LinearSearch(input, 14)
verify(result)
