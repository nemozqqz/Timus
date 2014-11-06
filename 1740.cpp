#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
		int l,k,h;
		cin>>l>>k>>h;

		double mintime = l/k * h;
		double maxtime=mintime;
	
		cout<<fixed;
		cout.precision(5);

		if(l%k != 0)
		{
				mintime += 0.00001;
				maxtime += h;
		}
		cout<<mintime<<" "<<maxtime<<endl;
		return 0;
}


