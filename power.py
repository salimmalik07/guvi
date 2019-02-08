while True:
	try:
		m, b= raw_input().split( )
		m=int(m)
		b=int(b)
		break
	except:
		print("Invalid input")
		break
c=1
for x in range(b):
	c=c*m
print(c)
	
