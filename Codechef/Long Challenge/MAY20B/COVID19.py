# cook your dish here
try:
    tc=int(input())
    for _ in range(tc):
        n=int(input())
        a=list(map(int,input().split()))
        bl=0
        ni=19
        x=0
        count=1
        d=[]
        for i in range(n-1):
            d.append(a[i+1]-a[i])
        for i in range(n-1):
            if d[i]<3:
                if bl==1:
                    count+=1
                else:
                    count+=1
                    bl=1
            else:
                bl=0
                ni=min(ni,count)
                x=max(x,count)
                count=1
        x=max(x,count)    
        ni=min(ni,count)    
        print(ni,x)
except:
    pass
