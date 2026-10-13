class Solution:
    def lengthOfLongestSubstring(self, s:str) -> int:
        length = len(s)
        max_length = 0 
        for first_index in range(length):
            seen = set(s[first_index])
            max_length = max(max_length, len(seen))
            for second_index in range(first_index + 1, length):
                check_str = s[second_index]
                if check_str in seen:
                    break
                seen.add(check_str)
                max_length = max(max_length, len(seen))
        return max_length