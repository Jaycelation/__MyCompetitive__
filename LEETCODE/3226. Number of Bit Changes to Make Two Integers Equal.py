from collections import deque
class Solution:
    def minChanges(self, n: int, k: int) -> int:
        count = 0
        for i in range(32):
            if (n & (1 << i)) != (k & (1 << i)):
                if (n & (1 << i)) > 0:
                    count += 1
                else:
                    return -1
        return count

if __name__ == '__main__':
    sol = Solution()
    result = sol.minChanges(13, 4)
    print(result)