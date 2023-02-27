class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, count=0;
        for (int n: nums)
        {
            if(count==0) candidate = n;
            if (candidate==n) count++;
            else count--;
        }
        return candidate;
    }
};