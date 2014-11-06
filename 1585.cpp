#include <iostream>
//#define DEBUG
using namespace std;

inline int max(int a,int b)
{
		return a>b?a:b;
}
int main()
{
		int n;
		cin>>n;
		cin.get();
		int a[3]={0};
		char ch[20];
		for(int i=0;i<n;i++)
		{
				cin.getline(ch,sizeof(ch));
				switch (ch[0])
				{
						case 'E':a[0]++;break;
						case 'L':a[1]++;break;
						case 'M':a[2]++;break;
				}
		}
#ifdef DEBUG
		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
#endif
		if(max(max(a[0],a[1]),a[2])==a[0])cout<<"Emperor Penguin"<<endl;
		if(max(max(a[0],a[1]),a[2])==a[1])cout<<"Little Penguin"<<endl;
		if(max(max(a[0],a[1]),a[2])==a[2])cout<<"Macaroni Penguin"<<endl;
		return 0;
}
		

