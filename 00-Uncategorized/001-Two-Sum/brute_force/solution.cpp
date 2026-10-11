#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int lenth = nums.size();
        for (int first_index = 0; first_index < lenth; first_index++) {
            for (int second_index = first_index + 1; second_index < lenth; second_index++) {
                int result = nums[first_index] + nums[second_index];
                if (result == target) return {first_index, second_index};
            }
        }
        return {};
    }
};