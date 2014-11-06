#include <iostream>
#include <cstring>
using namespace std;

const int MAX=40;
int a[MAX];

int main()
{
		int n;
		cin>>n;
		int times=0;

		while(n>1)
		{
				a[times++]=n/2;
				n=(n+1)/2;
		}

		cout<<times<<endl;
		int first=1;
		//if(times!=0)
		{
				for(int i=0;i<times;i++)
				{
					if(first){cout<<a[i];first=0;}
					else cout<<" "<<a[i];
				}
				cout<<endl;
		}

		return 0;
}





