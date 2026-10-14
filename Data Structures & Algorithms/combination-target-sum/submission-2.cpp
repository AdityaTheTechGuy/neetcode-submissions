class Solution {
public:
    void FindCombinations(vector<vector<int>>& ans, vector<int>& nums, vector<int>& current, int target, int i){

        if(target == 0){
            ans.push_back(current);
            return;
        }

        if(i == nums.size() || target<0) return;

        current.push_back(nums[i]);

        FindCombinations(ans,nums,current,target - nums[i],i);
        current.pop_back();

        FindCombinations(ans,nums,current,target , i+1);


    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        FindCombinations(ans,nums,current,target,0);
        
        return ans;
    }
};
