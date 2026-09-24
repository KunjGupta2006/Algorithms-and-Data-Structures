class Solution {
public:
    void merge( vector<int>&nums, int l,int mid,int h ){
        int n1=mid-l+1;
        int n2=h-mid;
        vector<int> l1(n1),l2(n2);
        //copy element to temp vectors
        for(int i=0;i<n1;i++){
            l1[i]=nums[l+i];
        }
        for(int i=0;i<n2;i++){
            l2[i]=nums[mid+1+i];
        }

        int i=0,j=0,k=l;
        //now merge
        while(i<n1 && j<n2){
            if( l1[i]<l2[j] ){
                nums[k]=l1[i];
                k++;i++;
            }else {
                nums[k]=l2[j];
                j++;k++;
            }
        }
        while(i<n1){
            nums[k++]=l1[i++];
        }
        while(j<n2){
            nums[k++]=l2[j++];
        }
        return;
    }
    void helper(vector<int>& nums,int l,int h){
        if(l>=h){ return; }
        int mid=l+(h-l)/2;
        helper(nums,l,mid);
        helper (nums,mid+1,h);
        merge(nums,l,mid,h);
        return;
    }

    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;

        helper(nums,l,h);
        return nums;
    }
};