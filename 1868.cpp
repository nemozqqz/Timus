#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string table[12];
string md4[] = {"gold","silver","bronze"};

bool medal(const string& s,const string& m)
{
		int i=0;
		while(i<12&&s!=table[i])i++;

		if(i==12)return false;
		return md4[i/4]==m;
}

int main()
{
		for(int i=0;i<12;i++)
				cin>>table[i];
		int pp;
		cin>>pp;
		int *right =new int [pp];
		memset(right,0,sizeof(int)*pp);

		for(int i=0;i<pp;i++)
		{
				int prd;
				cin>>prd;
				string uvt,md,coma;
				for(int j=0;j<prd;j++)
				{
						cin>>uvt>>coma>>md;
						if(medal(uvt,md))
								right[i]++;
				}
		}

		int max=0;
		for(int i=0;i<pp;i++)
				if(right[i]>max)
						max=right[i];

		int ans=0;
		for(int i=0;i<pp;i++)
				if(right[i]==max)
						ans++;
		cout<<ans*5<<endl;
		delete []right;

		return 0;
}




