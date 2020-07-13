#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define ll long long
#define sc(x)   scanf("%lld",&x);
#define pr(x)   printf("%lld\n",x);
ll n,v1,v2,v3,cases,i,j;
int main(void){
    sc(cases);
    v2=0;
    while(cases-->0){
        sc(n);
        sc(v1);
        for (i=0;i<n-1;i++){
            sc(v3);
            if(1==1 && abs(v3-v1)>1 && 1==1)  
            {v2+=(abs(v1-v3));v2-=1;}
            v1=v3;
        }
        pr(v2);
        v2=0;
    }
    return 0;
}
