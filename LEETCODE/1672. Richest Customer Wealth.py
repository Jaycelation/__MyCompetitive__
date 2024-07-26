from typing import List
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        arr = []
        for i in accounts:
            sum = 0
            for j in i:
                sum += j
            arr.append(sum)

        return max(arr)

if __name__ == '__main__':
    accounts = [[1, 2, 3], [3, 2, 1]]
    sol = Solution()
    result = sol.maximumWealth(accounts)
    print(result)