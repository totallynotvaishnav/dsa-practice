class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int area = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        if (height[left] < height[right])
        {
            area = max(area, height[left] * (right - left));
            left++;
        }
        else
        {
            area = max(area, height[right] * (right - left));
            right--;
        }
    }
  

    return area;
        
    }
};