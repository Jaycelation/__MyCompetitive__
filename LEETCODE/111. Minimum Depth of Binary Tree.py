from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        def depth(node):
            if node is None:
                return 0
            if node.left is None and node.right is None:
                return 1
            x, y = float('inf'), float('inf')
            if node.left:
                x = depth(node.left)
            if node.right:
                y = depth(node.right)

            return 1 + min(x,y)

        return depth(root)

if __name__ == '__main__':
    root = TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(4), TreeNode(3)))
    sol = Solution()
    result = sol.minDepth(root)
    print(result)