#include <iostream>
#include <string>
using namespace std;
char ch[1000+5];
int main()
{
		cin.getline(ch,sizeof(ch));
		string str;
		str=ch;
		int cost=0;
		int len=str.length();
		for(int i=0;i<len;i++)
		{
				if(str[i]>='a'&&str[i]<='z')
				{
						switch ((str[i]-'a')%3)
						{
								case 0 : cost++;break;
								case 1 : cost+=2;break;
								case 2 : cost+=3;break;
						}
				}
				else
				{
						if(str[i]=='.')cost++;
						else if(str[i]==',')cost+=2;
							else if(str[i]=='!')cost+=3;
								else if(str[i]==' ')cost++;
				}
		}
		cout<<cost<<endl;
		return 0;
}

									   
					
