#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void func(){

    return;
}

vector<vector<int>> fourSum(vector<int>& nums, int t) {
    int size  = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int  i = 0 ; i<size-3 ; i++){
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i+1 ; j <size-2 ; j++){
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left  = j+1;
            int right  = size  -1;
            int sum = 0;
            
            while(left < right ){
                
                sum = nums[i]+ nums[j]+nums[left]+nums[right];
                cout<<" \n; sum = "<<sum<<"\n";
                if(sum == t){
                    vector<int> arr = {nums[i], nums[j] , nums[left] , nums[right]};
                    sort(arr.begin() ,arr.end());
                    if(res.size()==0){
                        cout<<"\n"<<nums[i]<<"+"<<nums[j]<<"+"<<nums[left]<<"+"<<nums[right]<<"\nggggg";
                        res.push_back(arr);
                        left++;
                        right--;
                        continue;
                    }
                    int count = 0 ;
                    for(int  m = 0 ; m <res.size() ; m++){
                        count = 0 ;
                        for(int n = 0 ; n < 4  ; n++){
                            if(res[m][n] == arr[n]){
                                count++;
                            }cout<<"-> count = "<<count<<" -> ";
                        }if(count==4){
                            break;
                        }
                    }
                    if(count==4){
                            left++;
                            right--;
                            continue;
                    }else{
                            cout<<"\n"<<nums[i]<<"+"<<nums[j]<<"+"<<nums[left]<<"+"<<nums[right]<<"\n";
                            res.push_back(arr);
                        }
                    left++;
                    right--;
                }
                    
                
        
                else if(sum<t){
                    left++;
                }
                else {
                    right--;
                }

            }
        }
    }   
        cout<<"\nressize=="<<res.size();
        return res;
    }




int main(){
    vector<int> arr = {-1,0,-5,-2,-2,-4,0,1,-2};
    string s  = "";
    int a  = 0;
    func();
    // fourSum(arr , -9);
    vector<int> arr1 = {-1,0,-5,-2,-2,-4,0,1,-2};
    if(arr == arr1){
        cout<<"fgrb";
    }
    return  0 ;
}