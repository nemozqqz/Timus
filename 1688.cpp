#include <iostream>
#include <cstring>
using namespace std;

int main()
{
		long long  n,m;
		long long sum=0;

		cin>>n>>m;
		long long tmp;

		int flag=1;
		for(int i=0;i<m;i++)
		{
				cin>>tmp;
				sum += tmp;
				if(sum > 3*n)
				{
						flag=0;
						cout<<"Free after "<<i+1<<" times.\n";
						break;
				}
		}
		if(flag)
				cout<<"Team.GOV!\n";
		return 0;
}





		
