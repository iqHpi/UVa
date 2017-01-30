fac = [1 for i in range(0,1001)]

for i in range(2,1001):
	fac[i] = fac[i-1] * i
	
while True:
	try:
		num = int(input())
		print("%s!\n%s" %(num,fac[num]) )
	except EOFError: break
