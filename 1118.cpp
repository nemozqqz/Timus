#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(const int& a)
{
		if(a==1)return false;
		if(a==2)return true;
		if(a%2==0)return false;
		for(int i=3;i<=sqrt(a)+1;i++)
				if(a%i==0)return false;
		return true;
}

double tri(const int& a)
{
		if(a==1)return 0;
		double ans=0;
		for(int i=1;i<a;i++)
		{
				if(a%i==0)
						ans+=i;
		}
		return ans/(a+0.0);
}


int main()
{
		int left,right;
		cin>>left>>right;

		if(left==1){cout<<1<<endl;return 0;}

		int flag=0;
		int pri;
		for(int i=right;i>=left;i--)
		{
				if(isPrime(i))
				{
						flag=1;		
						pri=i;
						break;
				}
		}
		if(flag)
		{
				cout<<pri<<endl;
		}
		else
		{
				double min=100;
				pri=right;
				double t;
				for(int i=right;i>=left;i--)
				{
						t=tri(i);
						if(t<min)
						{
								pri=i;
								min=t;
						}

				}
				cout<<pri<<endl;
		}
		return 0;
}

						




