def fun1():
	global a=1//variable global
	nonlocal b//variable local
	print(a,b)
	
	def fun2():
		global b=2
		nonlocal c
		
		def fun3():
			global c=3
			nonlocal d
		fun3()
	fun2()
fun1()

/*
a=1
def fun1():
	b=2
	print(a,b)
	
	def fun2():
		c=3
		print(a,b,c)
		
		def fun3():
			d=4
			print(a,b,c,d)
*/
