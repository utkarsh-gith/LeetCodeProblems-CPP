class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red = 0, white = 0;
        for(int i=0; i<n ; i++){
            if(nums[i] == 0)
                red ++;
            if(nums[i] == 1)
                white ++;
        }
        int i=0;
        while(i < red){
            nums[i++] = 0;
        }
        while(i < red + white){
            nums[i++] = 1;
        }
        while(i < n){
            nums[i++] = 2;
        }
    }
};