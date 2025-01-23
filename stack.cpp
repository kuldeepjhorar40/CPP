
#include <iostream>
#include<stack>
using namespace std;
void reverseastk(stack<int> &a , stack<int> &b) {
	if(a.empty()) {
	    a = b;
		return ;
	}
	b.push(a.top());
	a.pop();
	reverseastk(a,b);
}
int main()
{	stack<int> a ;
	stack<int> b ;
	a.push(5);
	a.push(4);
	a.push(3);
	a.push(2);
	a.push(1);
	a.push(-1);
    cout<<"a = "<<endl;
    while(!a.empty())
    {
        cout<<a.top()<<"<-";
        a.pop();
    }
    a.push(5);
	a.push(4);
	a.push(3);
	a.push(2);
	a.push(1);
	a.push(-1);
	reverseastk(*&a,*&b);
	cout<<"\n a rev = ";
	while(!a.empty())
    {
        cout<<a.top()<<"<-";
        a.pop();
    }
	return 0;
}