#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void func(){

    return;
}

int sumOfDigits(int n , int sum = 0) {
    if(n==0){
        return sum;
    }
    int el = n%10;
    cout<<el<<"->"<<sum<<" ; ";
    n/=10;
    sumOfDigits(n,sum+=el);
  
}

int main(){
    vector<int> arr = {};
    string s  = "";
    int a  = -2467;
    func();

    cout<<sumOfDigits(a,0);

    return  0 ;
}