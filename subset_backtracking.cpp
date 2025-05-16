#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
      vector<vector<int>> subsets(vector<int>& nums){

             vector<vector<int>> result; 
             vector<int> current_subset; 
             backtracking(nums, 0, current_subset, result); 
             return result; 
      }
      void backtracking(vector<int>& nums, int index, vector<int> current_subset, vector<vector<int>>& result){
               result.push_back(current_subset); 
               for(int i=index; i<nums.size(); ++i){
                    current_subset.push_back(nums[i]); 
                    backtracking(nums, i+1, current_subset, result); 
                    current_subset.pop_back(); 
               }
      }
};

int main(){
     vector<int> nums = {1,2,3}; 
     Solution sol; 
     vector<vector<int>> result = sol.subsets(nums); 
     for(auto& vec:result){
         cout << "[" ; 
         for(int num:vec){
             cout << num << " " ; 
         }
         cout << "]" << endl; 
     }
     return 0; 
}
