#include <iostream>
#include <cstring>
using namespace std;

const int MAXN=105;
int **a;
int n;
int *vis,*team;
bool hasAns=true;;

void clear()
{
		for(int i=1;i<=n;i++)
				delete []a[i];
		delete []a;
		delete []vis;
		delete []team;
}

void dfs(int i)
{
		//team[i]=1;
		vis[i]=1;
		bool flag=false;
		for(int j=1;j<=n;j++)
		{
				if(j!=i&&a[i][j])
				{
						if(!vis[j])
						{
							team[j]=1-team[i];
							dfs(j);
						}
						if(!flag&&team[j]!=team[i])
								flag=true;
				}
		}
		if(!flag)
				hasAns=false;

}


int main()
{
		cin>>n;
		a=new int*[n+1];
		vis=new int[n+1];
		team=new int[n+1];
		memset(vis,0,sizeof(int)*(n+1));
		memset(team,0,sizeof(int)*(n+1));

		int tmp,poss=1;
		for(int i=1;i<=n;i++)
		{
				a[i]=new int[n+1];
				memset(a[i],0,sizeof(int)*(n+1));

				cin>>tmp;
				if(tmp==0){poss=0;break;}

				while(tmp!=0)
				{
						a[i][tmp]=1;
						cin>>tmp;
				}
		}
		if(!poss)
		{
				cout<<0<<endl;
				clear();
				return 0;
		}

		for(int i=1;i<=n&&hasAns;i++)
		{
				if(!vis[i])
				{
						team[i]=1;
						dfs(i);
				}
		}
		
		if(hasAns)
		{
				int cnt=0;
				for(int i=1;i<=n;i++)
						if(team[i])
						{
								cnt++;
						}

				cout<<cnt<<endl;
				int first=1;
				for(int i=1;i<=n;i++)
				{
						if(team[i])
						{
							if(first)
							{
								cout<<i;
								first=0;
							}
							else cout<<" "<<i;
						}
				}
				cout<<endl;
		}
		else
		{
				cout<<0<<endl;
		}
		clear();
		return 0;
}









