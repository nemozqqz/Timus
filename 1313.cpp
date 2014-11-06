#include <iostream>
using namespace std;

int main()
{
		int n;
		cin>>n;
		int **a;
		a=new int*[n];
		for(int i=0;i<n;i++)a[i]=new int [n];

		for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
						cin>>a[i][j];
		int first=1;
		for(int i=0;i<=(n-1)*2;i++)
				if(i<n)
				for(int j=i;j>=0;j--)
						if(first){cout<<a[j][i-j];first=0;}
						else cout<<" "<<a[j][i-j];
				else
				for(int j=n-1;j>=i-(n-1);j--)
						cout<<" "<<a[j][i-j];
		cout<<endl;
		for(int i=0;i<n;i++)delete [] a[i];
		delete []a;
		return 0;
}
