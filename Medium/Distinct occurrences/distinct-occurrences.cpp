//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    
    int findAns(string& s, string& t, int i, int j, vector<vector<int>>& dp){
        if(j<0) return 1;
        if(i<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i] == t[j])
            return dp[i][j] = (findAns(s,t,i-1,j,dp)%1000000007 + findAns(s,t,i-1,j-1,dp)%1000000007)%1000000007;
        return dp[i][j] = findAns(s,t,i-1,j,dp)%1000000007;
    }
    
    int subsequenceCount(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n, vector<int> (m,-1));
      int ans = findAns(s,t,n - 1,m -1, dp);
      return ans;
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends