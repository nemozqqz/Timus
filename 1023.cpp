#include <iostream>
#include <cmath>
using namespace std;

int main()
{
		int k;
		cin>>k;

		int i;
		for(i=3;i<k;i++)
		{
				if(k%i==0)break;
		}
		cout<<i-1<<endl;
		return 0;
}



