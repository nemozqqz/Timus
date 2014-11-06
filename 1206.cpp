#include <iostream>
using namespace std;

const int MAX = 1000;
int a[MAX]={0};
int b[MAX]={0};

int main()
{
		int k;
		cin>>k;
		a[0]=6;
		a[1]=3;

		int t=0;
		while(t<k-1)
		{
				t++;
				for(int i=0;i<MAX;i++)
				{
						b[i]=a[i];
						a[i]=0;
				}


				for(int i=0;i<MAX;i++)
						a[i] += b[i]*5;
				for(int i=0;i<MAX-1;i++)
						a[i+1] += b[i]*5;
				for(int i=0;i<MAX-1;i++)
				{
						int tmp=a[i]/10;
						a[i]=a[i]%10;
						a[i+1] += tmp;
				}
		}
		int start=MAX-1;
		while(a[start]==0)start--;
		for(int i=start;i>=0;i--)
				cout<<a[i];
		cout<<endl;

		//cout<<start<<endl;

		return 0;
}

		

		
					
