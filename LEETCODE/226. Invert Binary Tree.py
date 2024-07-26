from typing import Optional
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def traversal(node):
            if node is None:
                return
            node.left, node.right = node.right, node.left
            traversal(node.left)
            traversal(node.right)

        traversal(root)
        return root

if __name__ == '__main__':
    node = TreeNode(1, TreeNode(2, TreeNode(3)))
    sol = Solution()
    result = sol.invertTree(node)
    print(result)