#include <stdio.h>

int main() {

     int count = 0;
     char s[10];

      printf("Input a string: ");
      fgets(s, sizeof(s), stdin);

      for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U') {
          count++;
        }
      }

      printf("Number of vowels in the string: %d", count);

    return 0;
}
