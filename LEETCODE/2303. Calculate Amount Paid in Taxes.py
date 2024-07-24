from typing import List
class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        taxes = 0
        last = 0
        for x, c in brackets:
            t = x - last
            i = min(income, t)
            income -= i
            taxes += c / 100*i
            last = x

        return taxes

if __name__ == '__main__':
    sol = Solution()
    result = sol.calculateTax([[3,50],[7,10],[12,25]], 10)
    print(result)