class Solution {
    public int maxProduct(int[] nums) {
        int r = nums[0];
        int imin = r;
        int imax = r;
        for(int i=1 ;i<nums.length; i++){
            if(nums[i] < 0){
                int temp = imax;
                imax = imin;
                imin = temp;
            }
            imin = Math.min(nums[i], nums[i] * imin);
            imax = Math.max(nums[i], nums[i] * imax);
            r = Math.max(r,imax);
        }
        return r;
    }
}
