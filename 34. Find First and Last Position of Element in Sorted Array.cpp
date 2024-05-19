class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,m;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m] == target){
                l=h=m;
                while(l>0){
                    if(nums[l-1] != target)
                        break;
                    else
                        l--;
                }
                while(h<nums.size()-1){
                    if(nums[h+1] != target)
                        break;
                    else
                        h++;
                }
                return {l,h};
            }
            else if(nums[m] < target){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return {-1,-1};
    }
};