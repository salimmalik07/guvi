d,b=raw_input().split()
d=int(d)
b=int(b)
 
for n in range(d,b):
   sum = 0
   temp = n
   while temp > 0:
       digit = temp % 10
       sum =sum+ digit ** 3
       temp /= 10
 
   if n == sum:
       print(n)
