class Solution {
public:
    int digitWord(int start, string s)
    {
        string word="";
        for(int i=start; i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
            }
            else break;
        }
        return stoi(word);
    }
    bool areNumbersAscending(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                v.push_back(digitWord(i,s));
                string inc= to_string(v[v.size()-1]); //this is use for consucative digit(more then 1 digit number like 12 or 1234) then funtion not call
                i+=inc.size();
            }
        }

        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {

            }
            else return false;
        }

        return true;
    }
};