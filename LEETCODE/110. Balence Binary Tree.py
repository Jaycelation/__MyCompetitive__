from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def check(node):
            if node is None:
                return (True, 0)

            leftBalanced, leftHeight = check(node.left)
            rightBalanced, rightHeight = check(node.right)

            isNodeBalanced = leftBalanced and rightBalanced and abs(leftHeight-rightHeight) <= 1
            return (isNodeBalanced, 1+max(leftHeight, rightHeight))

        balanced, _ = check(root)
        return balanced

if __name__ == '__main__':
    root = TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(4), TreeNode(3)))
    sol = Solution()
    result = sol.isBalanced(root)
    print(result)