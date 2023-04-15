def twoSum(nums, target): 
    hashmap = {}
    for i in range(len(nums)):
        comp = target - nums[i]
        if comp in hashmap:
            return [i, hashmap[comp]]
        hashmap[nums[i]] = i
        

nums = [6,2,3,9]
print(twoSum(nums,15))