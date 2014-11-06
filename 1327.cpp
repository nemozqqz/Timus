#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int n,m;
		cin>>n>>m;

		if((m-n+1)%2==0)cout<<(m-n+1)/2<<endl;
		else	cout<<(m-n+1)/2+m%2<<endl;
		return 0;
		}

				
