from collections import deque
import math

def min_enery(h, c):
    n = len(h)
    dp = [math.inf]*n
    dp[0] = 0
    dq = deque([0])

    for j in range(1, n):
        while dq and h[j] - h[dq[0]] >= c:
            dq.popleft()

        if dq:
            i = dq[0]
            dp[j] = dp[i] + (h[i]-h[j])**2 + c

        while dq and (dp[dq[-1]] - (h[dq[-1]] ** 2)) > (dp[j] - (h[j] ** 2)):
            dq.pop()
        dq.append(j)

    return dp[n-1]

if __name__ == '__main__':
