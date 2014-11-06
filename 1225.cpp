#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>
using namespace std;

int main()
{
		int n;
		cin>>n;
		long long  *a;
		a=new long long [n+1];
		a[1]=2;
		a[2]=2;
		for(int i=3;i<=n;i++)
		{
				a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n]<<endl;
		delete []a;
		return 0;
}
