#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int MAX = 1000000;
char arr[MAX];
int  each[26];
int	 two[26*26];
int three[26*26*26];

int main()
{
		for(int i=0;i<MAX;i++)
		{
				scanf("%c",&arr[i]);
				each[arr[i]-'a']++;
				if(each[arr[i]-'a']>40000)
				{
						cout<<"each!\n";
						return 1;
				}

		}

		int t;
		for(int i=0;i<MAX-1;i++)
		{
				t= (arr[i]-'a')*26+(arr[i+1]-'a');
				two[t]++;
				if(two[t]>2000)
				{
						cout<<"two!\n";
						return 1;
				}

	
		}
		for(int i=0;i<MAX-2;i++)
		{
				t= (arr[i]-'a')*26*26+(arr[i+1]-'a')*26+arr[i+2]-'a';
				three[t]++;
				if(three[t]>100)
				{
						cout<<"three!\n";
						return 1;
				}


		}
		cout<<"YES!\n";
		cout<<arr[MAX-2]<<" "<<arr[MAX-1]<<endl;
		return 0;
}


				

		



