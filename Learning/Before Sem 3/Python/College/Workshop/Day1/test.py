def test_gen():
	l = [1,2,3,4,5]
	for item in l:
		yield (item)

for item in test_gen():
	print(item)
