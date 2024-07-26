class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        sign = 1
        if s.startswith("-"):
            sign = -1
            s = s[1:]
        elif s.startswith("+"):
            s = s[1:]
        n = len(s)
        cur = 0
        for i in range(n):
            if not s[i].isdigit():
                break
            cur = cur*10 + int(s[i])

        cur *= sign
        cur = min(cur, 2**31-1)
        cur = max(cur, -(2**31))
        return cur

if __name__ == '__main__':
    sol = Solution()
    result = sol.myAtoi("1337c0d3")
    print(result)