// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public: 
    
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
       int p1=0, p2 =0, p3 =0;
       vector<int> ans;
       //int( m = std::max(A[p1], B[p2], C[p3])
       while(p1<n1)
       {       
            int flag1 = binary_search(B, B + n2, A[p1]);
            int flag2 = binary_search(C, C + n3, A[p1]);
            if(flag1 == 1 && flag2 == 1){
                //int x = ans.size();
                if(!binary_search(ans.begin(), ans.end(), A[p1]))
                    ans.push_back(A[p1]);  
            }
            p1++;
        }
        
       return ans;
    }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
