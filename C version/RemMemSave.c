char* removeStars(char* s) {
    int i = 0;  // Index for the new position of characters

    for (char* ps = s; *ps; ++ps)  // Iterate through the string
        if (*ps == '*' && i)
                i--;  // Backtrack to remove the previous character
        else
            s[i++] = *ps;  // Copy non-star characters
    
    s[i] = '\0';  // Null-terminate the modified string
    return s;
}
