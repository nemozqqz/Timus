#include <iostream>
#include <cstring>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int *k,*sum;
		k=new int[n+1];
		sum=new int[n+1];
		sum[0]=0;

		int t=0;
		for(int i=1;i<=n;i++)
		{
				cin>>k[i];
				t+=k[i];
				sum[i]=t;
		}

		int querys;
		cin>>querys;
		int ct=0;
		int left,right;
		while(ct < querys)
		{
				ct++;
				cin>>left>>right;
				cout<<sum[right]-sum[left-1]<<endl;
		}

		delete []k;
		delete []sum;
		return 0;
}



