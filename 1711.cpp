#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;


int n;
string **a;
string* ans;

int main()
{
		cin>>n;
		a=new string*[n];
		ans=new string[n];
		for(int i=0;i<n;i++)
				a[i]=new string[3];

		string s1,s2,s3;
		for(int i=0;i<n;i++)
		{
				cin>>a[i][0]>>a[i][1]>>a[i][2];
				sort(a[i],a[i]+3);
		}


		int order;
		bool flag=true;
		for(int i=0;i<n;i++)
		{
				cin>>order;
				string t= a[order-1][0];
				ans[i]=t;
				if(i>0)
				{
						int ct=1;
					while(ans[i] < ans[i-1]&&ct<3)
					{
							ans[i]= a[order-1][ct++];
					}
					if(ans[i]<ans[i-1])
					{
							flag=false;
							break;
					}
				}
		}
		if(!flag)
				cout<<"IMPOSSIBLE\n";
		else
		{
				for(int i=0;i<n;i++)
						cout<<ans[i]<<endl;
		}

		delete []ans;
		for(int i=0;i<n;i++)delete []a[i];
		delete []a;
		return 0;
}



					


								


