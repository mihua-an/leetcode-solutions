#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int first_index = 0; first_index < nums.size(); first_index++) {
            for (int second_index = 0; second_index < nums.size(); second_index++) {
                if (nums[first_index] + nums[second_index] == target && first_index != second_index) 
                    return {first_index, second_index};
            }
        }
        return {};
    }
};

