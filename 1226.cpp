#include <iostream>
#include <cstring>
#include <string>
using namespace std;

inline bool isChar(const char& c)
{
		return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}

int main()
{
		string s;
		int len;
		while(getline(cin,s))
		{
				len=s.length();
				int start=0,end=0;
				while(end<len)
				{

						while(end<len&&isChar(s[end]))end++;

						for(int i=end-1;i>=start;i--)cout<<s[i];
						start=end;
						while(start<len&&!isChar(s[start]))
						{
							cout<<s[start];
							start++;
						}
						end=start;
				}
				cout<<endl;
		}
		return 0;
}



				



