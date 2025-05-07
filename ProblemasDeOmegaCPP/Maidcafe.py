r0 = []

for l in 'abcdefghijklmnopqrstuvwxyz 0123456789':
	r0.append ( l )

r3 = ''
r4 = 0

r1 = input (  )
r2 = int ( input (  ) )

for l in r1:
	r4 = r0.index(l)
	r3 += r0[r4 - r2]
	
print ( r3 )