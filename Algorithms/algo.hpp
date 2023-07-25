#pragma ONCE
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // use queue and loop through entire array??
        std::queue<int> q;
        vector<int> ans;
        int fix=0;
        while(fix<nums.size()){
        bool flag=false;
        q.push(nums[fix]);
        for(int i=fix+1;i<nums.size();i++){
            if (q.front()==nums[i]){
                // duplicate, needs to be removed from vector
                flag=true;
                 break;
            }
        }
        if(flag != true){
            // is NOT a duplicate
            // take out of queue
            q.pop();
ans.push_back(nums[fix]);
                fix++;
        }
        else{
            // IS a duplicate, dont add to ans, leave in queue
           continue;
        }
        }
    return ans.size();
     
       
                
    }
};