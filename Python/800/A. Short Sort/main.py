def check(str):
    if str == "bca" or str == "cab":
        return False
    else:
        return True
t = int(input())
while t > 0:
    s = str(input())
    if check(s):
        print("YES")
    else:
        print("NO")
    t -= 1