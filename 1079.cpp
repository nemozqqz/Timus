#include <iostream>
using namespace std;
#define MAXN 100000+10

int a[MAXN];

int findMax(int n)
{
		int max=a[0];
		
		for(int i=0;i<=n;i++)
		{
				if(a[i]>max){max=a[i];}
		}
		return max;
}
int main()
{
		a[0]=0;
		a[1]=1;
		for(int i=2;i<MAXN;i++)
		{
				if(i%2==0)a[i]=a[i/2];
				else a[i]=a[(i-1)/2]+a[(i-1)/2+1];
		}
		int index;

		while(cin>>index)
		{
				if(index)cout<<findMax(index)<<endl;
				else break;
		}
		return 0;
}

