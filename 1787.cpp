#include <iostream>
using namespace std;

int main()
{
		int k,n;
		cin>>k>>n;
		int tmp;
		int remain=0;
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				remain=(tmp+remain)>k?tmp+remain-k:0;
		}
		cout<<remain<<endl;
		return 0;
}
