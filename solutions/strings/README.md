## Solutions 🚀

|# Numbers| Problems                                                |
|------|:---------------------------------------------------------:|
| 01  |  [Roman Numeral to Integer Conversion](#1-roman-numeral-to-integer-conversion)|

#### 1. Roman Numeral to Integer Conversion
So, here's a breakdown of what we did to convert Roman numerals to integers:

#### *Time Complexity*
Time Complexity:* O(n)* where n is the length of the input string s.

- The outer loop runs n times, one for each character in the string.
- The inner loop, which searches for the Roman character in the romanTable, runs a constant number of times (7 iterations at most).
- Overall, the time complexity is O(n) because the constant time for the inner loop does not affect the overall complexity.
- Space Complexity: O(1) because we’re using a fixed amount of extra space (the romanTable array), regardless of the size of the input string.

#### **The Problem**
We were given a Roman numeral string (like "III" or "IX") and needed to convert it into an integer (e.g., 3 or 9). The tricky part? Some numerals are subtractive, like "IV" (which is 4) and "IX" (which is 9), so we needed to account for that!

#### **Steps We Took**
Defining the Roman Map
We started by creating a RomanMap struct to hold each Roman numeral and its corresponding integer value. This lets us easily look up values when processing the string.
```c   
   typedef struct {
       char roman;
       int value;
   } RomanMap;
```

#### **Getting Roman Values**
We wrote a getRomanValue() function that takes a Roman numeral character (char c) and returns the integer value. This function checks the romanTable array to find the correct value for each character.

#### Processing the Input String
We loop through the input string character by character. For each character, we get its value using `getRomanValue()`. We then compare it to the next character (if it exists) to determine if we should add or subtract the value:

If the current value is less than the next value (e.g., "IV" or "IX"), we subtract it.
Otherwise, we add it.
Handling Edge Cases
We made sure to handle cases like the last character in the string, where there's no "next character" to compare with, so we just add it.

#### The Result
We now have a clean function, romanToInt(), that loops through the Roman numeral string, processes each character, and returns the corresponding integer.

```c
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
```