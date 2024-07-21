from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        def helper(node, result):
            if node is None:
                return []
            helper(node.left, result)
            result.append(node.val)
            helper(node.right, result)

        helper(root, result)
        return result

if __name__ == '__main__':
    root = TreeNode(1)
    root.right = TreeNode(2)
    root.left = TreeNode(3)

    sol = Solution()
    result = sol.inorderTraversal(root)
    print(result)
