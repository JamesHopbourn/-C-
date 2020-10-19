#include <stdio.h>

int main(void) {
  char answer = 0;

  printf("Enter Y or N: ");
  scanf(" %c", &answer);

  switch (answer) {
    case 'y':
    case 'Y':
      printf("You responded in the affirmative.");
      break;

    case 'n':
    case 'N':
      printf("You responded in the negative.");
      break;

    default:
      printf("You did not respond correctly...");
      break;
  }
  return 0;
}

// http://www.java2s.com/Tutorial/C/0120__Statement/Twocasesoneaction.htm