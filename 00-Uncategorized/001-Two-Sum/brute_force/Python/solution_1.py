
from typing import List

class Solution:
    def two_sum(self, nums:List[int], target:int):
        lenth = len(nums)
        for first_index in range(lenth):
            for second_index in range(lenth):
                if nums[first_index] + nums[second_index] == target and first_index != second_index:
                    return [first_index, second_index]
                from typing import List

class Solution:
    def twoSum(self, nums:List[int], target:int) -> List[int]:
        lenth = len(nums)
        for first_index in range(lenth):
            for second_index in range(first_index + 1, lenth):
                result = nums[first_index] + nums[second_index]
                if result == target:
                    return [first_index, second_index]