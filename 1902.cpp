#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
		int n,t,s;
		cin>>n>>t>>s;
		int tmp;
		double ans;
		cout<<fixed<<setprecision(6);
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				ans=(t-s+tmp)/2.0;
				ans+=s;
				cout<<ans<<endl;
		}

		return 0;
}


