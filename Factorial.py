t = int(input())
while(t):
	fact = 1;
	n = int(input())
	while(n>0):
		fact *= n
		n -= 1
	t -= 1
	print(fact)