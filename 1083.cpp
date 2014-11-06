#include <iostream>
//#define DEBUG
using namespace std;

int main()
{
		int n;
		cin>>n;
		int k=0;
		cin.get();
		while(cin.get()=='!')
		{
				k++;
			
		}
#ifdef DEBUG
		cout<<k<<endl;
#endif
		int end=n%k?n%k:k;
		unsigned long long ans=1;
		while(end<=n)
		{
				ans*=end;
				end+=k;
		}
		cout<<ans<<endl;
		return 0;
}
