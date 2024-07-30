//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
     bool operation(int n, int k, vector<int> &stalls,int mid)
     { 
        //  mid agar ans ho sakta toh true ya toh false mid jo aaya us se agar difference 
        //  bada hogyaa ya same then waha pe rakh ke aage ka difference nikalo
        //  difference nikalne ke liye pehele ek ko fix karlo
         int count=1,position=stalls[0];
         for(int i=1;i<n;i++)
         {
             if(stalls[i]-position>=mid)
             {
                 count++;
                 position=stalls[i];
             }
            //  count>k kyu nahi iss doubt ke liye dry run karo 2nd example ko
             if(count==k)
             {
                 return true;
             }
         }
         return false;
     }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        // here imagine karo ki ek number line pe k cows place kar rahe so sorted array hona
        // chahiye matlab binary search lag sakta hai lekin stall ka position sorted bhi hona 
        // chahiye
        sort(stalls.begin(),stalls.end());
        int start=0,end=stalls[n-1]-stalls[0];
        int ans=0;
        while(start<=end)
        {
            // hum yaha pe maximum possible nikal rahe isiliye ans milne ka bad mid+1 ho raha
            int mid=start+(end-start)/2;
            if(operation(n,k,stalls,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
         return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends