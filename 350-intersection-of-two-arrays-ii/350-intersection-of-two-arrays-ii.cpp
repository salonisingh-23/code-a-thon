class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int t=nums1.size();
        vector<int> visited(1000000,0);
        vector<int> ans;
      
         for(int i=0;i<nums1.size();i++)
        {
           mp1[nums1[i]]++;
        }
         for(int i=0;i<nums2.size();i++)
        {
           mp2[nums2[i]]++;
        }
         for(int i=0;i<nums1.size();i++)
        {
          if(!visited[nums1[i]])
          {
              int n=min(mp1[nums1[i]],mp2[nums1[i]]);
              visited[nums1[i]]=1;
              for(int j=0;j<n;j++)
        {
            ans.push_back(nums1[i]);
        }
        }
         }
        
        return ans;
    }
};