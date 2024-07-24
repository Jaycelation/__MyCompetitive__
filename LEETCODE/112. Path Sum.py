from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        def found(node, sum):
            if node is None:
                return False
            if node.left is None and node.right is None:
                sum -= node.val
                if sum == 0:
                    return True
                else:
                    return False

            return found(node.left, sum-node.val) or found(node.right, sum-node.val)
        return found(root, targetSum)

if __name__ == '__main__':
    root = TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(4), TreeNode(3)))
    targetSum = 5
    sol = Solution()
    result = sol.hasPathSum(root, targetSum)
    print(result)