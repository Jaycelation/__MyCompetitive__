def lis(arr):
    n = len(arr)
    dp = [1] * n
    result = 1

    for i in range(1, n):
        for j in range(0, i):
            if arr[i] > arr[j] and dp[i] < dp[j] + 1:
                dp[i] = dp[j] + 1
        result = max(result, dp[i])

    return result

def main():
    n = int(input().strip())
    arr = list(map(int, input().strip().split()))
    result = lis(arr)
    print(result)

if __name__ == '__main__':
    main()