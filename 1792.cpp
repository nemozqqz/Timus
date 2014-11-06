#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;

bool check(int *a)
{
		if(a[4]!=(a[1]+a[2]+a[3])%2||a[5]!=(a[0]+a[2]+a[3])%2||a[6]!=(a[0]+a[1]+a[3])%2)return false;
		else return true;
}

int main()
{
		int a[7];
		for(int i=0;i<7;i++)cin>>a[i];

		int step=0,first=1;
		while(!check(a))
		{
				if(step!=0)a[step-1]=1-a[step-1];
				a[step]=1-a[step];
				step++;
		}
		for(int i=0;i<7;i++)
		{
				if(first){cout<<a[i];first=0;}
				else cout<<" "<<a[i];
		}
		cout<<endl;
		return 0;
}
		
