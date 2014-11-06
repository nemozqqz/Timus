#include <iostream>
using namespace std;

inline bool check(char x,int y)
{
		if(x>='a'&&x<='h'&&y>=1&&y<=8)return true;
		else return false;
}
int main()
{
		int n;
		cin>>n;
		string tmp;
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				char x=tmp[0];
				int y=tmp[1]-'0';
				int ans=0;
				if(check(x-2,y+1))ans++;
				if(check(x-2,y-1))ans++;
				if(check(x-1,y+2))ans++;
				if(check(x-1,y-2))ans++;
				if(check(x+1,y+2))ans++;
				if(check(x+1,y-2))ans++;
				if(check(x+2,y+1))ans++;
				if(check(x+2,y-1))ans++;
				cout<<ans<<endl;
		}
		return 0;
}
		


