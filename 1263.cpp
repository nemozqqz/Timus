#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int a[10000+5]={0};
int main()
{
		int n,m;
		cin>>n>>m;
		//int *a;
		//a=new int [n+1];
		//memset(a,4*(n+1),0);
		int tmp;
		for(int i=1;i<=m;i++)
		{
				cin>>tmp;
				a[tmp]++;
		}
		cout<<fixed<<setprecision(2);
		for(int i=0;i<n;i++)
		{
				 cout<<100*a[i+1]/double(m)<<"%"<<endl;
		}
		//delete []a;
		return 0;
}
