// bool isNotDisval( int a1, vector<int>& arr2,int& d ){
//     for(int i=0;i<arr2.size();i++){
//         if( abs(a1-arr2[i]) <=d ) return false;
//     }
//     return true;
// }


bool isNotDisval(int a1, vector<int>& arr2, int& d ){
int l=0;
int h=arr2.size()-1;
while(l<=h){
    int mid= l+ (h-l)/2;
    if(abs( a1-arr2[mid] ) <=d ) return false;
    else if( a1-arr2[mid] < 0 ) h = mid - 1;
    else l = mid + 1;
}
return true;
}

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++ ){
            if(isNotDisval( arr1[i],arr2 ,d )) c++;
        }
        return c;
    }
};
