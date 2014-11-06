#include <iostream>
using namespace std;

int main()
{
		int qtotal,ztotal;
		cin>>qtotal>>ztotal;
		int a[10],sum=0;
		for(int i=0;i<10;i++)
		{		
				cin>>a[i];
				sum+=(a[i]*20);
		}
		if(ztotal-sum<qtotal)cout<<"Dirty debug :("<<endl;
		else cout<<"No chance."<<endl;
		return 0;
}
