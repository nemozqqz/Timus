#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <set>
#include <functional>
#include <algorithm>
using namespace std;
#define DEBUG

int n,m;
float** dp;
bool** hasJmp;

/*
struct pt
{
		int x,y;
		pt(int tx=0,int ty=0){x=tx;y=ty;}
		pt(const pt& t){x=t.x;y=t.y;}
		bool operator<(const pt& other)const
		{
				return this->x < other.x;
		}
		bool operator==(const pt& other)const
		{
				return (this->x ==other.x&&this->y==other.y);
		}
};

set<pt> s;
*/

inline float min(float& x ,float& y)
{
		return x<y?x:y;
}
int main()
{
		scanf("%d %d\n",&n,&m);
		dp=new float*[n+1];
		hasJmp=new bool*[n+1];
		for(int i=0;i<=n;i++)
		{
				dp[i]=new float[m+1];
				hasJmp[i]=new bool[m+1];
				memset(dp[i],0,sizeof(float)*(m+1));
				memset(hasJmp[i],0,sizeof(bool)*(m+1));
		}

		int k;
		cin>>k;
		int tx,ty;
		for(int i=0;i<k;i++)
		{
				cin>>tx>>ty;
				//pt t(tx,ty);
				//s.insert(t);
				hasJmp[tx][ty]=1;

		}
		
		dp[0][0]=0;
		for(int i=1;i<=n;i++)
				dp[i][0]=100*i;
		for(int j=1;j<=m;j++)
				dp[0][j]=100*j;
		for(int i=1;i<=n;i++)
		{
				for(int j=1;j<=m;j++)
				{
						dp[i][j]=min(dp[i][j-1]+100,dp[i-1][j]+100);
						//pt tmp(i,j);
						//if(s.find(tmp)!=s.end())
						if(hasJmp[i][j])
								dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(float)sqrt(2)*100);
				}
		}
		printf("%d\n",(int)(dp[n][m]+0.5));

		for(int i=0;i<=n;i++)
		{
				delete []dp[i];
				delete []hasJmp[i];
		}
		delete []dp;
		delete []hasJmp;
		return 0;
}






