//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int>v;
        int n=arr.size();
        deque<int> dq;
    // process first k elements
    for (int i = 0; i < k; i++)
    {
        int ele = arr[i];
        if (ele < 0)
            dq.push_back(i);
    }
    // print ans

    // process remaining window
    //  ->removal and addition
    for (int i = k; i < n; i++)
    {
        if (dq.empty())
           v.push_back(0);  
           else
        {
            v.push_back(arr[dq.front()]);
        }
        // purani window ka ans->
        // cout << arr[dq.front()] << " ";
        // removal
        // out of range index ko q mai se remove krdo
// we are removing the index which have neg int for which range check is happening
        if (!dq.empty() && i - dq.front() >= k)
            dq.pop_front();

        // addition
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // last window ka alag se process kro
   if (dq.empty())
           v.push_back(0);
            else
        {
            v.push_back(arr[dq.front()]);
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends