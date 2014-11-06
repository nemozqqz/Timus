#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long LL;
const int MAXN=10000;
LL arr[MAXN];
int idx;

inline LL absdiff(const LL& x,const LL& y)
{
		return x>y?x-y:y-x;
}

inline LL min(const LL& x,const LL& y )
{
		return x<y?x:y;
}

int main()
{
		LL a,b,c;
		cin>>a>>b>>c;

		arr[0]=a;
		arr[1]=b;
		arr[2]=c;
		idx=3;

		LL minnum=min(absdiff(a,b),absdiff(a,c));
		minnum=min(minnum,absdiff(b,c));

		while(minnum)
		{
				arr[idx]=minnum;
				for(int i=0;i<idx;i++)
				{
						minnum=min(minnum,absdiff(arr[i],arr[idx]));
				}
				idx++;
		}
		cout<<idx-2<<endl;
		return 0;
}


