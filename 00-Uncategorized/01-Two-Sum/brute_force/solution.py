
from typing import List

class Solution:
    def two_sum(self, nums:List[int], target:int):
        lenth = len(nums)
        for first_index in range(lenth):
            for second_index in range(lenth):
                if nums[first_index] + nums[second_index] == target and first_index != second_index:
                    return [first_index, second_index]
                