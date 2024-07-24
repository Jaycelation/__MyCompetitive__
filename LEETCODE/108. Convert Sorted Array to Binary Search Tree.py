from typing import List, Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        n = len(nums)
        def construct(left, right):
            if left == right:
                return TreeNode(nums[left])
            if left > right:
                return None

            mid = (left+right) // 2
            cur = TreeNode(nums[mid])
            cur.left = construct(left, mid-1)
            cur.right = construct(mid+1, right)
            return cur

        return construct(0, n-1)

if __name__ == '__main__':
    nums = [-10, -3, 0, 5, 9, 12, 60, 129]
    sol = Solution()
    result = sol.sortedArrayToBST(nums)
    print(result)