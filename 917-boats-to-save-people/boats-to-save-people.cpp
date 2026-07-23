class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats=0;
        int l=0;
        int h=people.size()-1;
        sort(people.begin(),people.end());

        while(l<=h){
            int cap=0;
                if(cap+people[h]<=limit) cap+=people[h--];
                if(cap+people[l]<=limit) cap+=people[l++];
            boats++;
        }
        return boats;
    }
};