class Solution:
    def capitalizeTitle(self, title: str) -> str:
        words = title.split()
        n = len(words)
        result = []
        for i in range(n):
            words[i] = words[i].lower()
            if len(words[i]) > 2:
                words[i] = words[i][0].upper() + words[i][1:]

            result.append(words[i])

        return " ".join(result)

if __name__ == '__main__':
    sol = Solution()
    result = sol.capitalizeTitle("capiTalIze tHe titLe")
    print(result)