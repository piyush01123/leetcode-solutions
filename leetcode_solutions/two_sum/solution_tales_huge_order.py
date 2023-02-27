# class Solution:
#     def twoSum(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: List[int]
#         """
#         comps = set()
#         comp_idx = {}
#         for i, num in enumerate(nums):
#             # print(i)
#             if num in comps:
#                 return [comp_idx[num], i]
#             else:
#                 comps.add(target-num)
#                 comp_idx[target-num] = i
#         return False

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        comps = {}
        for i, num in enumerate(nums):
            if num in comps:
                return [comps[num], i]
            comps[target-num] = i
        