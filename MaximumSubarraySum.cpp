class Solution {
public:

    int subArrSum(int index, vector<int>& arr, int &ans){
        int n = arr.size();
        if(index == 0){
            ans = arr[0];
            return ans;
        } 

        int indexMAX = max(arr[index], arr[index]+subArrSum(index-1, arr, ans));

        ans = max(ans, indexMAX);
        return indexMAX;
    }


    // int subArrSum(int index, vector<int>& arr){
    //     int n = arr.size();
    //     vector<int> dp(n,0);

    //     dp[0] = arr[0];

    //     for(int i=1; i<=index; i++){
    //         dp[i] = max(arr[i], arr[i]+dp[i-1]);
    //     }

    //     int ans = INT_MIN;
    //     for(int i=0; i<n; i++){
    //         ans = max(ans, dp[i]);
    //     }
    //     return ans;
    // }

    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int ans = -1e9;
        int answer = subArrSum(n-1, arr, ans);
        return ans;
    }
};
