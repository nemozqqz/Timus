#include <iostream>
using namespace std;

long long arr[11][82];

int main()
{
		int s;
		cin>>s;
		for(int i=1;i<=9;i++)
		{
				arr[i][0]=1;
				arr[i][1]=i;
		}
		for(int j=0;j<=9;j++)
				arr[1][j]=1;
		for(int j=10;j<=s;j++)
				arr[1][j]=0;

		for(int i=2;i<=9;i++)
		{
				for(int j=2;j<=s;j++)
				{
						long long t=0;
						for(int k=0;k<=9;k++)
						{
								if(j-k >= 0)
										t+= arr[i-1][j-k];
						}
						arr[i][j]=t;
				}
		}
		if(s==1)
				cout<<arr[9][1]+1<<endl;
		else cout<<arr[9][s]<<endl;
		return 0;
}



