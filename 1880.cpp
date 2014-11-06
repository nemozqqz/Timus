#include <iostream>
using namespace std;

inline int min(int a,int b)
{
		return a<b?a:b;
}
bool find(int *a,int n,int *b,int i)
{
		if(a==b)return true;
		for(int j=0;j<n;j++)
		{
				if(a[j]==b[i])return true;
		}
		return false;
}
int main()
{
		int n1,n2,n3,ans=0;
		int *a1,*a2,*a3;

		cin>>n1;
		a1=new int[n1];
		for(int i=0;i<n1;i++) cin>>a1[i];

		cin>>n2;
		a2=new int[n2];
		for(int i=0;i<n2;i++)cin>>a2[i];

		cin>>n3;
		a3=new int[n3];
		for(int i=0;i<n3;i++)cin>>a3[i];

		int tmpmin=min(min(n1,n2),n3);
		int *which;
		if(tmpmin==n1)which=a1;
		else if(tmpmin==n2)which=a2;
			else if(tmpmin==n3)which=a3;
		for(int i=0;i<tmpmin;i++)
		{
				if(find(a1,n1,which,i)&&find(a2,n2,which,i)&&find(a3,n3,which,i))ans++;
		}
		cout<<ans<<endl;
		delete []a1;
		delete []a2;
		delete []a3;
		return 0;
}

		
		
		
