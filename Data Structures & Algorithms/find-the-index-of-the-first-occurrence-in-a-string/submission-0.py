class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        start = 0
        i = 0

        while i < len(haystack):
            if haystack[i] == needle[start]:
                start += 1
                if len(needle) == start:
                    return i - start + 1
            else:
                i -= start
                start = 0
                
            i += 1

        return -1