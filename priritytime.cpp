#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void func(){
    cout<<"entre the no. of process :\n";
    int  n ;
    vector<int>bt ={}; 
    vector<int>wt = {};
    vector<int>tat ={}; 
    vector<int>pr ={}; 
    cin>>n;
    cout<<"entre the burst time and priority of process :\n";
    for(int  i  = 0 ; i < n ; i++){
        int el;
        cout<<"bt["<<i+1<<"] = ";
        cin>>el;
        int prr ;
        cout<<"pr["<<i+1<<"] = ";
        cin>>prr;
        cout<<endl;
        pr.push_back(prr);
        bt.push_back(el);

    }
    cout<<endl;
    cout<<"The waiting time  of each process :\n";
    for(int  i  = 0 ; i < n ; i++){
        for(int  j = i+1  ; j<n ; j++){
            if(pr[i]>pr[j]){
                int temp = pr[i];
                pr[i] = pr[j] ; 
                pr[j] = temp;
                temp = bt [i];
                bt[i] = bt[j];
                bt[j]  = temp;
            }
        }    
    }
    cout<<endl;
    int sum =  0 ;
    for(int  i  = 0 ; i < n ; i++){
        wt.push_back(sum);
        cout<<"wt["<<i+1<<"] = "<<sum<< " ; ";
        sum+=bt[i];
    }
    cout<<endl;
    cout<<endl;
    cout<<"The tat time  of each process :\n";   
    cout<<endl;
    int avgtat  = 0;
    for(int  i  = 0 ; i < n ; i++){
        avgtat+=wt[i]+bt[i];
        tat.push_back(wt[i]+bt[i]);
        cout<<"tat["<<i+1<<"] = "<<wt[i]+bt[i]<<" ; ";
        7uy6
    }
    cout<<endl;
    cout<<"The avgtat time  of each process :\n"<<avgtat/tat.size();
    cout<<endl;
    cout<<"The avgwt time  of each process :\n"<<sum/wt.size();


    return;
}

int main(){
    vector<int> arr = {};
    string s  = "";
    int a  = 0;
    func();
    return  0 ;
}