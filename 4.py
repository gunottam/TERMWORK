def gcd(x,y):
	while(y):
		x, y = y, x % y
	return x

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("LCM:{} \nGCD:{}".format((a*b)/gcd(a,b),gcd(a,b)))
