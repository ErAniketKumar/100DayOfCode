class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>qu;
        for(int i=sandwiches.size()-1;i>=0;i--)
        {
            st.push(sandwiches[i]);
        }
        for(int i=0;i<students.size();i++)
        {
            qu.push(students[i]);
        }

        int swaping=0;
        while(!st.empty() && swaping < qu.size())
        {
            if(st.top()== qu.front())
            {
                st.pop();
                qu.pop();
                swaping=0;
            }
            else{
                int temp=qu.front();
                qu.pop();
                qu.push(temp);
                swaping++;
            }
        }
        int ans=st.size();
        return ans;
    }
};