class Solution {
public:
    int trap(vector<int>& height) {
        int hsize=height.size();
        
        vector<int> leftMax(hsize,0);
        vector<int> rightMax(hsize,0);
        leftMax[0]=height[0];
        rightMax[hsize-1]=height[hsize-1];
        for(int i=1;i<hsize-1;i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);
        }
        for(int i=hsize-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);
        }
        int water=0;
        for(int i=0;i<hsize-1;i++){
            if((min(leftMax[i],rightMax[i])-height[i] )>0){
                water+=min(leftMax[i],rightMax[i])-height[i];
            }
        }

        return water;
    }
};