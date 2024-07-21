class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        return x == x[::-1]

if __name__ == '__main__':
    sol = Solution()
    result = sol.isPalindrome(121)
    print(result)
