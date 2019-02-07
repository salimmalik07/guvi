while True:
	try:
		f1=int(input())
		break
	except:
		print('invalid')
		break
if f1%400==0 or f1%4==0 and f1%100!=0:
	print('yes')
else:
	print('no')
