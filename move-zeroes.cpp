class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int o=0,e=o+1;
        int c=count(nums.begin(),nums.end(),0);
        while(e<nums.size() && c>0){
         if(nums[e]!=0 && nums[o]==0){
            swap(nums[o],nums[e]);
            o++;
            e++;
         }else if(nums[e]==0 && nums[o]==0) e++; 
            else {
                e++;
                o++;
            }
        }
    }
};
