#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool rotateString(char* s, char* goal) {
    size_t lenS = strlen(s);
    size_t lenGoal = strlen(goal);

    if (lenS != lenGoal) {
        return false;
    }
    
    char doubledS[2 * lenS + 1]; 
    strcpy(doubledS, s);
    strcat(doubledS, s);
    
    return strstr(doubledS, goal) != NULL;
}
