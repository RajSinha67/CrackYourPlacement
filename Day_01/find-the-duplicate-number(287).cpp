class Solution {
public:
    int findDuplicate(vector<int>& nums) {

      int i=nums[0],j=nums[0];
        int flag=0;
        while(flag==0)
        {
            i=nums[i];
            j=nums[nums[j]];
            if(i==j)
                flag=1;
            
        }
        
        j=nums[0];
        while(i!=j)
        {
            i=nums[i];
            j=nums[j];
           
        }
        return i;
        
    }
};
