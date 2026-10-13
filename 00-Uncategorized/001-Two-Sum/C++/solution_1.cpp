#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        for (int first_index = 0; first_index < length; first_index++) {
            for (int second_index = 0; second_index < length; second_index++) {
                if (nums[first_index] + nums[second_index] == target && first_index != second_index) 
                    return {first_index, second_index};
            }
        }
        return {};
    }
};

