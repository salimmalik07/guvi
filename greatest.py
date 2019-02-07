a,b,y=raw_input().split()
a=int(a)
b=int(b)
y=int(y)
if (a>y) and (a>b):
    print(a)
elif (b>y) and (b>a):
	print(b)
else:
	print(y)
