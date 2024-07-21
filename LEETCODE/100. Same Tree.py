from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def check(p: Optional[TreeNode],q : Optional[TreeNode]) -> bool:
            if p is None and q is None:
                return True
            if p is not None and q is not None:
                return p.val == q.val and check(p.left, q.left) and check(p.right, q.right)
            return False

        return check(p, q)

if __name__ == '__main__':
    node1 = TreeNode(1, TreeNode(2), TreeNode(3))
    node2 = TreeNode(1, TreeNode(2), TreeNode(3))
    node3 = TreeNode(1, TreeNode(2), TreeNode(4))

    sol = Solution()
    print(sol.isSameTree(node1, node2))
    print(sol.isSameTree(node1, node3))