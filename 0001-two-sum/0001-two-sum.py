class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i in range(len(nums)):
            seen[nums[i]] = i

        for i in range(len(nums)):
            y = target - nums[i]

            if y in seen and seen[y]!= i:
                return [i, seen[y]]

