class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        d = defaultdict(int)
        for i in nums:
            d[i] =1
        for i in range(1,2**31):
            if(d[i] == 0):
                return i