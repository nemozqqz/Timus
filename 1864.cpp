#include <iostream>
#include <cstring>
using namespace std;

int n;
int* juice;
float* arr;

int main()
{
		cin>>n;
		juice=new int[n];
		arr=new float[n];
		memset(arr,0,sizeof(float)*n);

		int sum=0;
		for(int i=0;i<n;i++)
		{
				cin>>juice[i];
				sum+=juice[i];
		}

		float avg = sum/(n+1.0);

		int owes=0;
		float totalextra=0;
		for(int i=0;i<n;i++)
		{
				if(juice[i] > avg)
				{
						owes++;
						arr[i]=juice[i]-avg;
						totalextra+=arr[i];
				}
		}

		//cout<<owes<<endl;
		int first=1;
		for(int i=0;i<n;i++)
		{
				if(arr[i]>0)
				{
						int t=arr[i]/totalextra * 100;
						if(first)
						{
								cout<<t;
								first=0;
						}
						else cout<<" "<<t;
				}
				else 
				{
						if(first)
						{
								cout<<0;
								first=0;
						}
						else cout<<" "<<0;
				}
		}
		cout<<endl;
		delete []arr;
		delete []juice;
		return 0;
}




