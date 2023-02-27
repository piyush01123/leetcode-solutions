class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)==0:
            return 0
        if len(nums)==1:
            return nums[0]
        if len(nums)==2:
            return max(nums)
        inc = nums[0]
        exc = 0
        for num in nums[1:]:
            old_inc = inc
            inc = exc + num
            exc = max(old_inc, exc)
            # print(exc, inc)
        return max(exc, inc)