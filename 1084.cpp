#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI=acos(-1);

int main()
{
		int d,l;
		cin>>d>>l;
		double sarea=d*d;
		double carea=PI*l*l;

		cout<<fixed<<setprecision(3);
		if(2*l<=d)
				cout<<carea<<endl;
		else
		{
				if((double)l>d/2.0*sqrt(2))
						cout<<sarea<<endl;
				else
				{
						double s2=l*l-(d*d/4.0);
						double btri=sqrt(s2)*d/2.0;
						double csteta=(l*l+d*d/4.0-s2)/(l*d);
						if(csteta>1)csteta=1;
						double remain=PI/2-2*acos(csteta);
						double p=l*l*remain/2;
						cout<<4*(p+btri)<<endl;
				}
		}
		return 0;
}



