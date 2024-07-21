# def reverse_substr(s, a, b):
#     start = s[:a]
#     mid = s[a:b + 1]
#     end = s[b + 1:]
#     re = mid[::-1]
#     result = start + re + end
#     return result

def algo(s, a, b):
    str = list(s)
    str[a:b+1] = str[a:b+1][::-1]
    return "".join(str)

if __name__ == '__main__':
    s = input().strip()
    size = len(s)
    n = int(input())
    val = list(map(int, input().split()))

    for i in val:
        if 1 <= i <= size // 2:
            start = i-1
            end = size-i
            s = algo(s, start, end)

    print(s)