pair<int,int> twoSum(vector<int>& arr, int n, int target) {

    // Write your code here

    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}