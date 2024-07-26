from typing import List
class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        result = 0
        n = len(mat)

        for i in range(n):
            for j in range(n):
                if i == j or i+j+1 == n:
                    result += mat[i][j]

        return result

if __name__ == '__main__':
    mat = [[1, 2, 3],
           [4, 5, 6],
           [7, 8, 9]]
    sol = Solution()
    result = sol.diagonalSum(mat)
    print(result)