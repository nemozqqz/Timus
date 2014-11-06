#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
		string s;
		cin>>s;
		int len=s.length();
		if(len%2==0)
		{
				for(int i=len-1;i>=len/2;i--)
				{
						if(s[i]>s[len-1-i])
						{
									s[i]='0';
									if(s[i-1] != '9')s[i-1]+=1;
									else
									{
										int t=i-1;
										while(s[t]=='9')
										{
												s[t]='0';
												t--;
										}
										s[t]+=1;
									}
						}

				}
				for(int i=0;i<len/2;i++)
				{
						cout<<s[i];
				}
				for(int i=len/2-1;i>=0;i--)cout<<s[i];
				cout<<endl;
		}
		else
		{
				for(int i=len-1;i>len/2;i--)
				{
						if(s[i]>s[len-1-i])
						{
								s[i]='0';
								if(s[i-1] != '9')s[i-1]+=1;
								else
								{
								int t=i-1;
								while(s[t]=='9')
								{
										s[t]='0';
										t--;
								}
								s[t]+=1;
								}
						}
				}
				for(int i=0;i<=len/2;i++)
				{
						cout<<s[i];
				}
				for(int i=len/2-1;i>=0;i--)cout<<s[i];
				cout<<endl;
		}
		return 0;
}





