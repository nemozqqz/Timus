#include <iostream>
using namespace std;


int main()
{
		int n;
		cin>>n;
		int conse=1,fore,tmp;
		bool first=true;
		cin>>fore;
		if(n==1){cout<<"1 "<<fore<<endl;return 0;}
		for(int i=1;i<n;i++)
		{
				cin>>tmp;
				if(tmp==fore)
				{		conse++;
						if(i==n-1)
						{
								if(first){cout<<conse<<" "<<fore<<endl;return 0;}
								else cout<<" "<<conse<<" "<<fore;				
						}
				}
				else 
				{
						if(first)	
						{
								cout<<conse<<" "<<fore;
								first=false;
						}
						else cout<<" "<<conse<<" "<<fore;
						fore=tmp;
						conse=1;
						if(i==n-1)cout<<" "<<conse<<" "<<fore;
				}
		}
		cout<<endl;
		return 0;
}
		


