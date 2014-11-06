#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int n;
		cin>>n;
		unsigned *a;
		a=new unsigned[n];
		int first=1;
		for(int i=0;i<n;i++)
				cin>>a[i];
		for(int i=0;i<n;i++)
		{
				unsigned k=a[i];
				unsigned tmp=(unsigned)sqrt(2*(k-1));
				if(tmp*(tmp+1)/2==k-1)
						if(first){cout<<1;first=0;}
						else cout<<" "<<1;
				else
						if(first){cout<<0;first=0;}
						else cout<<" "<<0;
		}
		cout<<endl;
		delete []a;
		return 0;
}
