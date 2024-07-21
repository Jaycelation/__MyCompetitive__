def is_prefix(a, b):
    return b.startswith(a)

def main():
    a = input().strip()
    b = input().strip()
    if is_prefix(a, b) == True:
        print("Yes")
    else:
        print("No")
if __name__ == '__main__':
    main()