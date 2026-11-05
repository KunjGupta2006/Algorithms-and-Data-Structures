bool isNotDisval( int a1, vector<int>& arr2,int& d ){
    for(int i=0;i<arr2.size();i++){
        if( abs(a1-arr2[i]) <=d ) return false;
    }
    return true;
}

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c=0;
        for(int i=0;i<arr1.size();i++ ){
            if(isNotDisval( arr1[i],arr2 ,d )) c++;
        }
        return c;
    }
};