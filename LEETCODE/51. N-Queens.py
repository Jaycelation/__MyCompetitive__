from typing import List
class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ans = []
        def tryRow(row, board, col_used, diag1, diag2):
            if row == n:
                cur = []
                for r in board:
                    cur.append("".join(r))
                ans.append(cur)
                return
            for col in range(n):
                if col not in col_used and row-col not in diag1 and row+col not in diag2:
                    board[row][col] = "Q"
                    col_used.add(col)
                    diag1.add(row-col)
                    diag2.add(row+col)
                    tryRow(row+1, board, col_used, diag1, diag2)
                    col_used.remove(col)
                    diag2.remove(row + col)
                    diag1.remove(row - col)
                    board[row][col] = "."

        board = [["."] * n for _ in range(n)]
        tryRow(0, board, set(), set(), set())
        return ans

if __name__ == '__main__':
    n = 4
    sol = Solution()
    result = sol.solveNQueens(n)
    print(result)