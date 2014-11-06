#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

//#define DEBUG

int n;

struct rec
{
		string name;
		float sec;
		int order;
		rec(string n,float s,int ord)
		{
				name=n;
				sec=s;
				order=ord;
		}
		rec(){name="";sec=0;order=0;}
};

rec* arr;
string* rank;
int comp(rec r1,rec r2)
{
		return r1.sec<r2.sec;
}

int main()
{
		scanf("%d\n",&n);
		arr=new rec[n];
		rank=new string[n];
		int mm,ss,d;
		int ct=30;
		for(int i=0;i<n;i++)
		{
				cin>>arr[i].name;
				scanf(" %d:%d.%d\n",&mm,&ss,&d);
				arr[i].sec=mm*60+ss+d/10.0;
				arr[i].order=i+1;
				arr[i].sec += i*ct;
		}
		
		//arr[0].sec=0;

		sort(arr,arr+n,comp);
#ifdef DEBUG
		for(int i=0;i<n;i++)
		{
				cout<<arr[i].name<<" "<<arr[i].sec<<endl;
		}
#endif //debug


		float min = (1<<30)-1;

		int ans=0;
		for(int i=0;i<n;i++)
		{
				float t = arr[i].sec - ct*(arr[i].order-1);
				if(t<min)
				{
						min=t;
						rank[ans++] = arr[i].name;
						//cout<<arr[i].name<<endl;
				}
		}


		sort(rank,rank+ans);
		cout<<ans<<endl;
		for(int i=0;i<ans;i++)
				cout<<rank[i]<<endl;

		delete []rank;
		delete []arr;
		return 0;
}

