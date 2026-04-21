class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) == 0:
            return True
        if len(s) > len(t):
            return False
        i = 0
        for j in t:
            if len(s) == i:
                return True
            if s[i] == j:
                i += 1
        return len(s) == i
        