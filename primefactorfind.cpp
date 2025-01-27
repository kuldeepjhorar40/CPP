#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void primecheck(int a  , int  i = 2)
{
    if(a<=1){
        return;
    }
    if(a%i==0){
        cout<<i<<endl;
        a/=i;
        primecheck(a,i);
    }else{
        primecheck(a,i+1);
    }
}
int main()
{
     
   int n ; 
    cin>>n;
    primecheck(n );
    return 0;
}