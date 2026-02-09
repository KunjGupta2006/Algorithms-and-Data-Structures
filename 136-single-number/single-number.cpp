class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int len=nums.size();
        // unordered_map<int,int> m;
        // for(int i=0;i<len;i++){
        //     int curr=nums[i];
        //     m[curr]++;
        // }


        // for(int i=0;i<len;i++){
        //     if(m[nums[i]]==1){
        //         return nums[i];
        //     }
        // }
        int r=0;
        for(int num:nums){
            r^=num;
        }
        return r;
    }
};