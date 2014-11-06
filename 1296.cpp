#include <iostream>
#include <cstring>
using namespace std;

int n;
int* a;
int main()
{
		cin>>n;
		a=new int[n];

		for(int i=0;i<n;i++)
				cin>>a[i];

		int maxsum=0;
		int sum_so_far=0;

		for(int i=0;i<n;i++)
		{
				if(sum_so_far + a[i] <= 0)
						sum_so_far = 0;
				else
				{
						sum_so_far += a[i];
						if(sum_so_far > maxsum )
								maxsum = sum_so_far;
				}
		}
		cout<<maxsum<<endl;
		delete []a;
		return 0;
}


