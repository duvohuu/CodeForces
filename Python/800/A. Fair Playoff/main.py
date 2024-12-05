import math
t = int(input())
while t > 0:
    s1 = int(input())
    s2 = int(input())
    s3 = int(input())
    s4 = int(input())
    winner_1 = max(s1, s2)
    loser_1 = min(s1, s2)
    winner_2 = max(s3, s4)
    loser_2 = min(s3, s4)
    if winner_1 > loser_2 and winner_2 > loser_1:
        print("YES")
    else: 
        print("NO")
    t -= 1