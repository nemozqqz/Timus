#include <iostream>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int *a;
		a=new int[n];
		for(int i=0;i<n;i++)cin>>a[i];

		int tmp=a[0]+a[1]+a[2],tmp1;
		int local=1;
		for(int i=2;i<=n-2;i++)
		{
				if((tmp1=a[i-1]+a[i]+a[i+1])>tmp){tmp=tmp1;local=i;}
		}
		cout<<tmp<<" "<<(local+1)<<endl;
		delete []a;
		return 0;
}


