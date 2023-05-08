#include<iostream>
using namespace std;

class stack

{
private:
    int st[10];
    int top;
public:
	stack():top(-1)
	{
	}
void push(int m)
{top++;
st[top]=m;
}
int pop()
{return st[top--];
}
};
int main()
{stack s1;
s1.push(10);
s1.push(20);
s1.push(30);
cout<<s1.pop()<<" ";
cout<<s1.pop();
cout<<s1.pop();
}