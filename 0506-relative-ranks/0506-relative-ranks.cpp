class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
         vector<int>v(score.begin(), score.end());
         sort(v.begin(), v.end(),greater<int>());

         unordered_map<int, int>m;
         for(int i=0;i<v.size();i++)
         {
             m[v[i]]=i;
         }
         vector<string>s;
         for(int i=0;i<score.size();i++)
         {
             auto it=m.find(score[i]);
             int pos=((*it).second)+1;
             if(pos==1)
             {
                 s.push_back("Gold Medal");
             }
             else if(pos==2)
             {
                 s.push_back("Silver Medal");
             }
             else if(pos==3)
             {
                  s.push_back("Bronze Medal");
             }
             else{
                 s.push_back(to_string(pos));
             }
         }
         return s;
         
    }
};