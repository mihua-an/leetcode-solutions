
from typing import List

class Solution:
    def twoSum(self, nums:List[int], target:int):
        length = len(nums)
        for first_index in range(length):
            for second_index in range(length):
                if nums[first_index] + nums[second_index] == target and first_index != second_index:
                    return [first_index, second_index]
