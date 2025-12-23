class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        close = nums[0]
        for i in range(1,len(nums)):
            if abs(nums[i]) < abs(close):
                close = nums[i]
            if abs(nums[i]) == abs(close):
                close = max(nums[i], close)
        
        return close
