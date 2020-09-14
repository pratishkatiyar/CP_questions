import sys
import math

try:
    def readsplit():
        return map(int,sys.stdin.readline().lstrip().rstrip().split())
    
    def readint():
        return int(sys.stdin.readline().lstrip().rstrip())

    def readlist():
        return list(map(int,sys.stdin.readline().lstrip().rstrip().split())) 

    tc=readint()
    for _ in range(tc):
    	count1=0
    	x=y=x1=y1=i=j=r=0
    	n=readint()
    	count1=((n*(n+1))//2)
    	if count1%2!=0:
    		sys.stdout.write("0\n")
    	elif count1%2==0:
    	    r=((math.sqrt((count1*4)+1))-1)/2
    	    r=int(r)
    	    x1=(((1+r)*r)//2)
    	    y1=(count1//2)
    	    i=(-1+r)*r
    	    i=i//2
    	    i-=r
    	    i+=n
    	    j=(-1-r+n)
    	    j*=(-r+n)
    	    j=j//2
    	    if x1==y1:
    	        x=i+j
    	        sys.stdout.write(str(x) + "\n")
    	    elif x1!=y1:
    	        sys.stdout.write(str(-r+n) + "\n")
except:
    pass

