'''
Understand: Take two list and determine if one is a subset of the other. To be a subset they many not appear one after the other but maintail relative order

Plan: 

1) Map the indicies to each value in the master list
2) loop through the subset list and stop one less than the end, and quary the current value to the next to see if order is maintained
3) If order is broken return false, if done return true


Implement: 
'''

def is_subsequence(lst, sequence):
    hashmap = dict()
    for i in range(len(lst)):
        hashmap[lst[i]] = i 
    for i in range(len(sequence)-1):
        if hashmap[sequence[i]] > hashmap[sequence[i+1]]:
            return False;

    return True;

lst = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [1, 6, -1, 10]
if is_subsequence(lst, sequence):
    print("The solution is True")
else:
    print("The solution is False")