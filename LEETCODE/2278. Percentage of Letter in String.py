import collections

class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        c = collections.Counter(s)
        return c[letter]*100 // len(s)

if __name__ == '__main__':
    sol = Solution()
    result = sol.percentageLetter("foobar", "o")
    print(result)