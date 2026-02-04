class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        dup = {}
        nums.sort()
        
        for i in range(len(nums)):
            if nums[i] not in dup:
                dup[nums[i]] = 0
            dup[nums[i]] +=1


        output = []
        for key,value in dup.items():
            if value > 1:
                output.append(key)
        
        return output

        