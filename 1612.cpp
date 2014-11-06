#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//#define DEBUG
int tram=0,trolley=0;
inline void check(const string& a)
{
		if(a=="tram")tram++;
		else if(a=="trolleybus")trolley++;
}

int nextstartpos(const string& a,int index)
{
		while( index<a.length()&&
			 (a[index] == '.'||
			  a[index] == ','||
			  a[index] == '-'||
			  a[index] == ':'||
			  a[index] == '!'||
			  a[index] == '?'||
			  a[index] == ' ')
			 )
				index++;
		return index;
}

int nextendpos(const string& a,int index)
{
		while( index+1<a.length())
		{
		 if   (a[index+1] == '.'||
			  a[index+1] == ','||
			  a[index+1] == '-'||
			  a[index+1] == ':'||
			  a[index+1] == '!'||
			  a[index+1] == '?'||
			  a[index+1] == ' ')
			 
				break;
		 else index++;
		}
		return index;
}

int main()
{
		string s;
		while(getline(cin,s))
		{	
		int len=s.length();
		int start=0,end=0;
		while(start<len)
			{
				start=nextstartpos(s,start);
				end = nextendpos(s,start);

				string slice(&s[start],&s[end+1]);
#ifdef DEBUG
				cout<<slice<<endl;
#endif //debug
				check(slice);
				start=end+1;
			}
		}
#ifdef DEBUG
		cout<<tram<<" "<<trolley<<endl;
#endif 
		if(tram>trolley)
				cout<<"Tram driver\n";
		else if(trolley>tram)
				cout<<"Trolleybus driver\n";
		else cout<<"Bus driver\n";

		return 0;
}




