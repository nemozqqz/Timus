#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
#include <iomanip>
using namespace std;

template <class T> class Chain;
template <class T>
class Node
{
		friend class Chain<T>;
		public:
			Node(){link=NULL;}
		private:
			T data1,data2;
			Node<T> *link;
}; 

template <class T>
class Chain
{
		public:
				Chain(){first=new Node<T>;end=first;}
				~Chain();
				bool isEmpty()const{return first->link==0;}
				void chainInsert(const T &x1,const T &x2);
				void chainOutput(ostream &out) const;
		private:
				Node<T> *first,*end;
};

template <class T>
Chain<T>::~Chain()
{
		Node<T> * next;
		while(first->link)
		{
				next=first->link;
				delete first;
				first=next;
		}
		delete first;
}

template <class T>
void Chain<T>::chainOutput(ostream& out)const
{
		Node<T> *current;
		for(current=first->link;current;current=current->link)
		{
				out<<current->data1<<" "<<current->data2<<endl;
		}

}

template <class T>
ostream &operator<<(ostream &out,const Chain<T>&x)
{
		x.chainOutput(out);
		return out;
}

template <class T>
void  Chain<T>::chainInsert(const T &x1,const T &x2)
{
		Node<T> *tmp=new Node<T>;
		tmp->data1=x1;
		tmp->data2=x2;
		tmp->link=NULL;

		//if(first->link==0){first->link=tmp;end=tmp;return; } //not necessary ,cause first=end;
		end->link=tmp;
		end=tmp;
		return ;
}


#define MAXPRO 100+3
//#define DEBUG
int main()
{
		int n;
		cin>>n;
#ifdef DEBUG
				cout<<n<<endl;
#endif

		Chain<int> *a;
		a=new Chain<int> [MAXPRO];

		int tmp1,tmp2;
		for(int i=0;i<n;i++)
		{
				cin>>tmp1>>tmp2;
#ifdef DEBUG
				cout<<tmp1<<" "<<tmp2<<endl;
#endif
				a[tmp2].chainInsert(tmp1,tmp2);
		}

		//*
		for(int i=MAXPRO-1;i>=0;i--)
		{
				if(!a[i].isEmpty())
						cout<<a[i];
		}
		//*/

		return 0;
}

