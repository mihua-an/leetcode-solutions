#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int length = s.length();
        for (int first_index=0; first_index < length; first_index++) {
            unordered_set<char> seen;
            seen.insert(s[first_index]);
            ans = max(ans, static_cast<int>(seen.size()));
            for (int second_index=first_index + 1; second_index < length; second_index++) {
                char check_str = s[second_index];
                if (seen.count(second_index)) {
                    break;
                }
                seen.insert(check_str);
                ans = max(ans, static_cast<int>(seen.size()));
            }
        }
        return ans;
    };
};