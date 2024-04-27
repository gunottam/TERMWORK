x = int(input("Enter x coordinate: "))
y = int(input("Enter y coordinate: "))

if x==0 and y == 0:
	print("The coordinate point lies on origion")
elif x>=0 and y>=0:
	print("The coordinate point (",x,",",y,')lies in First Quadrant')
elif x<=0 and y>=0:
	print("The coordinate point (",x,",",y,')lies in Second Quadrant')
elif x<=0 and y<=0:
	print("The coordinate point (",x,",",y,')lies in Third Quadrant')
else:
	print("The coordinate point (",x,",",y,')lies in Fourth Quadrant')
