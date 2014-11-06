#include <iostream>
//#define DEBUG
using namespace std;

int divide(int *a,int low,int high)
{
		int k=a[low];
		do
		{
				while(low<high&&a[high]>=k)--high;
				if(low<high){a[low]=a[high];++low;}
				while(low<high&&a[low]<=k)++low;
				if(low<high){a[high]=a[low];--high;}
		}while(low!=high);
		a[low]=k;
		return low;
}

void quickSort(int *a,int low,int high)
{
		if(low>=high)return ;
		int mid=divide(a,low,high);
		quickSort(a,low,mid-1);
		quickSort(a,mid+1,high);
}

int main()
{
		int k;
		cin>>k;
		int *a;
		a=new int[k];
		for(int i=0;i<k;i++)cin>>a[i];
		quickSort(a,0,k-1);
#ifdef DEBUG
		for(int i=0;i<k;i++)cout<<a[i]<<" ";
		cout<<endl;
#endif
		int peo=0;
		for(int i=0;i<(k+1)/2;i++)
		{
				peo+=a[i]%2?(a[i]+1)/2:a[i]/2+1;
		}
		cout<<peo<<endl;
		delete []a;
		return 0;
}

