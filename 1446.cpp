#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

const string house[]={"Slytherin","Hufflepuff","Gryffindor","Ravenclaw"};
vector<string> stu[4];

int main()
{
		int n;
		cin>>n;
		cin.get();
		char name[210];
		string t,h;
		for(int i=0;i<n;i++)
		{
				cin.getline(name,sizeof(name));
				t=name;
				cin>>h;
				for(int i=0;i<4;i++)
				{
						if(h==house[i])
						{		stu[i].push_back(t);break;}
				}
				cin.get();
		}

		for(int i=0;i<4;i++)
		{
				cout<<house[i]<<":\n";
				for(int j=0;j<(int)stu[i].size();j++)
						cout<<stu[i][j]<<endl;
				cout<<endl;
		}
		return 0;
}



