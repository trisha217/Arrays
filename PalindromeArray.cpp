// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
#include<sstream>  
int PalinArray(int a[], int n)
{  
    //add code here.
    int i = 0;
    int remainder;
    for(int i = 0; i<n; i++)
    {
        int x = a[i];
        int reversedNumber = 0;
        while(x != 0) 
        {
            remainder = x%10;
            reversedNumber = reversedNumber*10 + remainder;
            x /= 10;
        }
        //cout<<reversedNumber<<"\n";
        if(reversedNumber != a[i]){
            return 0;
        }
    }
    return 1;
}
