from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        a = {}
        for i in nums:
            try:
                a[i]+=1
            except:
                a[i]=1
        print(a)
        for _,val in a.items():
            if val>1:
                return True
        
a = Solution()
a.containsDuplicate([7,10,5,5,6,6,4,10,5,4,9,4,9,6,5,9,6,3,6])