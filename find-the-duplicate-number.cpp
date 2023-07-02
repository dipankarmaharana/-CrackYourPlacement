class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num: nums){
            mp[num]++;
        }
        unordered_map<int,int> :: iterator it;
        for( it=mp.begin();it!=mp.end();it++){
            if(it->second>1) return it->first;
        }
        return 0;
    }
};
