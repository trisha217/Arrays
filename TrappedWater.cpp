// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int height[], int n){
        if(n<=2){
            return 0;
        }
        long long int maxleft = height[0];
        long long int maxright = height[n-1];
        long long int trappedwater = 0;
        long long int left = 1;
        long long int right = n-2;
        while(left<=right){
            if(maxleft<maxright){
                if(height[left]>=maxleft){
                    maxleft = height[left];
                }
                else{
                    trappedwater+= maxleft - height[left];
                }
                left+=1;
            }
            else{
                if(height[right]>=maxright){
                    maxright = height[right];
                }
                else{
                    trappedwater+= maxright - height[right];
                }
                right-=1;
            }
        }
        return trappedwater;
        
        // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
