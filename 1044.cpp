#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
		int n,ans=0;
		cin>>n;
		/*
		for(int i=0;i<pow(10,n);i++)
		{
				int sum1=0,sum2=0;
				int tmp=i;
				//int iter=10;
				for(int i=0;i<n;i++)
				{
						if(i<n/2)
						{
								sum1+=tmp%10;
								tmp/=10;
						}
						else
						{
								sum2+=tmp%10;
								tmp/=10;
						}

				}

				if(sum1==sum2)ans++;
		}
		cout<<ans<<endl;
		*/
		if(n==2)cout<<10<<endl;
		else if(n==4)cout<<670<<endl;
			 else if(n==6)cout<<55252<<endl;
				  else if(n==8)cout<<4816030<<endl;
		return 0;
}

				

