#include <iostream>
#include <cmath>
#include <string>
#include <assert.h>
using namespace std;

#define MAXN 200000
template <class T>
class Stack
{
		public:
				Stack(int MaxSize=MAXN);
				~Stack(){delete [] stack;}
				bool isEmpty(){return top==-1;}
				T top()const{return stack[top];}
				Stack<T>& add(const T& x);
				T pop();
				void display();
		private:
				int topindex;
				int MaxTop;
				T *stack;
};

template <class T>
Stack<T>::Stack(int MaxSize)
{
		MaxTop=MaxSize-1;
		stack=new T[MaxSize];
		topindex=-1;
}

template <class T>
Stack<T>& Stack<T>::add(const T& x)
{
		if(topindex>=0&&stack[topindex]==x){pop();return *this;}
		stack[++topindex]=x;
		return *this;
}

template <class T>
T Stack<T>::pop()
{
		T tmp=stack[topindex];
		topindex--;
		return tmp;
}

template <class T>
void Stack<T>::display()
{
		for(int i=0;i<=topindex;i++)
			cout<<stack[i];
		cout<<endl;
}

int main()
{
		string tmp;
		cin>>tmp;
		int len=tmp.length();
		Stack<char> s(len);
		for(int i=0;i<len;i++)
		{
				s.add(tmp[i]);
		}
		s.display();
		return 0;
}

