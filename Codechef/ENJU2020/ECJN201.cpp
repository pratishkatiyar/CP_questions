#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int p,q,r,a,b,c;
		cin>>p>>q>>r>>a>>b>>c;

		if((p>a)||(q>b)||(r>c))
		{
			cout<<-1<<"\n";
		}
		else
		{
			cout<<a-p+b-q+c-r<<"\n";
		}
	}
}
