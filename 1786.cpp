#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
		string str;
		string tobe="Sandro";
		cin>>str;
		int len=str.length();

		int min=0x7FFFFFFF;
		int cost;	

		for(int i=0;i<=len-6;i++)
		{
				cost=0;
				if(str[i]!='S')
				{
						if(isupper(str[i]))cost+=5;
						else 
						{
							if(str[i]=='s')cost+=5;
							else cost+=10;
						}
				}
				for(int j=i+1;j<i+6;j++)
				{
						if(str[j]!=tobe[j-i])
						{
								if(islower(str[j]))cost+=5;
								else 
								{
										if(str[j]==(char)toupper(tobe[j-i]))cost+=5;
										else cost+=10;
								}
						}
				}
				if(cost<min)min=cost;
		}
		cout<<min<<endl;
		return 0;
}


			
