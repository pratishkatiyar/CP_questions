## jai shree ram!!
import sys
try:
    tc=int(sys.stdin.readline().lstrip().rstrip()) 
    for _ in range(tc):
        v1, v2 = 0, 0
        n=int(sys.stdin.readline().lstrip().rstrip())
        for i in range(n):
            e1,e2=0,0
            q1,q2 = map(int,sys.stdin.readline().lstrip().rstrip().split())
            while q1>0:
                e1+=(q1%10)
                q1//=10
            while q2>0:
                e2+=(q2%10)
                q2//=10
            if e1==e2:
                v1+=1
                v2+=1
            elif e1<e2:
                v1+=1
            else:
                v2+=1
            #print(e1,e2)
        if v1==v2:
            print(2,v2)
        elif v1>v2:
            print(1,v1)
        else:
            print(0,v2)
            
except:
    pass
