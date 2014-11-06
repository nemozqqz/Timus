#include <iostream>
#include <cmath>
using namespace std;
long long powerandmod(long long x,long long n,long long m);
int main()
{
		long long x,n,m,y;
		cin>>n>>m>>y;
		int first=1;
		for(x=0;x<m;x++)
		{
				if(powerandmod(x,n,m)==y)
				{
						if(first){cout<<x;first=0;}
						else cout<<" "<<x;
				}
		}
		if(first)cout<<-1<<endl;
		else cout<<endl;
		return 0;
}

long long powerandmod(long long x,long long n,long long m)
{
		if(n==0)return 1;
		if(n==1)return x%m;
		long long tmp=powerandmod(x,n/2,m)%m;
		return tmp*tmp*powerandmod(x,n%2,m)%m;
}

