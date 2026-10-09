#include <iostream>
#include <vector>
#include "solution.cpp"

using namespace std;
int main() {
    Solution sol;
    
    vector<int> nums = {2, 3, 7, 9};
    int target = 16;
    
    vector<int> results = sol.twoSum(nums, target);
    for (int index: results) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}




