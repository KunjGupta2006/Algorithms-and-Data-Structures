class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats=0;
        int l=0;
        int h=people.size()-1;
        sort(people.begin(),people.end());

        while(l<=h){

            if(people[l]+people[h]<=limit) l++;
            boats++;
            h--;
        }
        return boats;
    }
};