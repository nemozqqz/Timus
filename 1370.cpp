#include <iostream>
#include <cstring>
using namespace std;

int* a;
int n,m;
int main()
{
		cin>>n>>m;
		a=new int[n];
		for(int i=0;i<n;i++)
				cin>>a[i];
		int start=0;
		start=(start+m)%n;

		if(start<=n-10)
		{

				for(int i=start;i<start+10;i++)
						cout<<a[i];
				cout<<endl;
		}
		else
		{
				for(int i=start;i<n;i++)
						cout<<a[i];
				for(int i=0;i<10-n+start;i++)
						cout<<a[i];
				cout<<endl;
		}
		delete []a;
		return 0;
}

