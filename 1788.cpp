#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n,m;
int *b,*g;

bool cmp(int i,int j){return i>j;}

int upset(const int& k)
{
		int ans=0;
		for(int i=k;i<n;i++)ans+=g[i];
		for(int i=k;i<m;i++)
				ans += k*b[i];
		return ans;
}

int main()
{
		cin>>n>>m;
		g=new int[n];
		b=new int[m];
		for(int i=0;i<n;i++)cin>>g[i];
		for(int i=0;i<m;i++)cin>>b[i];

		sort(g,g+n,cmp);
		sort(b,b+m,cmp);

		int minans=0x3F3F3F3F;

		for(int i=0;i<=min(n,m);i++)
		{
				int t=upset(i);
				if(t<minans)
						minans=t;
		}
		cout<<minans<<endl;
		delete []g;
		delete []b;
		return 0;
}


