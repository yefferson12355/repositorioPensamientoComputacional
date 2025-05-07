a = 6

b = 1

c = 1

print ( ok )

for n in range( 0, a ):

	if n == 0:
		print ( b, c, end = ' ' )

	c += b
	print ( c )

	b = c