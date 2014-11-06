#include <iostream>
#include <cstring>
using namespace std;

int* darr;
int* karr;
int n,m;

int main()
{
		cin>>n>>m;
		darr=new int[n];
		karr=new int[n];
		for(int i=0;i<n;i++)
		{
				cin>>darr[i];
				if(i>0)
						karr[i]=darr[i-1]/darr[i]-1;
		}
		int s=0;
		for(int i=1;i<n;i++)
		{
				s+=karr[i]*darr[i];
		}
		karr[0]=(m-s-1)/darr[0];
		for(int i=0;i<n;i++)
				cout<<karr[i]<<endl;
		delete []karr;
		delete []darr;
		return 0;
}



