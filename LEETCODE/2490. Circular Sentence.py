class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split()

        if len(words) == 1:
            return words[0][0] == words[0][-1]

        i, j = 0, 1
        while i < len(words)-1:
            if words[i][-1] != words[j][0]:
                return False
            i = j
            j += 1

        return words[-1][-1] == words[0][0]

if __name__ == '__main__':
    sol = Solution()
    result = sol.isCircularSentence("Leetcode eisc cool")
    print(result)