#include <iostream>
#include <string>
using namespace std;

bool check(int a)
{
		int b1=a%10,
			b2=a/10%10,
			b3=a/100%10,
			b4=a/1000%10,
			b5=a/10000%10,
			b6=a/100000;
		if(b1+b2+b3==b4+b5+b6)return true;
		else return false;

}
int main()
{
		int tick;
		cin>>tick;
		if(check(tick+1)||check(tick-1))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return 0;

						
}
