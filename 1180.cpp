#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
		string str;
		cin>>str;

		int len=str.length();
		int sum=0;
		for(int i=0;i<len;i++)
				sum+=str[i]-'0';
		switch (sum%3)
		{
				case 0:cout<<2<<endl;break;
				case 1:cout<<1<<endl<<1<<endl;break;
				case 2:cout<<1<<endl<<2<<endl;break;
				default: break;
		}
		return 0;
}

