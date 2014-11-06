#include <iostream>
#include <cmath>
using namespace std;

//#define DEBUG
int mesen[38] =
				{ 2,3,0,0,0,0,0,31,61,89,
				  107,127,521,607,1279,2203,2281,3217,4253,4423,
				  9689,9941,11213,19937,21701,23209,44497,86243,110503,132049,
				  216091,756839,859433,1257787,1398269,2976221,3021377,6972593};

bool isPrime(const int& a)
{
		if(a==2)return true;
		if(a%2==0)return false;
		for(int i=3;i<sqrt(a)+1;i++)
				if(a%i==0)return false;
		return true;
}

int main()
{

		int index=2;
		while(index<8)
		{
				for(int i=mesen[index-1]+1;;i++)
				{
						int t=(1<<i)-1;
						if( isPrime(t))
						{
								mesen[index]=i;
								index++;
								break;
						}
				}
		}

		int t;
		cin>>t;
		int id;
		for(int i=0;i<t;i++)
		{
				cin>>id;
				cout<<mesen[id-1]<<endl;
		}
#ifdef DEBUG
		for(int i=2;i<7;i++)
				cout<<mesen[i]<<endl;
#endif
		return 0;
}


