#include <iostream>
#include <cmath>
using namespace std;

const double ESP=1E-10;
int main()
{

		double p,q;
		cin>>p>>q;

		double l,r;
		int citzens=1;
		while(true)
		{
				l=citzens*p/100;
				r=citzens*q/100;
				int lower=ceil(l);
				int upper=floor(r);
				if(lower<=upper&&(lower+0.0)/citzens*100>p&&(lower+0.0)/citzens*100<q)
				{
						//cout<<lower<<endl<<upper<<endl;
						break;
				}

				citzens++;
		}
		cout<<citzens<<endl;
		return 0;
}


