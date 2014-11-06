#include <iostream>
#include <cstring>
using namespace std;

const int MAXN=110;

struct Arcnode
{
		int adjvex;
		Arcnode* nextarc;
		Arcnode(int a=0,Arcnode* p=NULL){adjvex=a;nextarc=p;}
};

Arcnode* LG[MAXN]={NULL};
int inCnt[MAXN]={0};

int main()
{
		int n;
		cin>>n;
		int t;
		Arcnode* tmp;
		for(int i=0;i<n;i++)
		{
				while(true)
				{
						cin>>t;
						if(t==0)break;
						tmp=new Arcnode(t);
						inCnt[t]++;
						Arcnode* head=LG[i+1];
						tmp->nextarc=head;
						LG[i+1]=tmp;
				}
		}
		
		int top=-1;
		int S[MAXN];
		for(int i=1;i<=n;i++)
		{
				if(inCnt[i]==0)
						S[++top]=i;
		}
		int first=1;
		while(top!=-1)
		{
				int t=S[top];
				top--;
				if(first){cout<<t;first=0;}
				else cout<<" "<<t;
				//inCnt[t]=-1;
				tmp=LG[t];
				while(tmp!=NULL)
				{
						int &d=inCnt[tmp->adjvex];
						if(d!=0)
						{
								d--;
								if(d==0)
										S[++top]=tmp->adjvex;
						}
						tmp=tmp->nextarc;
				}
		}
		cout<<endl;

		for(int i=1;i<=n;i++)
		{
				Arcnode* tmp;
				while(LG[i]!=NULL)
				{
						tmp=LG[i]->nextarc;
						delete LG[i];
						LG[i]=tmp;
				}
		}
		return 0;
}

										
								
							

				





