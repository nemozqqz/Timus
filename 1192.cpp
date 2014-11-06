#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

const double Pi = 3.1415926535;
int main()
{
		double V;
		int alpha;
		double k;
		cin>>V>>alpha>>k;

		//cout<<sin(alpha*Pi/180)<<endl;
		//
		if(alpha == 0 )
		{
				cout<<"0.00"<<endl;
				return 0;
		}



		double tmp = sin(2*alpha*Pi/180);

		double dist= tmp * V * V /10;

		double diff = 0.0015;
		while(V >= 0.001)
		{
				V= V / sqrt(k);

				diff = tmp * V * V /10;
				dist += diff; 
		}
		//cout<<dist<<endl;
		printf("%.2f\n",dist);
		return 0;
}

