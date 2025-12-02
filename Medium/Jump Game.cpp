//Author : https://leetcode.com/u/fmfuad/
//Title : Jump Game
//Submission id : 1087066851
//Problem url : https://leetcode.com/problems/jump-game/
//Submission url : https://leetcode.com/submissions/detail/1087066851/


class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        bool zero=false;
        if(nums.size()==1 || (nums[0]>0 && nums.size()==2))
            return true;
        else if(nums[0]==0)
            return false;
        int sum=0, dis=0;
        for(int i=nums.size()-2; i>=0; i--)
        {
            int sum=0;
            int dis=0;
            if(nums[i]==0)
            {
                zero=true;
                int pos=i;
                while(i>=0)
                {
                    
                    i--;dis++;
                    if(nums[i]>dis)
                    {
                        if(i==1|| i==0 || nums[0]==i)
                            return true;
                        else
                        {
                            dis=0;sum=0;
                            zero=false;
                            break;
                        }
                        
                    }
                    else if(i==0)
                        return false;
                }
                
            }
        }
        if(!zero)
            return true;
        return false;
    }
};
