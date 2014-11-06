#include <cmath>
#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;

inline double distance(double x1,double y1,double x2,double y2)
{
		return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
		int n;
		cin>>n;
		double r;
		cin>>r;
		double x0,y0,tmpx1,tmpy1,tmpx2,tmpy2,ans=2*PI*r;
		cin>>tmpx1>>tmpy1;
		x0=tmpx1;y0=tmpy1;
		for(int i=1;i<n;i++)
		{
				cin>>tmpx2>>tmpy2;
				ans+=distance(tmpx1,tmpy1,tmpx2,tmpy2);
				tmpx1=tmpx2;
				tmpy1=tmpy2;
		}
		ans+=distance(x0,y0,tmpx1,tmpy1);
		cout<<fixed<<setprecision(2)<<ans<<endl;
		return 0;
}



