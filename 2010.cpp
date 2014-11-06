#include <iostream>
using namespace std;
int n;

inline bool inRange(const int& x,const int& y)
{
		return x>=1&&x<=n&&y>=1&&y<=n;
}

int main()
{
		cin>>n;
		int x,y;
		cin>>x>>y;

		//king
		int ct=0;
		for(int i=-1;i<=1;i++)
		{
				for(int j=-1;j<=1;j++)
				{
						if(!(i==0&&j==0))
						{
								if(inRange(x+i,y+j))
										ct++;
						}
				}
		}
		cout<<"King: "<<ct<<endl;
		
		//Knight	
		ct=0;
		for(int i=-1;i<=1;i+=2)
		{
				for(int j=-2;j<=2;j+=4)
				{
						if(inRange(x+i,y+j))
								ct++;
						if(inRange(x+j,y+i))
								ct++;
				}
		}
		cout<<"Knight: "<<ct<<endl;

		//Bishop
		ct=0;
		int diff=x>y?x-y:y-x;
		ct=n-diff+(x+y<=n+1?x+y-1:2*n-(x+y-1))-2;
		cout<<"Bishop: "<<ct<<endl;

		//Rook
		cout<<"Rook: "<<2*n-2<<endl;

		//Queen
		cout<<"Queen: "<<ct+2*n-2<<endl;

		return 0;
}


										




