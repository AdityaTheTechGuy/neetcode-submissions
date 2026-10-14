class Solution {
public:
    void FindCombinations(vector<vector<int>>& ans, vector<int>& current,vector<int>& candidates, int target,int i){

        // Base Case
        if(target == 0){
            ans.push_back(current);
            return;
        }

        if(i == candidates.size() || target<0) return;

        // Include 
        current.push_back(candidates[i]);
        FindCombinations(ans,current,candidates,target - candidates[i],i+1);

        // Backtrack
        current.pop_back();

        // Exclude
        while(i+1<candidates.size() && candidates[i] == candidates[i+1]) i++;
        FindCombinations(ans,current,candidates,target,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>current;

        FindCombinations(ans,current,candidates,target,0);

        return ans;
    }
};
