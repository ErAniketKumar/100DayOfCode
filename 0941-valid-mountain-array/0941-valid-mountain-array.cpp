class Solution {
public:
    bool checkMount(vector<int>&arr,int end)
    {
        for(int i=1;i<=end;i++)
        {
            if(arr[i]>arr[i-1])
            {

            }
            else return false;
        }
        return true;
    }
    bool validMountainArray(vector<int>& arr) {
        int maxi=*max_element(arr.begin(), arr.end());
        int idxmaxi=-1;
        if(arr.size()<3)
        return false;
        vector<int>helper;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==maxi)
            {
                idxmaxi=i;
            }
        }
        if(idxmaxi==arr.size()-1 || idxmaxi==0) return false;
        for(int i=idxmaxi+1;i<arr.size();i++)
        {
            helper.push_back(arr[i]);
        }
        reverse(helper.begin(), helper.end());
        if(checkMount(arr,idxmaxi))
        {
            if(checkMount(helper, helper.size()-1))
            {
               return true;
            }
            else return false;
        }
        return false;
    }
};