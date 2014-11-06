#include <iostream>
using namespace std;

int main()
{
		double start,end,per;
		cin>>start>>end>>per;

		int year=0;
		while(start>end)
		{
				year++;
				start = (1-per/100)*start;
		}
		cout<<year<<endl;
		return 0;
}
		
