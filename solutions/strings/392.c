bool isSubsequence(char* s, char* t) {
    int sLen = strlen(s);
    int tLen = strlen(t);
    int i_s = 0;
    
        for (int i_t = 0; i_t < tLen; i_t++) {
           if (t[i_t] == s[i_s]) {
                i_s++;
            }
        }
       if (i_s == sLen) {
            return true;
    }
    return false;
}
