from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0

        def height(node):
            if node is None:
                return 0
            return height(node.left) + 1

        h = height(root)
        left = (2**(h-1))
        right = (2**h-1)

        def found(node, mid, cur):
            if node is None:
                return False
            if cur == 0:
                if node is not None:
                    return True
                else:
                    return False

            if (mid & (1 << (cur-1))) > 0:
                return found(node.right, mid, cur-1)
            else:
                return found(node.left, mid, cur-1)

        while left < right:
            mid = (left+right+1)//2
            if found(root, mid, h-1):
                left = mid
            else:
                right = mid-1

        return left

if __name__ == '__main__':
    root = TreeNode(1, TreeNode(2, TreeNode(3, TreeNode(4, TreeNode(5, TreeNode(6))))))
    sol = Solution()
    result = sol.countNodes(root)
    print(result)