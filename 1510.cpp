#include <iostream>
#include <cstring>
using namespace std;

int *a;
int n;
int count=1;

int  vote()
{
		int p=a[0];
		count=1;

		int ans;
		for(int i=1;i<n;i++)
		{
				//if(count>=n/2+1){ans=p;break;}

				if(p==a[i])count++;
				else
				{
						if(count>0)count--;
						else 
						{
								p=a[i];
								count=1;
						}
				}
		}
		return p;
}



int main()
{
		cin>>n;
		a=new int[n];
		for(int i=0;i<n;i++)
				cin>>a[i];

		cout<<vote()<<endl;

		delete []a;
		return 0;
}



