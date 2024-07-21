import collections
from typing import List

class Solution:
    def findLHS(self, nums: List[int]) -> int:
        d = collections.defaultdict(int)
        for x in nums:
            d[x] += 1
            d[x-1] += 1

        best = 0
        for x in d.values():
            best = max(x, best)
        return best

if __name__ == '__main__':
    nums = [1, 3, 2, 2, 5, 2, 3, 7]
    print(nums)
    # sol = Solution()
    # result = sol.findLHS(nums)
    # print(result)
    dp = collections.defaultdict(int)
    for x in nums:
        dp[x] += 1
        dp[x-1] += 1

    print(dp)