#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

const int INF=0x7F7F7F7F;
//#define DEBUG

int *obs;

int main()
{
		int n;
		int exit;
		cin>>n>>exit;
		if(n==0)
		{
				cout<<"Impossible\n";
				return 0;
		}


		obs=new int[n];

		int negnear=-INF,posnear=INF;
		if(exit>0)posnear=exit;
		else negnear=exit;
		for(int i=0;i<n;i++)
		{
				cin>>obs[i];
				if(obs[i]<0&&obs[i]>negnear)negnear=obs[i];
				else
						if(obs[i]>0&&obs[i]<posnear)posnear=obs[i];
		}

#ifdef DEBUG
		cout<<exit<<endl<<negnear<<endl<<posnear<<endl;
#endif //debug
		if((exit>0&&posnear<exit)||(exit<0&&negnear>exit))cout<<"Impossible"<<endl;
		else
		{
				if(exit>0)
				{
						cout<<exit<<" "<<(0-negnear)*2+exit<<endl;
				}
				else
						cout<<posnear*2-exit<<" "<<-exit<<endl;
		}
		delete []obs;
		return 0;
}


