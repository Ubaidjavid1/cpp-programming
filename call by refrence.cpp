#include<iostream>
using namespace std;
void smaller(int &,int &);
int main()
{int a,d;
cout<<"enter two nums"<<endl;
cin>>a>>d;
smaller(a,d);
cout<<a<<endl<<d;
}
void smaller(int &x,int &y)
{if(x>y)
y=0;
else
x=0;
}