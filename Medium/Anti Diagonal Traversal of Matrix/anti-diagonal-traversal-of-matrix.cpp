//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;
        for(int i =0;i<cols;i++){
            int col = i;
            int row = 0;
            while(col >= 0 && row < rows ){
                ans.push_back(matrix[row][col]);
                col--, row++;
            }
        }
        for(int i = 1;i<rows;i++){
            int col = cols - 1;
            int row = i;
            while(col >= 0 && row < rows){
                ans.push_back(matrix[row][col]);
                col--, row++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends