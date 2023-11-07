class Solution {
public:
    int findmaximum(vector<int> &piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i =0; i<n; i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    long long calculated(vector<int> &piles , int hourly){
        long long ans = 0;
        int n = piles.size();
        for(int i =0; i<n ;i++){
            ans = ans + ceil(piles[i]/ (double) hourly);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmaximum(piles);
        while(low <= high){
            int mid = (low + high)/2;
            long long total_hours = calculated(piles,mid);
            if(total_hours <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};