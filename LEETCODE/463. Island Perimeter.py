from typing import List
class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        count = 0
        for i in range(row):
            if grid[i][0] == 1:
                count += 1
            if grid[i][-1] == 1:
                count += 1
            for j in range(col-1):
                if grid[i][j] != grid[i][j+1]:
                    count += 1

        for i in range(col):
            if grid[0][i] == 1:
                count += 1
            if grid[-1][i] == 1:
                count += 1
            for j in range(row-1):
                 if grid[j][i] != grid[j+1][i]:
                     count += 1

        return count
    def ver2(self, grid: List[List[int]]) -> int:
        dx = [1, 0, -1, 0]
        dy = [0, 1, 0, -1]

        row = len(grid)
        col = len(grid[0])
        count = 0
        for i in range(row):
            for j in range(col):
                if grid[i][j] == 1:
                    for k in range(4):
                        x = i + dx[k]
                        y = j + dy[k]
                        if x < 0 or y < 0 or x >= row or y >= col:
                            count += 1
                            continue
                        if grid[x][y] == 0:
                            count += 1

        return count

if __name__ == '__main__':
    grid = [[0, 1, 0, 0], [1, 1, 1, 0], [0, 1, 0, 0], [1, 1, 0, 0]]
    sol = Solution()
    result = sol.ver2(grid)
    print(result)