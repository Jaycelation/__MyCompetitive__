class Solution:
    def numTrees(self, n: int) -> int:
        cache = [None]*(n+1)
        has_cache = [False]*(n+1)
        def count(x):
            if x <= 1:
                return 1
            if has_cache[x]:
                return cache[x]
            val = 0
            for left in range(0, x):
                right = x - 1 - left
                val += count(left) * count(right)

            has_cache[x] = True
            cache[x] = val
            return val

        return count(n)


if __name__ == '__main__':
    sol = Solution()
    result = sol.numTrees(3)
    print(result)