#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int hg=2,st=10;
		int tmp;
		string status;
		for(int i=0;i<n;i++)
		{
				cin>>tmp>>status;
				if(status=="hungry")
				{
						if(tmp>hg)hg=tmp;
				}
				else if(status=="satisfied")
				{
						if(tmp<st)st=tmp;
				}
				if(hg>=st)
				{
						cout<<"Inconsistent\n";
						return 0;
				}
		}
		cout<<st<<endl;
		return 0;
}




