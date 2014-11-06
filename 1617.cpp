#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <assert.h>
using namespace std;

//#define DEBUG
int main()
{
		int n;
		cin>>n;
		int *a,*b;
		a=new int[n];
		b=new int[n];
		memset(b,4*n,0);

		int tmp,index=0,flag=1;
		
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				flag=1;
				for(int j=0;j<index;j++)
				{
						if(tmp==a[j]){b[j]++;flag=0;break;}
				}
				if(flag){a[index]=tmp;b[index++]=1;}
		}
		int cars=0;
		for(int i=0;i<index;i++)
		{
#ifdef DEBUG
				cout<<a[i]<<'\t'<<b[i]<<endl;
#endif
				cars+=(b[i]/4);
		}
		cout<<cars<<endl;
		delete []a;
		delete []b;
		return 0;
}


				

