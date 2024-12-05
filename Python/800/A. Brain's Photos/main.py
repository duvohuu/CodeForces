n, m = map(int, input().split())
s, flag = '', True
while (n > 0):
	s += input()
	n -= 1
print('#Color' if ('C' in s or 'M' in s or 'Y' in s) else '#Black&White')