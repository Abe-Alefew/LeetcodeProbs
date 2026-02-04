class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        all_nums = {}
        for i in range(1,n+1):
            all_nums[i] = 0

        for i in range(n):
            if nums[i] in all_nums:
                all_nums[nums[i]] = 1
        
        output = []
        
        for key,value in all_nums.items():
            if value == 0:
                output.append(key)

        return output

