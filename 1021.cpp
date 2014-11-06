#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

#define SACRED 10000
//#define DEBUG
int *ls1;
int *ls2;

bool binsearch(int index,int min,int max)
{
		if(min<max)return false;
		if(ls1[index]+ls2[min]>SACRED||ls1[index]+ls2[max]<SACRED)return false;
		int mid=(min+max)/2;
		int tmp=ls1[index]+ls2[mid];
		if(tmp==SACRED)return true;
		if(tmp>SACRED)
				return binsearch(index,min,mid+1);
		else
				return binsearch(index,mid-1,max);
}
		


int main()
{
		int n1,n2;
		cin>>n1;
		ls1=new int[n1];
		for(int i=0;i<n1;i++)cin>>ls1[i];

		cin>>n2;
		ls2=new int[n2];
		for(int i=0;i<n2;i++)cin>>ls2[i];

		for(int i=0;i<n1;i++)
		{
				if(binsearch(i,n2-1,0))
				{
#ifdef DEBUG
						cout<<ls1[i]<<endl;
#endif
						cout<<"YES"<<endl;
						return 0;
				}
		}
		cout<<"NO"<<endl;
		delete []ls1;
		delete []ls2;
		return 0;
}

								


