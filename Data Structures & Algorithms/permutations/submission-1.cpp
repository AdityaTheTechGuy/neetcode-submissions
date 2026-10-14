class Solution {
public:
    void FindPermutations(vector<vector<int>>& ans,vector<int>& current,vector<int>& nums, vector<int>& used){

        if(current.size() == nums.size()){
            ans.push_back(current);
            return;
        }

        for(int i = 0; i < nums.size(); i++ ){
            if(!used[i]){
                current.push_back(nums[i]);
                used[i] = true;

                FindPermutations(ans,current,nums,used);
                current.pop_back();
                used[i] = false;

            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;
        vector<int>used(nums.size(),0);

        FindPermutations(ans,current,nums,used);

        return ans;
        
    }
};
