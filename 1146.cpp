#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int INF=0x3F3F3F3F;
int** table;
int** row;
int n;

int main()
{
		cin>>n;
		table=new int*[n];
		row=new int*[n];
		for(int i=0;i<n;i++)
		{
				table[i]=new int[n];
				row[i]=new int[n];
				for(int j=0;j<n;j++)
				{
						cin>>table[i][j];
						if(j==0)row[i][j]=table[i][j];
						else row[i][j]=row[i][j-1]+table[i][j];
				}
		}

		int ans=-INF;
		for(int i=0;i<n;i++)
		{
				for(int j=i;j<n;j++)
				{
						int t=0;
						int m=0;
						for(int r=0;r<n;r++)
						{
								if(t>0)
								t+=row[r][j]-(i>=1?row[r][i-1]:0);
								else t=row[r][j]-(i>=1?row[r][i-1]:0);
								if(t>m)m=t;
						}
						if(m==0)
						{
								m=-INF;
								for(int r=0;r<n;r++)
										m=max(m,row[r][j]-(i>=1?row[r][i-1]:0));
						}
						ans=max(ans,m);
				}
		}
		cout<<ans<<endl;

		for(int i=0;i<n;i++)
		{
				delete []row[i];
				delete []table[i];
		}
		delete []row;
		delete []table;
		return 0;
}



