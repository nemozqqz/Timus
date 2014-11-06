#include <iostream>
#include <string>
using namespace std;

int main()
{
		int Blue,Red,Yellow;
		cin>>Blue>>Red>>Yellow;

		int k;
		cin>>k;

		string tmp;
		int c1=0,c2=0,c3=0;
		for(int i=1;i<=k;i++)
		{
				cin>>tmp;
				if(tmp == "Blue")c1++;
				else if(tmp == "Red")c2++;
				else if(tmp == "Yellow")c3++;
		}

		int ans=1;
		if(c1>=1)ans*=Blue;
		if(c2>=1)ans*=Red;
		if(c3>=1)ans*=Yellow;
		cout<<ans<<endl;
		return 0;
}







