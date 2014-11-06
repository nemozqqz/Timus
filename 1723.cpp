#include <iostream>
#include <string>
using namespace std;

//#define DEBUG
int main()

{
		string str,sub,ans;
		cin>>str;
		int max=0,t,locat;
		int n=str.length();
		for(int i=0;i<n;i++)
		{
				for(int j=1;j<=n-i;j++)
				{
						sub=str.substr(i,j);
#ifdef DEBUG
						cout<<sub<<endl;
#endif
						locat=0;
						t=1;
						locat=str.find(sub,i+1);
						while(locat!=-1)
						{
								//if(locat==i+j)t++;
								//if(j>=2&&locat==i+j-1)t++;
								t++;
								locat=str.find(sub,locat+1);
						}
#ifdef DEBUG
						cout<<t<<endl;
#endif
						if(t>max)
						{
								max=t;
								ans=sub;
						}
				}
		}
		cout<<ans<<endl;
		return 0;
}



