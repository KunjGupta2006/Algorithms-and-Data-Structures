class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int p=0;
        int n=nums.size();
        while(i<n-1){
            if(nums[i]<nums[i+1]){
                i++;
                p++;
            }else{break;}
        }
        if(p==0){return false;}
        int q=0;
        while(i<n-1){
            if(nums[i]>nums[i+1]){
                i++;
                q++;
            }else break;
        }
        if(q==0) return false;

        q=0;
        while(i<n-1){
            if(nums[i]<nums[i+1]){
                i++;
                q++;
            }else break;
        }
        if(q==0 || i<n-1) return false;
        return true;
    }
};