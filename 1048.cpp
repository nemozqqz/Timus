#include <iostream>
#include <cstring>
using namespace std;

int* a;
int* b;
int n;

int main()
{
		cin>>n;
		a=new int[n];
		b=new int[n];

		for(int i=n-1;i>=0;i--)
		{
				cin>>a[i]>>b[i];
		}

		int c=0;
		int t;
		for(int i=0;i<n;i++)
		{
				t=a[i]+b[i]+c;
				c=t/10;
				a[i]=t%10;
		}
		for(int i=n-1;i>=0;i--)
				cout<<a[i];
		cout<<endl;
		delete []a;
		delete []b;
		return 0;
}


