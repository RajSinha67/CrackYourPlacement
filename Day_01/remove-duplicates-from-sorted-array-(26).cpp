class Solution {

public:
    
    int removeDuplicates(vector<int>& nums) {
        
        int count = 1;
        for(int i = 0 ; i< nums.size() ;i++){
            if(nums[count-1]!= nums[i]){
                swap(nums[i],nums[count]);
                count++;
            }
        }
        return count;
        
    }
};
