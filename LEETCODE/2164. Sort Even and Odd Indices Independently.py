from typing import List

class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        Even, Odd = [], []
        n = len(nums)
        for i in range(n):
            if i % 2 == 0:
                Even.append(nums[i])
            else:
                Odd.append(nums[i])

        Even.sort()
        Odd.sort(reverse=True)
        result = []

        for i in range(n):
            if i % 2 == 0:
                result.append(Even.pop(0))
            else:
                result.append(Odd.pop(0))
        return result

if __name__ == '__main__':
    nums = [4, 1, 2, 3]
    sol = Solution()
    result = sol.sortEvenOdd(nums)
    print(result)