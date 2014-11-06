#include <iostream>
#include <cstring>
using namespace std;

typedef long long LL;

LL **a;

int main()
{
		int n;
		cin>>n;
		a=new LL* [n+1];
		for(int i=0;i<=n;i++)
		{
				a[i]=new LL[n+1];
				memset(a[i],0,sizeof(LL)*(n+1));	
		}
		for(int i=1;i<=n;i++)
				a[i][i]=1;

		for(int i=1;i<=n;i++)
		{
				for(int j=i-1;j>=1;j--)
				{
						LL t=0;
						for(int k=1;k<=i-2*j;k++)
								t+=a[i-j][j+k];
						a[i][j]=t;
				}
		}
		LL ans=0;
		for(int j=1;j<n;j++)
				ans+=a[n][j];
		cout<<ans<<endl;

		//*
		for(int i=0;i<=n;i++)delete []a[i];
		delete []a;
		//*/
		return 0;
}


		
