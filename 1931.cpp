#include <iostream>
#include <cstring>
using namespace std;

//#define DEBUG
int* a;
int n;
int id,mi;
int main()
{
		cin>>n;
		a=new int[n];
		memset(a,0,sizeof(int)*n);

		int tmp;
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				if(i==0){id=i;mi=tmp;}
				else
				{
						a[id]++;
						if(tmp<mi)
						{
								id=i;mi=tmp;a[id]++;
						}
				}
		}

#ifdef DEBUG
		for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
		cout<<endl;
#endif 
		int ans=0;
		for(int i=1;i<n;i++)
		{
				if(a[i]>a[ans])ans=i;
		}
		cout<<ans+1<<endl;
		delete []a;
		return 0;
}

						




