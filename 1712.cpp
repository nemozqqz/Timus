#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//#define DEBUG

int tmp[4][4];
void clockTurn(int a[][4])
{
		for(int j=0;j<=3;j++)
		{
				for(int i=3;i>=0;i--)
				{
						tmp[j][3-i]=a[i][j];
				}
		}

		for(int i=0;i<4;i++)
				for(int j=0;j<4;j++)
						a[i][j]=tmp[i][j];
}
		
void display(int a[][4],char b[][4])
{
		for(int i=0;i<4;i++)
				for(int j=0;j<4;j++)
						if(a[i][j])cout<<b[i][j];
}

int main()
{
		string str;
		int mask[4][4];
		char ch[4][4];
		for(int i=0;i<4;i++)
		{
				cin>>str;
				for(int j=0;j<4;j++)
				{
					if(str[j]=='.')mask[i][j]=0;
					if(str[j]=='X')mask[i][j]=1;
				}
		}
		for(int i=0;i<4;i++)
		{
				cin>>str;
				for(int j=0;j<4;j++)
						ch[i][j]=str[j];
		}
#ifdef DEBUG
		cout<<"Mask"<<endl;
		for(int i=0;i<4;i++)
		{
				for(int j=0;j<4;j++)
						cout<<mask[i][j];
				cout<<endl;
		}
		cout<<"CH"<<endl;
		for(int i=0;i<4;i++)
		{
				for(int j=0;j<4;j++)
						cout<<ch[i][j];
				cout<<endl;
		}
#endif
				
		display(mask,ch);
		clockTurn(mask);
	display(mask,ch);
		clockTurn(mask);
		display(mask,ch);
		clockTurn(mask);
		display(mask,ch);

		cout<<endl;
		return 0;
}


