81. Search in Rotated Sorted Array II

class Solution {
public:
    int search(vector<int>& v, int target) {
        int n=v.size();
        int l=0,r=n-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==target)return true;
            if(v[l]==v[mid])
            l++;
            else if(v[l]<=v[mid]){
                if(target>=v[l]&&target<v[mid]) r=mid-1;
                else l=mid+1;
            }
            else{
                if(target>v[mid]&&target<=v[r]) l=mid+1;
                else r=mid-1;
            }
        }
        return false;
    }
};
