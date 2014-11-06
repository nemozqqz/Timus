#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//#define DEBUG
int main()
{
		int n,k;
		cin>>n>>k;
		int *a;
		a=new int[n+1];

		a[0]=1;
		a[1]=k-1;
		for(int i=2;i<=n;i++)
		{
				a[i]=(k-1)*(a[i-1]+a[i-2]);
		}
#ifdef DEBUG
		for(int i=2;i<=n-1;i++)
		{
				cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
#endif
		cout<<a[n]<<endl;
		delete []a;
		return 0;
}


		
