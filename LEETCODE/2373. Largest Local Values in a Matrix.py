from typing import List
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)

        arr = [[0]*(n-2) for _ in range(n-2)]
        for i in range(n-2):
            for j in range(n-2):
                arr[i][j] = grid[i][j]
                for dx in range(3):
                    for dy in range(3):
                        arr[i][j] = max(arr[i][j], grid[i+dx][j+dy])

        return arr

if __name__ == '__main__':
    grid = [[1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 2, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1]]
    sol = Solution()
    result = sol.largestLocal(grid)
    print(result)