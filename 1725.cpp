#include <iostream>
using namespace std;

int main()
{
		int n,k;
		cin>>n>>k;
		if(k>n/2)k=n+1-k;

		if(n==2)cout<<0<<endl;
		else
		cout<<n-2-k<<endl;
		return 0;
}

