def sub(n1,n2):
	if n1<n2:
		raise Exception ("First no is greater")
	else:
		print(n1-n2)

a = int(input("Enter n1"))

b = int(input("Enter n2"))

sub(a,b)
