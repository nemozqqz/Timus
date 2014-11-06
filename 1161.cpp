#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

double *a;
int n;
int idx=0;

void collide(const int& in)
{
		a[in-1]=2*sqrt(a[in]*a[in-1]);
}



int main()
{
		cin>>n;
		a=new double[n];
		for(int i=0;i<n;i++)
				cin>>a[i];
		sort(a,a+n);
		idx=n-1;
		while(idx>0)
		{
				collide(idx);
				idx--;
				sort(a,a+idx);
		}
		cout<<fixed<<setprecision(2);
		cout<<a[0]<<endl;

		delete []a;
		return 0;
}




