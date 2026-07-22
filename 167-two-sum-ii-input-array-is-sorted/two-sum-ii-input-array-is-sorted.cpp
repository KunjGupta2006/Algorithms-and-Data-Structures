class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0,h=numbers.size()-1;
        while(s<h){
            if(numbers[s]+numbers[h]==target){
                return {s+1,h+1};
            }else if(numbers[s]+numbers[h]>target){h--;}
            else s++;
        }
        return {};
    }
};