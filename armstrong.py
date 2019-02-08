def main():
   
 numb = int(input())
 sum = 0
 temp = numb
 while temp > 0:
   digit = temp % 10
   sum += digit ** 3
   temp //= 10
 if numb == sum:
   print("yes")
 else:
   print("no")

if __name__ == '__main__':
    main()
