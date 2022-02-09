class Solution {
public:
    void merge(std::vector<int>& nums1,  int m, std::vector<int>& nums2,  int n) {
        int i = m - 1,
            j = n - 1,
            k = n + m-1;

        while (j>=0 && i>=0)
        {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            }
            else { 
                nums1[k--] = nums2[j--];
            }
        }

        while (i >= 0) {
            nums1[k--] = nums1[i--];
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

    }
        
};