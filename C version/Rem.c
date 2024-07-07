char* removeStars(char* s) {
    int len = strlen(s);  // Calculate initial length once
    
    for (int i = 0; i < len; ++i) {
        if (s[i] == '*') {
            int k = 0, j = i;
            
            // Count consecutive '*'
            while (s[j] == '*') {
                j++;
                k += 2;
            }
            
            int moveFrom = j;
            int moveTo = (j - k > 0) ? j - k : 0;
            int moveLen = strlen(s + moveFrom) + 1;  // Include null terminator

            // Move the remaining string to cover the stars
            memmove(s + moveTo, s + moveFrom, moveLen);
            
            len -= k;  // Adjust length for next iterations
            i = moveTo - 1;  // Set i to the correct position for the next loop iteration
        }
    }
    return s;
}
