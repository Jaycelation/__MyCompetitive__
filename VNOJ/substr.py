def LpsArray(str):
    size = len(str)
    dp = [0]*size
    i, j = [1, 0]
    while i < size:
        if str[i] == str[j]:
            j += 1
            dp[i] = j
            i += 1
        else:
            if j != 0:
                j = dp[j-1]
            else:
                dp[i] = 0
                i += 1
    return dp

def find(text, str):
    dp = LpsArray(str)
    n, m = [len(text), len(str)]
    i, j = [0, 0]
    result = []

    while i < n:
        if str[j] == text[i]:
            i += 1
            j += 1
        if j == m:
            result.append(i-j+1)
            j = dp[j-1]
        elif i < n and str[j] != text[i]:
            if j != 0:
                j = dp[i-1]
            else:
                i += 1
    return result

def main():
    a = input().strip()
    b = input().strip()
    result = find(a, b)
    print(" ".join(map(str, result)))
if __name__ == '__main__':
    main()
