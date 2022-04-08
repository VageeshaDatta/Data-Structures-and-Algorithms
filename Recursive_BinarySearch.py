 #************** Day - 1 **************

#************ Binary Search (Recursive) ***********

# Implementation: Python

# %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

def Recursive_BinarySearch(list, target):
	if(len(list) == 0):
		return False
	else:
	   midpoint = len(list)//2

	if(list[midpoint] == target):
		return True
	elif(list[midpoint] > target):
	    return(Recursive_BinarySearch(list[:midpoint], target))
	else:
	    return(Recursive_BinarySearch(list[midpoint+1:], target))    	



def verify(boolean):
	if(boolean == True):
		print("The element is found ")
	else:
	    print("The element is not in list")	

input = [1,2,3,4,5,6,7,8,9,10]
result = Recursive_BinarySearch(input, 7)
verify(result)












