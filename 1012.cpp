#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class BigInt
{
		public:
		string s;
		explicit BigInt(int i=0){s=string(1,i+'0');}
		BigInt(const BigInt& b){s=b.s;}

		BigInt operator=(const BigInt& b)
		{
				s=b.s;
				return *this;
		}
		
		BigInt operator=(const int& k )
		{
				string t(1,k+'0');
				s=t;
				return *this;
		}
//*
		BigInt operator*(int k)
		{
				BigInt ans;
				ans.s=s;
				int c=0,len=s.length();
				int t;
				for(int i=len-1;i>=0;i--)
				{
						t=(s[i]-'0')*k+c;
						c=t/10;
						ans.s[i]=t%10+'0';
				}
				if(c!=0)
				{
						string tmp(1,c+'0');
						ans.s=tmp+ans.s;
				}
				return ans;
		}
		BigInt operator+(const BigInt& b)
		{
				BigInt ans;
				int sl=s.length(),bsl=b.s.length();
				int maxlen=max(sl,bsl);
				int minlen=min(sl,bsl);
				ans.s=string(maxlen,'0');
				int c=0,t;
				int i;
				for(i=1;i<=minlen;i++)
				{
						t=s[sl-i]-'0'+b.s[bsl-i]-'0'+c;
						c=t/10;
						ans.s[maxlen-i]=t%10+'0';
				}
				if(minlen==sl)
				{
						while(i<=bsl)
						{
						t=b.s[bsl-i]-'0'+c;
						c=t/10;
						ans.s[maxlen-i]=t%10+'0';
						i++;
						}
				}
				else
				{
						while(i<=sl)
						{
						t=s[sl-i]-'0'+c;
						c=t/10;
						ans.s[maxlen-i]=t%10+'0';
						i++;
						}
				}
				if(c!=0)
				{
						string tmp(1,c+'0');
						ans.s=tmp+ans.s;
				}
				return ans;
		}
//*/


};

BigInt *f,*g;
int main()
{
		int n,k;
		cin>>n>>k;
		f=new BigInt[n+1];
		g=new BigInt[n+1];

		f[1]=k-1;
		g[1]=0;
//*
		for(int i=2;i<=n;i++)
		{
				f[i]=f[i-1]*(k-1)+g[i-1]*(k-1);
				g[i]=f[i-1];
		}
		cout<<(f[n]+g[n]).s<<endl;
//*/
		delete []f;
		delete []g;
		return 0;
}


