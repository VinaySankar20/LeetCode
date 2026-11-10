int lengthOfLongestSubstring(char* s) {
    int last[256],start = 0,maxLen = 0,len;

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (last[s[i]] >= start)
            start = last[s[i]] + 1;

        last[s[i]] = i;

        len = i - start + 1;

        if (len > maxLen)
            maxLen = len;
    }

    return maxLen;

}