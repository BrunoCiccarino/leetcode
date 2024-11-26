void reverseString(char* s, int sSize) {
   int size = sSize;
   int right = size - 1;

   for (int i = 0; i < size / 2; i++) {
    char temp = s[i];
    s[i] = s[size - 1 - i];
    s[right - i] = temp;
   } 
}