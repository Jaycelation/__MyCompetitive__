from typing import Optional, List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        result = []

        def dfs(node, path):
            if node is None:
                return
            if node.left is None and node.right is None:
                path.append(str(node.val))
                result.append("->".join(str(p) for p in path))
                path.pop()
                return

            path.append(str(node.val))
            dfs(node.left, path)
            dfs(node.right, path)
            path.pop()
        dfs(root, [])
        return result

if __name__ == '__main__':
    node = TreeNode(1, TreeNode(2, TreeNode(3)))
    sol = Solution()
    result = sol.binaryTreePaths(node)
    print(result)