from typing import List

class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        n = len(arr)
        if n < 3:
            return False

        i, j, k = 0, 1, 2
        while k < n:
            if arr[i] % 2 != 0 and arr[j] % 2 != 0 and arr[k] % 2 != 0:
                return True
            i += 1
            j += 1
            k += 1
        return False

if __name__ == '__main__':
    arr = [1,2,34,3,4,5,7,23,12]
    sol = Solution()
    result = sol.threeConsecutiveOdds(arr)
    print(result)