#include <iostream>
#include <string>
using namespace std;

void Astring(int n)
{
		cout<<"sin(1";
		int tmp=2;
		while(tmp<=n)
		{
				if(tmp%2==0)cout<<"-sin("<<tmp;
				else cout<<"+sin("<<tmp;
				tmp++;
		}
		for(int i=0;i<n;i++)cout<<")";
}

int main()
{
		int n;
		cin>>n;

		if(n==1){cout<<"sin(1)+1"<<endl;return 0;}
		for(int i=0;i<n-1;i++)cout<<"(";
		Astring(1);
		for(int i=2;i<=n-1;i++)
		{
				cout<<"+"<<n+2-i<<")";
				Astring(i);
		}
		cout<<"+2)";
		Astring(n);
		cout<<"+1"<<endl;
		return 0;
}
