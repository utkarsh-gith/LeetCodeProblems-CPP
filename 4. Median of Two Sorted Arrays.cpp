class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k,m=nums1.size(),n=nums2.size();
        vector<int> nums;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            }
            else{
                nums.push_back(nums2[j]);
                j++;
            }
        }
        if(i<m){
            while(i<m){
                nums.push_back(nums1[i]);
                i++;
            }
        }
        else{
            while(j<n){
                nums.push_back(nums2[j]);
                j++;
            }
        }
        k=nums.size();
        if(k%2==0){
            double l = double(nums[(k-1)/2]+nums[(k-1)/2 + 1])/2;
            return l;
        }
        return nums[(k-1)/2];
    }
};