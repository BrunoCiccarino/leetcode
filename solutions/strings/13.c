#include <string.h>

typedef struct {
    char roman;
    int value;
} RomanMap;

int getRomanValue(char c) {
    RomanMap romanTable[] = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < sizeof(romanTable) / sizeof(romanTable[0]); i++) {
        if (romanTable[i].roman == c) {
            return romanTable[i].value;
        }
    }
    return 0; 
}

int romanToInt(char* s) {
    int ans = 0;

    for (int i = 0; i < strlen(s); i++) {
        int currentValue = getRomanValue(s[i]);
        int nextValue = 0;

        if (i + 1 < strlen(s)) {
            nextValue = getRomanValue(s[i + 1]);
        }
    
        if (currentValue < nextValue) {
            ans -= currentValue;
        } else {
            ans += currentValue;
        }
    }

    return ans;
}
