#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

//#define DEBUG
struct report
{
		int start;
		int end;
		report(int s=0,int e=0)
		{
				start=s;
				end = e;
		}

};

int compare(const void* t1,const void* t2)
{
		report *tmp1=(report *)t1;
		report *tmp2=(report *)t2;
		if(tmp1->end < tmp2->end)
				return -1;
		if(tmp1->end > tmp2->end)
				return 1;
		else
		{
		if(tmp1->start > tmp2->start )
				return 1;
		if(tmp1->start < tmp2->start )
				return -1;
		}
		return 0;
}


int main()
{
		int n;
		cin>>n;
		report *arr;
		arr = new report [n];
		int s,e;
		for(int i=0;i<n;i++)
		{
				cin>>s>>e;
				arr[i].start=s;
				arr[i].end=e;
		}
		qsort(arr,n,sizeof(report),compare);

#ifdef DEBUG
		cout<<"DEBUG"<<endl;
		for(int i=0;i<n;i++)
				cout<<arr[i].start<<" "<<arr[i].end<<endl;
#endif //debug

		int cnt=1;
		int right = arr[0].end;
		int index=0;
		while(index<n )
		{
				if(arr[index].start > right )
				{
						cnt++;
						right = arr[index].end;
#ifdef DEBUG
						cout<<"LOOP\n";
						cout<<arr[index].start<<" "<<arr[index].end<<endl;
#endif
				}
				index++;
		}

		
		cout<<cnt<<endl;
		delete []arr;
		return 0;
}


