
import sys

try:
	def Z(): return int(sys.stdin.readline().lstrip().rstrip())
	def Zs(): return map(int,sys.stdin.readline().lstrip().rstrip().split())
	tcases = Z()
	for _ in range(tcases):
	    c1 = Z()
	    set1 = set() 
	    set2 = set() 
	    loops = (4*c1)-1
	    for b1 in range(loops):
	        f1,f2 =  Zs()
	        if f2 not in set2:
	            set2.add(f2)
	        else:
	            set2.discard(f2)
	        if f1 not in set1:
	            set1.add(f1)
	        else:
	            set1.discard(f1)
	    print(set1.pop(),set2.pop())   	            
except:
    pass
