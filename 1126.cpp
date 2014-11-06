#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 25000+1;
int m,n=0;
int a[MAX];
int Que[MAX];
int head=-1,tail=-1;

void inQue(const int& id)
{
		int t=a[id];
		if(tail==-1)
		{
				head=tail=0;
				Que[tail]=id;
		}
		else
		{
				while(a[Que[tail]] <= t&&tail>=head)
				{
						tail--;
				}
				tail++;
				Que[tail]=id;
		}
}

inline bool isHeadOut(int now)
{
		if(Que[head] < now-m+1)return true;
		return false;
}



int main()
{
		cin>>m;
		int t;
		while(cin>>t)
		{
				if(t==-1)break;
				a[n++]=t;
		}
		for(int i=0;i<m;i++)
				inQue(i);
		cout<<a[Que[head]]<<endl;
		
		for(int i=m;i<n;i++)
		{
				if(isHeadOut(i))head++;
				inQue(i);
				cout<<a[Que[head]]<<endl;
		}

		return 0;
}



				

