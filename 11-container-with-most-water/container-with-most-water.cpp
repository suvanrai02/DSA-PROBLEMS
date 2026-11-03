class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int c;
        int maxi=0;
        int i=0;
        while(i<n){        
                c=(n-i)*min(height[i],height[n]);
                maxi=max(maxi,c);
                if(height[i]<height[n]){
                    i++;
                }
                else{
                    n--;
                }
        }
        return maxi;
    }
};
    