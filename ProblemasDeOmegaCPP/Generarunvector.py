a = 6

b = 1

c = 1

d = 0

for n in range( 0, a - 2 ):

	if n == 0:
		d = b + c
		print ( b, c , end = ' ' )
	else:
		d = b + c

	if n == a - 3:
		print ( d )
	else:
		print ( d, end = ' ' )



	b = c

	c = d