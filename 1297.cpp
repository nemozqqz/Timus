#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

string msg;
bool isPra(int left,int right)
{
		if(left==right)return 1;
		int len=right-left+1;

		for(int i=left;i<left+len/2;i++)
		{
				if(msg[i]!=msg[left+right-i])return false;
		}
		return true;
}

int main()
{
		cin>>msg;
		int len=msg.length();

		int maxlen=0;
		int left,right;
		for(int i=0;i<len;i++)
		{
				for(int j=i;j<len;j++)
				{
						if(isPra(i,j)&&(j-i+1>maxlen))
						{
								maxlen=j-i+1;
								left=i;
								right=j;
						}
				}
		}
		/*
		for(int i=left;i<=right;i++)
				cout<<msg[i];
		cout<<endl;
		*/
		for(int i=left;i<=right;i++)
				printf("%c",msg[i]);
		cout<<endl;
		return 0;
}

										

