from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        delete = set(to_delete)
        result = set()
        result.add(root)

        def dfs(node):
            if node is None:
                return
            if node.val in delete:
                if node.left is not None:
                    result.add(node.left)
                if node.right is not None:
                    result.add(node.right)
            dfs(node.left)
            dfs(node.right)

            if node.left is not None and node.left.val in delete:
                node.left = None
            if node.right is not None and node.right.val in delete:
                node.right = None

        dfs(root)
        return list(x for x in result if x.val not in delete)

if __name__ == '__main__':
    roots = [1, 2, 3, 4, 5, 6, 7]
    root = TreeNode(roots[0])
    queue = [root]
    idx = 1
    while idx < len(roots):
        node = queue.pop(0)
        if idx < len(roots):
            node.left = TreeNode(roots[idx])
            queue.append(node.left)
            idx += 1
        if idx < len(roots):
            node.right = TreeNode(roots[idx])
            queue.append(node.right)
            idx += 1

    to_delete = [3, 5]
    sol = Solution()
    result = sol.delNodes(root, to_delete)
    for node in result:
        print(node.val, end=' ')