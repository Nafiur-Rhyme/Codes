'''
Activity selection problem:
Goal: To find the maximum number of activities
Activity:       a  b c d e f
Starting time : 1 11 3 6 1 9
Finishing time: 4 12 5 9 7 11
----------------------------------------------------------------
A
a -------
b                      -----
c    ------
d           ------
e -------------
f                 -------
T 1 2 3 4 5 6 7 8 9 10 11 12
----------------------------------------------------------------
Solution:
Sorted list of activities(By finishing time):
Activity:       0 1 2 3 4  5
Starting time : 1 3 1 6 9  11
Finishing time: 4 5 7 9 11 12 

a d f

Algorithm:
1. Sort activities by their finishing time
2. Select activities from the sorted list of activities
    ->  If starting time of next activity is >= finishing time of 
        previously selected activity -> mark selected
3. Print activity
'''
#defiinations
def sort_dictionary_by_finish_time(dictionary):
    sorted()


def act_sel(activities):
    selected = []


#main function
activities = {
    'a':[1,4],
    'b':[11,12],
    'c':[3,5],
    'd':[6,9],
    'e':[1,7],
    'f':[9,11]
}

act_sel(activities)