class Solution {
public:

    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1) return {-1};
        if(arr.size()==2 && arr[0]>arr[1])
        {
            arr[0]=arr[1];
            arr[1]=-1;
            return arr;
        }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1])
            {
              swap(arr[i],arr[i-1]);
              arr[i]=-1;
            }
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
            {

            }
            else{
                arr[i+1]=arr[i];
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};