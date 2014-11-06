#include <iostream>
using namespace std;


int main()
{
		int n;
		cin>>n;
		int* a=new int[n+1];

		
		for(int i=0;i<=n;i++)
				a[i]=i;

		for(int i=2;i*i<=n;i++)
		{
				for(int j=i*i;j<=n;j++)
				{
						a[j]=min(a[j],a[j-i*i]+1);
				}
		}

		cout<<a[n]<<endl;

		delete []a;
		return 0;
}

