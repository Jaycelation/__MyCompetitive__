class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def toInt(bin_str):
            return int(bin_str, 2)
        def toBin(num):
            return bin(num)[2:]
        return toBin(toInt(a) + toInt(b))

if __name__ == '__main__':
    sol = Solution()
    result = sol.addBinary("11", "1")
    print(result)