#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int LEN = 2000;
int num[LEN]={0};
int idx=0;
int n;

void multi(int* p,const int& b)
{
		for(int i=0;i<=idx;i++)
		{
				p[i]*=b;
		}
		int in=0;
		for(int i=0;i<=idx;i++)
		{
				p[i]+=in;
				p[i+1] += p[i]/10;
				p[i]%=10;
		}
		idx++;
}


int main()
{
		scanf("%d\n",&n);
		int threes;
		int remain;
		num[0]=1;	
		if(n%3==1)
		{
				if(n>3)
				{
					threes = n/3-1;
					remain=4;
				}
				else 
				{
						threes = 0;
						remain=1;
				}

		}
		else if(n%3==2)
		{
				threes = n/3;
				remain = 2;
		}
		else 
		{
				threes = n/3;
				remain = 1;
		}

		for(int i=0;i<threes;i++)
		{
				multi(num,3);
		}
		multi(num,remain);

		while(num[idx]==0)idx--;
		for(int i=idx;i>=0;i--)
		{
				printf("%d",num[i]);
		}
		printf("\n");
		return 0;
}



