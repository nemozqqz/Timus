#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//#define DEBUG

int main()
{
		int n,k;
		cin>>n>>k;
		/*
		int i=0,t=0,ans=1;
		while(ans<n)
		{
				i=k<ans?k:ans;
				ans+=i;
				t++;
		}
		
		cout<<t<<endl;
		*/

		int a=0;
		while((int)(pow(2,a)+0.1)<=k)a++;
		int divide=(int)(pow(2,a)+0.1);
#ifdef DEBUG
		cout<<divide<<endl;
#endif
		if(n<=divide)
		{
				cout<<ceil(log2(n))<<endl;
		}
		else
		{
				int tmp=(n-divide)/k;
				if((n-divide)%k==0)cout<<a+tmp<<endl;
				else cout<<a+tmp+1<<endl;
		}
		

		return 0;
}



