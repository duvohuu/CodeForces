t = int(input())
for _ in range(t):
    first_a, second_a, b = -1, -1, -1
    m, n = map(int, input().split())
    for i in range(m):
        s = input()
        if s.find('#') != -1 and b == -1:  
            if first_a == -1:  
                first_a = i + 1
            first_idx = s.find('#')
            last_idx = s.rfind('#')
            b = (first_idx + last_idx + 2) / 2
        if s.find('#') != -1 and first_a == -1:
            first_a = i + 1;
        if s.find('#') == -1 and first_a != -1 and second_a == -1:
            second_a = i
    if second_a == -1:  
        second_a = m 
    b_str = str(int(b)) if b != -1 else "Undefined"  
    print(str(int((first_a + second_a) / 2)) + " " + b_str)  
