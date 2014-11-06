#include <iostream>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int cn1=0,cn2=0,cn3=0;

		for(int t,i=0;i<n;i++)
		{
				cin>>t;
				if(t==1)
						cn1++;
				else if(t==2)
						cn2++;
				else if(t==3)
						cn3++;
				
		}

		int mag=3;
		if(cn1==0)mag--;
		if(cn2==0)mag--;
		if(cn3==0)mag--;
		
		if(mag==1)cout<<"No\n";
		else 
				if(mag==3)cout<<"Yes\n";
		else
		{
				 if(cn1==1||cn2==1||cn3==1)
				 {
						 if(n<6)
								 cout<<"No\n";
						 else cout<<"Yes\n";
				 }
				 else
						 cout<<"Yes\n";
		}
		


				return 0;
}



