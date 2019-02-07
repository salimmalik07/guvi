a=int(input())
b=int(input())
y=int(input())
if (a>b) and (a>y):
	print(a)
elif (b>y) and (b>a):
	print(b)
else:
	print(y)
