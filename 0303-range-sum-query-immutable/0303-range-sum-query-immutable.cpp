class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        v=nums;
    }
    
    int sumRange(int left, int right) {
        return v[right]-((left!=0)?v[left-1]:0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */