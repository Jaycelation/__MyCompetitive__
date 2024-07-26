from typing import List
class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        nums.sort()
        return nums

if __name__ == '__main__':
    nums = [5, 2, 3, 1]
    sol = Solution()
    result = sol.sortArray(nums)
    print(result)