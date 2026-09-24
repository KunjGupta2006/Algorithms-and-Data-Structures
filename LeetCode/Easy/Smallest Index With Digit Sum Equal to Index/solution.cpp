bool sumisi(int num,int i){
    string s=to_string(num);
    int mysum=0;
    for(int j=0;j<s.size();j++){
        int n=s[j] - '0';
        mysum+= n;
    }
    if(mysum==i) return true;
    return false;
}
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(sumisi( nums[i],i ) ){return i;}
        }
        return -1;
    }
};