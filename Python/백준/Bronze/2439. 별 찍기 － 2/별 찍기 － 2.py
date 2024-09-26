n = int(input())
for line in range(n):
    for blank in range(n - line - 1):
        print(" ", end = "")
    for star in range(line + 1):
        print("*", end = "")
    print()