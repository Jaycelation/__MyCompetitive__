from typing import List
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        n = len(image)
        for row in image:
            row.reverse()
            for i in range(len(row)):
                row[i] ^= 1
        return image
if __name__ == '__main__':
    image = [[1, 1, 0], [1, 0, 1], [0, 0, 0]]
    sol = Solution()
    result = sol.flipAndInvertImage(image)
    print(result)