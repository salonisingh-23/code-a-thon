class Solution {
public:

     void sum(int ind,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&ds)
    {
         if(target==0)
            {
                ans.push_back(ds);
                return;
         }
        
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind&&arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
            ds.push_back(arr[i]);
            sum(i+1,arr,target-arr[i],ans,ds);
            ds.pop_back();
     }
     }
    public:
    vector<vector<int>> combinationSum2(vector<int>& A, int B) {
        // Your code here
         sort(A.begin(),A.end());
         //A.erase(unique(A.begin(), A.end()), A.end());
        vector<vector<int>> ans;
        vector<int>ds;
        sum(0,A,B,ans,ds);
        return ans;
        
    }
};