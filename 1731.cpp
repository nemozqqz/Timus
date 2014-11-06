#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int n,m;
		cin>>n>>m;

		cout<<1;
		for(int i=1;i<n;i++)
				cout<<" "<<i+1;
		cout<<endl;

		cout<<n+1;
		for(int j=2;j<=m;j++)
				cout<<" "<<j*n+1;
		cout<<endl;

		return 0;
}


