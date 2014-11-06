#include <iostream>
#include <string>
using namespace std;

int main()
{
		int n;
		cin>>n;
		string *a;
		a=new string [n];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		char tmp;
		cin>>tmp;
		for(int i=0;i<n;i++)
		{
				if(a[i][0]==tmp)cout<<a[i]<<endl;
		}
		delete []a;
		return 0;
}



