#include <iostream>
#include <cmath>
using namespace std;

#define MAX 15000+5

long long prime[MAX];

bool checkPrime(long long a)
{
		if(a==2)return true;
		if(a%2==0)return false;
		for(long long i=3;i<=floor(sqrt(a)+0.1);i++)
				if(a%i==0)return false;
		return true;
}

void genPrime()
{
		int n=0;
		long long tmp=2;
		while(n<=MAX)
		{
				if(checkPrime(tmp))prime[n++]=tmp;
				tmp++;
		}
}
				

int main()
{
		int n;
		cin>>n;
		int *a;
		a=new int[n];
		genPrime();
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
				cout<<prime[a[i]-1]<<endl;
		}
		delete [] a;
		return 0;
}

