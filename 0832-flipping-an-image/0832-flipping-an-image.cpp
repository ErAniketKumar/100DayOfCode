class Solution {
public:
    void revertHelper(vector<int>&v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
            }
            else v[i]=0;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i=0;i<image.size();i++)
        {
            vector<int>helper;
            for(int j=0;j<image[i].size();j++)
            {
               helper.push_back(image[i][j]);
            }
            revertHelper(helper);
            reverse(helper.begin(), helper.end());
            ans.push_back(helper);
            helper.clear();
        }

        return ans;
    }
};