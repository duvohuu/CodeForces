def solve(n, s):
    if n == 5 and 'T' in s and 'i' in s and 'm' in s and 'u' in s and 'r' in s:
        return True 
    else: return False
t = int(input())
while t > 0:
    n = int(input())
    s = str(input())
    if solve(n, s):
        print("YES")
    else: 
        print("NO")
    t -= 1
    