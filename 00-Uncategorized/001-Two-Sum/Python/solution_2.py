from typing import List

class Solution:
    def twoSum(self, nums:List[int], target:int) -> List[int]:
        length = len(nums)
        for first_index in range(length):
            for second_index in range(first_index + 1, length):
                result = nums[first_index] + nums[second_index]
                if result == target:
                    return [first_index, second_index]