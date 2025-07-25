//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
//   similar to book allocation problem but here large numbers are used so use long long
  bool operation(int arr[],int n,int k,long long sol)
    {
        long long totaltime=0;
        int count=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sol)
            {
                return false;
            }
            if(totaltime+arr[i]>sol)
            {
                count++;
                totaltime=arr[i];
                if(count>k)
                {
                    return false;
                }
            }
            else
            {
                totaltime+=arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
    long long start=0;
    long long end=0;
    for(int i=0;i<n;i++)
    {
        end+=arr[i];
    }
    long long ans=0;
    while(start<=end)
    {
        long long mid=start+(end-start)/2;
        if(operation(arr,n,k,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends