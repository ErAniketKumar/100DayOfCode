class Solution {
public:
    int tribonacci(int n) {
    
    vector<int>v{0,1,1};
    if(n<3) return v[n];
	for(int i=3;i<=n;i++)
	{
		int n=v.size()-1;
		v.push_back(v[n]+v[n-1]+v[n-2]);
		v.erase(v.begin(), v.end()-3);
	}
    return v[v.size()-1];
    }
};