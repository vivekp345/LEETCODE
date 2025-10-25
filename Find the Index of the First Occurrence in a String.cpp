class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // Loop through haystack until remaining chars < needle length
        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            // Compare characters one by one
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            // If all characters matched, return index
            if (j == m)
                return i;
        }

        // No match found
        return -1;
    }
};
