class Solution {
public:
    void AllSubsets(vector<vector<int>>& ans, vector<int>& current, vector<int>& nums, int i){
        
        sort(nums.begin(),nums.end());
        if(i == nums.size()){
            ans.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        AllSubsets(ans,current,nums,i+1);

        current.pop_back();
        while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        AllSubsets(ans,current,nums,i+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;

        AllSubsets(ans,current,nums,0);

        return ans;
    }
};
