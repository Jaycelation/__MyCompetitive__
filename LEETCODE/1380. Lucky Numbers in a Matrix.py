from typing import List, Dict
class Solution:
    def luckyNumbers(self, matrix: List[List[int]]) -> List[int]:
        n, m = len(matrix), len(matrix[0])
        row_min_max = float('-inf')

        for i in range(n):
            row_min = min(matrix[i])
            row_min_max = max(row_min_max, row_min)

        col_max_min = float('inf')
        for i in range(m):
            col_max = max(matrix[j][i] for j in range(n))
            col_max_min = min(col_max_min, col_max)

        if row_min_max == col_max_min:
            return [row_min_max]
        else:
            return []

if __name__ == '__main__':
    matrix = [[3, 7, 8], [9, 11, 13], [15, 16, 17]]
    sol = Solution()
    result = sol.luckyNumbers(matrix)
    print(result)