class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxi = INT_MIN;
        
        for(int i = 0;i<n;i++){
            maxi = max(maxi,arr[i]);
            
        }
        
    
    
    
        int mini = INT_MAX;
        
        for(int i = 0;i<n;i++){
            mini = min(mini,arr[i]);
            
        }
         
         
        vector<int> ans;
        
        ans.push_back(mini);
        ans.push_back(maxi);
        
        return ans;
        
        
            
            
        
    }
};