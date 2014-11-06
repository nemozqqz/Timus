#include <iostream>
#include <cmath>
#include <ctime>
//#define DEBUG
using namespace std;

inline int abs(int a)
{
		return a>0?a:-a;
}

int main()
{
		//long long time=clock();
		unsigned MIN=(1<<31)-1;
#ifdef DEBUG
		cout<<MIN<<endl;
#endif
		int n;
		cin>>n;
		int *a;
		a=new int [n];
		for(int i=0;i<n;i++)
				cin>>a[i];
		int diff;
		for(int i=pow(2,0);i<=pow(2,n)-1;i++)
		{
				diff=0;
				for(int j=0;j<n;j++)
				{
						if(i&(1<<j))diff+=a[j];
						else diff-=a[j];
				}
				if(abs(diff)<MIN)MIN=diff;	
				if(MIN==0)break;
		}
		cout<<MIN<<endl;
		delete []a;
		//time=clock()-time;
		//cout<<"TIME="<<(double)time/CLOCKS_PER_SEC<<"s"<<endl;
		return 0;
}
