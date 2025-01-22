vector<int> arr = {nums[i], nums[j] , nums[left] , nums[right]};
                    sort(arr.begin() ,arr.end());
                    for(int  m = 0 ; m <res.size() ; m++){
                        int count = 0 ;
                        for(int n = 0 ; n < 4  ; n++){
                            if(res[m][n] == arr[n]){
                                count++;
                            }
                        }if(count<4){
                            res.push_back(arr);
                        }
                    }