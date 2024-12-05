t = int(input())
while t > 0:
    h, m = map(int, input().split())
    print((23 - h)*60 + 60 - m)
    t -= 1