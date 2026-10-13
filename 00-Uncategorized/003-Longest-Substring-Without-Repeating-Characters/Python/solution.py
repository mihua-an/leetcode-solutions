class Solution:
    def lengthOfLongestSubstring(self, s:str) -> int:
        left = 0
        curr = 0
        length = len(s)
        seen = set()
        ans = 0
        while curr < length:
            curr_str = s[curr]
            while curr_str in seen:
                seen.remove(s[left])
                left += 1
            seen.add(curr_str)
            curr_len = curr - left + 1
            ans = max(ans, curr_len)
            curr += 1
        return ans