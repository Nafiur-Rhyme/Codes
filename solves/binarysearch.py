# Given a list of integers, write a function to perform binary search on the list.
'''
given list = [1, 2, 3, 5, 4, 7, 6, 8, 10, 9]
Input: 5
Output: Is present in the list
Input: 0
Output: Is not present in the list
a=[0,1,2,3,4,5,6,7,8,9] 
mid = a[5]; lv =a[5],hv =a[8], mid =a[6]
mid = a[6]; lv =a[6],hv =a[8], mid =a[7]
mid = a[7]=b

b=9

'''
def binarySearch(a, b):
    lowestIndex=0
    highestIndex=len(a)-1
    mid = (lowestIndex+highestIndex)//2
    while(mid!=lowestIndex):
        if b == a[mid]:
           return "Found"
        elif b > a[mid]:
            lowestIndex=mid #lv =mid= a[4]
            highestIndex = len(a)-1 #hv = a[8]
            mid = (lowestIndex+highestIndex)//2
        elif b < a[mid]:
            highestIndex = mid 
            mid = (lowestIndex+highestIndex)//2
    return "Not found"
a=[0,1,2,3,4,5,6,7,8,9]
b=int(input("Searching for the number:"))
print (binarySearch(a,b))