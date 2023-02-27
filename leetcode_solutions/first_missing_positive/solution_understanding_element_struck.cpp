class Solution {
public:
    void swap (int &a, int&b)
    {
        int t=a;
        a=b;
        b=t;
    }
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for (int i=0; i<n; i++)
        {
            int num = nums[i];
            while (num>0 && num<=n && nums[num-1]!=num) {swap(nums[num-1], nums[i]); num=nums[i];}
        }
        for (int i=0; i<n; i++) if(nums[i]!=i+1) return i+1;
        return n+1;
    }
};