class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        m = {}
        for i, x in enumerate(nums):
            y = target - x
            if y in m:
                return [m[y], i]
            m[x] = i

if __name__ == '__main__':
    sol = Solution()
    result = sol.twoSum([2,7,11,15], 9)
    print(result)