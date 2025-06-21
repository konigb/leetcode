


# def first_unique_char(my_str):

#     hashmap = dict()
#     for i in range(len(my_str)):

#         if hashmap.get(my_str[i]) == None:
#             hashmap[my_str[i]] = [i]
#         else:
#             hashmap[my_str[i]].append(i)
    
#     res = []
#     for v in hashmap.values():
#         if len(v) == 1:
#             res.append(v[0])

#     if len(res) == 0:
#         return -1
    
#     res.sort()

#     return  res[0]

# my_str = "leetcode"
# print(first_unique_char(my_str))

# str2 = "loveleetcode"
# print(first_unique_char(str2))

# str3 = "aabb"
# print(first_unique_char(str3))






# set pointer at beginning
# set pointer at end
# look at every value that end pointer is at and swap with beginning if it is not even



def sort_array_by_parity(nums):
    pointer1 = 0
    pointer2 = len(nums) - 1

    while pointer2 != pointer1:
        if nums[pointer1] % 2 == 1 and nums[pointer2] == 0:
            temp = nums[pointer1]
            nums[pointer1] = nums[pointer2]
            nums[pointer2] = temp
            pointer1 +=1
            pointer2 -=1
        if nums[pointer1] % 2 == 0:
            pointer1 += 1
        if nums[pointer2] % 2 == 1:
            pointer2 -= 1

    return nums

nums = [3,1,2,4]
nums2 = [0]
sort_array_by_parity(nums)
sort_array_by_parity(nums2)



