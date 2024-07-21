import math
def jump(arr, k):
    n = len(arr)
    dp = [float('inf')]*n
    dp[0] = 0
    for i in range(n):
        for j in range(1, k+1):
            if i+j < n:
                dp[i+j] = min(dp[i+j], dp[i] + abs(arr[i]-arr[i+j]))
    return dp[n-1]

def main():
    n, k = map(int, input().strip().split())
    arr = list(map(int, input().strip().split()))
    result = jump(arr, k)
    print(result)

if __name__ == '__main__':
    main()
