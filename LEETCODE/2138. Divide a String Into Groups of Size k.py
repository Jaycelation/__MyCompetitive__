from typing import List

class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        n = len(s)
        result = []
        if n < k:
            strs = s + fill*(k-n)
            result.append(strs)
        else:
            buff = 0
            if n % k != 0:
                buff = (n // k) + 1
            else:
                buff = n // k
            new_len = buff*k
            s += fill*(new_len-n)

            def split_string(s: str, k: int) -> List[str]:
                return [s[i:i+k] for i in range(0, len(s), k)]
            result = split_string(s, k)

        return result

if __name__ == '__main__':
    s = "abcdefghi"
    k = 3
    fill = "x"
    sol = Solution()
    result = sol.divideString(s, k, fill)
    print(result)