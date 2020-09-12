# cook your dish here
try:
    tc=int(input())
    for _ in range(tc):
        seq=[0] * 50
        n,q=map( int,input().split() )
        s=input()
        for i in range(n):
            seq[ord(s[i])-97]+=1   
        for yu in range(q):
            var=0
            z=int(input())
            for i in range(26):
                if seq[i]>z:
                    var+=(seq[i]-z)
            print(var) 
except:
    pass
