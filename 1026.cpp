#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int *db;

int main()
{
		cin>>n;
		db=new int[n];
		for(int i=0;i<n;i++)
				cin>>db[i];
		sort(db,db+n);
		string jin;
		cin>>jin;
		int m,q;
		cin>>m;
		for(int i=0;i<m;i++)
		{
				cin>>q;
				cout<<db[q-1]<<endl;
		}
		delete []db;
		return 0;
}



