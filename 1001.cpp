#include <iostream>
#include <cmath>
#include <iomanip>
#define MAXN 256*1024+100
using namespace std;

double a[MAXN];
int main()
{
		unsigned long long tmp;
		int i=0;
		while(cin>>tmp)
		{
			a[i++]=sqrt(tmp);
		}
		cout<<fixed<<setprecision(4);
		for(int j=i-1;j>=0;j--)
				cout<<a[j]<<endl;
		return 0;
}
