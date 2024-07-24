from typing import List
class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        arr = [first]
        for x in encoded:
            arr.append(arr[-1] ^ x)
        return arr

if __name__ == '__main__':
    sol = Solution()
    result = sol.decode([1,2,3], 1)
    print(result)