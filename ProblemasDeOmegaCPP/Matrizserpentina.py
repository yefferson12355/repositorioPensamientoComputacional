a = int ( input (  ) )
b = int ( input (  ) )

c = b
e = b
d = []

for n in range ( 0, a * b ):
	if c < -b + 1:
		c = b
		e = b
	if c > 0:
		d.append ( n + 1 )
		c -= 1
	else:
		d.append ( n + e )
		e -= 2
		c -= 1

for n in range ( 0, a * b ):
	if n % b == 0 and n != 0:
		print ( '' )
	if n != a * b - 1:
		print ( d[n], end = ' ' )
	else:
		print ( d[n] )