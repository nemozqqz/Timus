#include <iostream>
using namespace std;

int main()
{
		int n,tmp=1;
		cin>>n;
		int **a;
		a=new int* [n];
		for(int i=0;i<n;i++)
				a[i]=new int[n];
		for(int diff=1-n;diff<=n-1;diff++)
		{
				if(diff<0)
						for(int j=0;j<=n-1+diff;j++)
								a[j][j-diff]=(tmp++);
				else
						for(int j=diff;j<=n-1;j++)
										a[j][j-diff]=(tmp++);
		}
		for(int i=0;i<n;i++)
		{
			int first=1;
			for(int j=0;j<n;j++)
				if(first){cout<<a[i][j];first=0;}
				else cout<<" "<<a[i][j];
			cout<<endl;
		}
		return 0;
	}


