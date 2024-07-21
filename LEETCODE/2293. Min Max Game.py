from typing import List

class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        while len(nums) > 1:
            new_nums = []
            N = len(nums)
            for i in range(0, N, 2):
                a = nums[i]
                b = nums[i+1]
                p = i // 2
                if p % 2 == 0:
                    new_nums.append(min(a, b))
                else:
                    new_nums.append(max(a, b))
            nums = new_nums

        return nums[0]

if __name__ == '__main__':
    nums = [1,3,5,2,4,8,2,2]
    sol = Solution()
    result = sol.minMaxGame(nums)
    print(result)