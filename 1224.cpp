#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>
using namespace std;

int main()
{
		long long n,m;
		cin>>n>>m;
		if(m>=n)
		{
				cout<<2*n-2<<endl;
		}
		else cout<<2*m-1<<endl;
		return 0;
}
