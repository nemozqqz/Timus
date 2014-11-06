#include <iostream>
using namespace std;

int main()
{
		int n,k;
		cin>>n>>k;
		if(n<=k){cout<<2<<endl;return 0;}
		n*=2;
		cout<<(n%k?n/k+1:n/k)<<endl;
		return 0;
}


