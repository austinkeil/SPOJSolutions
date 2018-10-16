t = int(input())
for i in range(t):
    a, b = [int(x) for x in input().split()]
    print(pow(a, b, 10))
