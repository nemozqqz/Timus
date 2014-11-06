#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 1000000;
char arr[MAX];

int main()
{
		int index=0;
		int i,j,k;
		while(index<MAX)
		{
				for(i=0;i<26;i++)
				{
						for(j=0;j<26;j++)
						{
								for(k=0;k<26;k++)
								{
										arr[index++]= 'a'+i;
										if(index<MAX)
												arr[index++]='a'+j;
										if(index<MAX)
												arr[index++]='a'+k;
										else goto end;
								}
						}
				}
		}
end:
		for(int i=0;i<MAX;i++)
			cout<<arr[i];
		cout<<endl;
		return 0;
}






