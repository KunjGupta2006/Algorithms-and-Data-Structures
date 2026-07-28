class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        s=0
        h=len(height)-1
        maxi=0
        while(s<h):
            water=min(height[s],height[h])*(h-s)
            maxi=max(maxi,water)
            if(height[s]<height[h]):
                 s+=1
            else:
                 h-=1
        return maxi
        