class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp(n);

        for(int i = 0; i < n; i++){
            temp[(i+k) % n]= nums[i];
        }

        nums = temp; 
        
    }
};