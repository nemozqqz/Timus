#include <iostream>
using namespace std;

int main()
{
		int n;
		cin>>n;
		if(n==0){cout<<10<<endl;return 0;}
		if(n<=9){cout<<n<<endl;return 0;}
		int a[10]={0};
		int i=9;
		int flag=0;
		while(n>1)
		{
				for(;i>=2;i--)
				{
						if(n%i!=0){flag++;continue;}
						else {a[i]++;break;}
				}
				if(flag==8){cout<<-1<<endl;return 0;}
				n/=i;
		}
		for(int j=2;j<10;j++)
		{
				for(int tmp=0;tmp<a[j];tmp++)
						cout<<j;
		}
		cout<<endl;
		return 0;
}
