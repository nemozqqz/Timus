#include <iostream>
#include <string>
using namespace std;

int main()
{
		int n;
		cin>>n;
		string *a,tmp;
		a=new string[n];
		int *b;
		b=new int[n];
		for(int i=0;i<n;i++)
		{
				b[i]=0;
		}

		int index=0;
		bool flag;
		for(int i=0;i<n;i++)
		{		
				cin>>tmp;
				flag=false;
				for(int j=0;j<index;j++)
				{
						if(tmp==a[j])
						{
								flag=true;
								b[j]+=1;
								break;
						}
				}
				if(!flag){a[index]=tmp;b[index]+=1;index++;}
		}
		for(int i=0;i<index;i++)
		{
				if(b[i]>=2)cout<<a[i]<<endl;
		}
		delete []a;
		delete []b;
		return 0;
}



				

