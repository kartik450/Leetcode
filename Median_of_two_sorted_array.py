class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """;
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        #nums1.sort()
        #nums2.sort()
        
        nums1.extend(nums2)
        nums1.sort()
        x=len(nums1)
        if x%2 !=0:
            return nums1[x/2]
        elif(nums1[(x/2)-1]==0 and nums1[x/2]==0):
            return 0.0    
        else:
            return ((nums1[(x/2)-1]+nums1[(x/2)])/2.0)