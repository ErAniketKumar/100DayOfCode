class Solution {
public:
    string interpret(string command) {
        vector<char>v;
        for(int i=0;i<command.size()-1;i++)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                v.push_back('o');
            }
            else{
                v.push_back(command[i]);
            }
        }
        v.push_back(command[command.size()-1]);
        string word="";
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='('||v[i]==')') continue;
            else{
                word+=v[i];
            }

        }
        
        return word;

    }
};