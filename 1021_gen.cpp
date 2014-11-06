#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

#define MAXN 50000
int main()
{
		ofstream outfile("1021.in");
		outfile<<MAXN<<endl;
		for(int i=0;i<MAXN;i++)
				outfile<<i<<endl;
		outfile<<MAXN<<endl;
		for(int i=0;i<MAXN;i++)
				outfile<<MAXN-i<<endl;
		outfile.close();
		return 0;
}


