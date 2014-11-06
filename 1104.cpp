#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

inline bool isDig(const char& a)
{
		return a>='0'&&a<='9';
}

inline bool isUpper(const char& a)
{
		return a>='A'&&a<='Z';
}

inline int MAXI(const int& a,const int& b)
{
		return a>b?a:b;
}

int main()
{
		string s;
		cin>>s;
		int max=0;
		int sum=0;
		for(int i=0;i<(int)s.length();i++)
		{
				
				if(isDig(s[i]))
				{
						sum+=s[i]-'0';
						max=MAXI(max,s[i]-'0');
				}
				else
						if(isUpper(s[i]))
						{
								sum+=s[i]-'A'+10;
								max=MAXI(max,s[i]-'A'+10);
						}
		}
		int flag=0;
		int k;
		for(k=2;k<=36;k++)
		{
				if(max>=k)continue;
				if(sum%(k-1)==0){flag=1;break;}
		}
		if(flag)
				cout<<k<<endl;
		else cout<<"No solution."<<endl;
		return 0;
}


						
