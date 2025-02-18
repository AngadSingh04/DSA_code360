#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
	// Write your code here.
	vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++){
            if(i > 0 && arr[i]==arr[i-1]){
                continue;
            }
            int j = i+1;
            int k1 = arr.size()-1;

            while(j < k1){
                if(arr[i]+arr[j]+arr[k1] == k){
                    ans.push_back({arr[i],arr[j],arr[k1]});
                    while(j < k1 && arr[j] == arr[j+1]){
                        j++;
                    }
                    while(j < k1 && arr[k1] == arr[k1-1]){
                        k1--;
                    }
                    j++;
                    k1--;
                }else if(arr[i]+arr[j]+arr[k1] < k){
                    j++;
                }else{
                    k1--;
                }
            }
        }
        return ans;
}