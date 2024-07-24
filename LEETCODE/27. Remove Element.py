from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        left = 0
        size = len(nums)

        for right in range(len(nums)):
            if nums[right] == val:
                size -= 1
                continue
            nums[left] = nums[right]
            left += 1

        return size


if __name__ == '__main__':
    sol = Solution()
    result = sol.removeElement([1, 2, 2, 4, 5, 2, 7, 8, 9, 2], 2)
    print(result)