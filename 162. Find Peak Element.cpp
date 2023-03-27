class Solution {
public:
    int findPeakElement(vector<int>& v) {
     
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if((mid==l||v[mid]>v[mid-1])&&(mid==r||v[mid]>v[mid+1]))
            return mid;
            else if(v[mid+1]>v[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
       return -1;     
    }
};
