#include <iostream>
using namespace std;

int main()
{
		int n,first=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
				if(first){cout<<i;first=0;}
				else cout<<" "<<i;
		}
		cout<<endl;
		return 0;
}
