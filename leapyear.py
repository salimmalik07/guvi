m=int(input())
if(m%400==0):
    print ("leapyear")
elif(m%4==0):
    print ("leapyear")
elif(m%100!=0):
    print ("Yes")
else:
    print ("No")
