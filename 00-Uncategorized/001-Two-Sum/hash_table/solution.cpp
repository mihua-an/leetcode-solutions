#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        unordered_map<int, int> mappings;
        for (int index = 0; index < nums.size(); index++) {
            int diff = target - nums[index];
            if (mappings.find(diff) != mappings.end())
                return {mappings[diff], index};
            mappings[nums[index]] = index;
        }
        return {};
    }

};