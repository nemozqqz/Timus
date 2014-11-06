#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

const int MAXN=300;

map<string,int> name;
vector<int> adj[MAXN];
int dist[MAXN];

void bfs()
{
		int Q[MAXN],head=0,tail=0;

		for(int i=0;i<MAXN;i++)dist[i]=-1;

		if(name.find("Isenbaev")!=name.end())
		{
				int s=name["Isenbaev"];
				dist[s]=0;
				Q[tail]=s;
				tail++;
				while(head<tail)
				{
						int cur=Q[head];
						head++;
						for(int i=adj[cur].size()-1;i>=0;i--)
						{
								int nxt=adj[cur][i];
								if(dist[nxt]==-1)
								{
										dist[nxt]=dist[cur]+1;
										Q[tail++]=nxt;
								}
						}
				}
		}
}


int main()
{
		int n;
		cin>>n;
		string sb1,sb2,sb3;
		int v=0;
		for(int i=0;i<n;i++)
		{
				cin>>sb1>>sb2>>sb3;
				if(name.find(sb1)==name.end())name[sb1]=v++;
				if(name.find(sb2)==name.end())name[sb2]=v++;
				if(name.find(sb3)==name.end())name[sb3]=v++;

				int a=name[sb1],b=name[sb2],c=name[sb3];

				adj[a].push_back(b);adj[a].push_back(c);
				adj[b].push_back(a);adj[b].push_back(c);
				adj[c].push_back(a);adj[c].push_back(b);

		}
		bfs();
		map<string,int>::iterator it;
		for(it=name.begin();it!=name.end();it++)
		{
				cout<<it->first<<" ";
				if(dist[it->second]!=-1)cout<<dist[it->second]<<endl;
				else cout<<"undefined"<<endl;
		}
		return 0;
}


