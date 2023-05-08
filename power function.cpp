#include<iostream>
using namespace std;
double power(double,int);
int main()
{double a,d;
int b;
cout<<"enter value of a ,b"<<endl;
cin>>a>>b;
d=power(a,b);
cout<<d;
}
double power(double n,int p)
{int i;
double z=1;
for(i=1;i<=p;i++)
z=z*n;
return z;
}