l = []
sum = 0

for i in range(0,3):
	l.append(int(input()))
	sum+= l[i]

if(l[0] == l[1] == l[2]):
	print(3*sum)

else:
	print(sum)
