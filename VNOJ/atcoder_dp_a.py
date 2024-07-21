import math
def jump(arr):
    n = len(arr)
    dp = [float('inf')]*n
    dp[0] = 0
    for i in range(1, n):
        dp[i] = min(dp[i-1] + abs(arr[i]-arr[i-1]), dp[i-2] + abs(arr[i]-arr[i-2]))
    return dp[n-1]

def main():
    n = int(input().strip())
    arr = list(map(int, input().strip().split()))
    result = jump(arr)
    print(result)

if __name__ == '__main__':
    main()