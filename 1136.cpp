#include <iostream>
#include <cstring>
using namespace std;

int n;
int *a;
int flag=1;
int div(int *arr,const int& size)
{
		int tmp=arr[size-1];
		int id=0;
		while(arr[id]<tmp&&id<size-1)id++;
		return id;
}

void process(int *arr,const int& size)
{
		if(size==1)
		{
				if(flag){cout<<arr[0];flag=0;}
				else cout<<" "<<arr[0];
				return;
		}
		int mid=div(arr,size);
		//cout<<"mid="<<mid<<" "<<arr[mid-1]<<endl;
		if(mid!=size-1)
			process(arr+mid,size-mid-1);
		if(mid!=0)
			process(arr,mid);
		if(flag){cout<<arr[size-1];flag=0;}
		else cout<<" "<<arr[size-1];
}
int main()
{
		cin>>n;
		a=new int [n];
		for(int i=0;i<n;i++)
				cin>>a[i];


		process(a,n);
		cout<<endl;
		delete []a;
		return 0;
}

		
