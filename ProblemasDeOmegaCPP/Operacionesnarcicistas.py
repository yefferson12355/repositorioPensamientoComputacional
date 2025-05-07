a = input (  )
b = 0

for n in a:
	b += int ( n ) ** len ( a )

if int ( a ) == b:
	print ( 'Es Narcisista' )
else:
	print ( 'No es Narcisista' )