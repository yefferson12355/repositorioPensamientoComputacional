a = input (  )
b = [0,0,0,0,0]


for l in a:
	if l == 'a' or l == 'A':
		b[0] += 1
	elif l == 'e' or l == 'E':
		b[1] += 1
	elif l == 'i' or l == 'I':
		b[2] += 1
	elif l == 'o' or l == 'O':
		b[3] += 1
	elif l == 'u' or l == 'U':
		b[4] += 1

for n in range( 0, 5 ):
	print ( b[n], end = ' ' )