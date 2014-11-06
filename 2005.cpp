#include <iostream>
#include <cstring>
using namespace std;

int main()
{
		const int points=5;
		int dist[points][points];

		for(int i=0;i<points;i++)
		{
				for(int j=0;j<points;j++)
				{
						cin>>dist[i][j];
				}
		}

		int path1= dist[0][1]+dist[1][2]+dist[2][3]+dist[3][4];
		int path2= dist[0][3]+dist[3][2]+dist[2][1]+dist[1][4];
		int path3= dist[0][2]+dist[1][2]+dist[1][3]+dist[3][4];
		int path4= dist[0][2]+dist[2][3]+dist[3][1]+dist[1][4];

		int spath;
		int dir;
		if(path1<path2)
		{
				spath=path1;
				dir=1;
		}
		else
		{
				spath=path2;
				dir=2;
		}

		if(path3<path4)
		{
				spath = spath < path3 ? spath: path3;
				if(spath == path3)dir=3;
		}
		else
		{
				spath = spath < path4 ? spath: path4;
				if(spath==path4)dir=4;
		}


		cout<<spath<<endl;
		switch (dir)
		{
				case 1: cout<<"1 2 3 4 5\n";break;
				case 2: cout<<"1 4 3 2 5\n";break;
				case 3: cout<<"1 3 2 4 5\n";break;
				case 4: cout<<"1 3 4 2 5\n";break;
				default:break;
		}


}


		
