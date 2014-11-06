#include <iostream>
using namespace std;

int main()
{
		int petr,driver,pinit,dinit,pstep,dstep;
		cin>>pinit>>pstep>>dinit>>dstep;
		petr=pinit;
		driver=dinit;
		if(petr>=driver)cout<<petr<<endl;
		while(petr<driver)
		{
				petr+=pstep;
				if(petr>=driver){cout<<((petr==driver)?petr:driver)<<endl;break;}
				driver-=dstep;
				if(driver<=petr){cout<<((petr==driver)?driver:petr)<<endl;break;}
		}
		return 0;
}
