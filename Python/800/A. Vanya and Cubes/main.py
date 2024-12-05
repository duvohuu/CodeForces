n = int(input())
heigh = 0
while n >= 0:
    heigh += 1
    n -= heigh*(heigh+1)/2
print(heigh - 1)