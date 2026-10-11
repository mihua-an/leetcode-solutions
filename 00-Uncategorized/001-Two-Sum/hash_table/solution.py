from typing import List

class Solution:
    def twoSum(self, nums:List[int], target:int):
        mappings = {}
        length = len(nums)
        for index in range(length):
            diff = target - nums[index]
            if diff in mappings:
                return [mappings[diff], index]
            mappings[nums[index]] = index
