#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string ** a;
int *online;
int n;
int person=0;
string ops[]={"register","login","logout"};

int  hasUsr(const string& s)
{
		int  ans=0;
		while(ans<n&&a[ans][0]!=s)
				ans++;
		if(ans==n)return -1;
		return ans;
}

int main()
{
		cin>>n;
		online=new int[n];
		memset(online,0,sizeof(int)*n);

		a=new string* [n];
		for(int i=0;i<n;i++)
				a[i]=new string[2];

		int c=0;
		string cmd3[3];
		while(c <n)
		{
				c++;
				cin>>cmd3[0];
				if (cmd3[0] == ops[0])
				{
								cin>>cmd3[1]>>cmd3[2];
								if(hasUsr(cmd3[1])==-1)
								{
										a[person][0]=cmd3[1];
										a[person][1]=cmd3[2];
										person++;
										cout<<"success: new user added\n";

								}
								else
								{
										cout<<"fail: user already exists\n";
								}
				}
				else 
				if(cmd3[0] == ops[1])
				{
								cin>>cmd3[1]>>cmd3[2];

								int ind=hasUsr(cmd3[1]);
								if(ind == -1)
								{
										cout<<"fail: no such user\n";
								}
								else
								{
										if(a[ind][1]!=cmd3[2])
												cout<<"fail: incorrect password\n";
										else
										{
												if(online[ind]==0)
												{
														cout<<"success: user logged in\n";
														online[ind]=1;
												}
												else
												{
														cout<<"fail: already logged in\n";
												}
										}
								}
				}
				else
				{
								cin>>cmd3[1];
								int ind=hasUsr(cmd3[1]);
								if(ind == -1)
								{
										cout<<"fail: no such user\n";
								}
								else
								{
										if(online[ind]==0)
										{
												cout<<"fail: already logged out\n";
										}
										else
										{
												cout<<"success: user logged out\n";
												online[ind]=0;
										}

								}
				}
		}
		delete []online;
		for(int i=0;i<n;i++)
				delete []a[i];
		delete []a;
		return 0;
}





