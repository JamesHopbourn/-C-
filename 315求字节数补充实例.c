#include <stdio.h>
int main( ) {
  printf("# C Data Types\n");
  printf("## Integer Types\n");
  printf("- Size of `char`:              %2ld bytes (%ld bits)\n", sizeof(char),
         sizeof(char) * 8);
  printf("- Size of `unsigned char`:     %2ld bytes (%ld bits)\n",
         sizeof(unsigned char), sizeof(unsigned char) * 8);
  printf("- Size of `signed char`:       %2ld bytes (%ld bits)\n",
         sizeof(signed char), sizeof(signed char) * 8);
  printf("- Size of `short int`:         %2ld bytes (%ld bits)\n",
         sizeof(short int), sizeof(short int) * 8);
  printf("- Size of `short`:             %2ld bytes (%ld bits)\n",
         sizeof(short), sizeof(short) * 8);
  printf("- Size of `int`:               %2ld bytes (%ld bits)\n", sizeof(int),
         sizeof(int) * 8);
  printf("- Size of `unsigned int`:      %2ld bytes (%ld bits)\n",
         sizeof(unsigned int), sizeof(unsigned int) * 8);
  printf("- Size of `unsigned`:          %2ld bytes (%ld bits)\n",
         sizeof(unsigned), sizeof(unsigned) * 8);
  printf("- Size of `long int`:          %2ld bytes (%ld bits)\n",
         sizeof(long int), sizeof(long int) * 8);
  printf("- Size of `long`:              %2ld bytes (%ld bits)\n", sizeof(long),
         sizeof(long) * 8);
  printf("- Size of `unsigned long int`: %2ld bytes (%ld bits)\n",
         sizeof(unsigned long int), sizeof(unsigned long int) * 8);
  printf("- Size of `unsigned long`:     %2ld bytes (%ld bits)\n",
         sizeof(unsigned long), sizeof(unsigned long) * 8);
  printf("\n");
  printf(
      "Note that the following are equivalent -- the first is a shorthand "
      "for the second:\n");
  printf("\n");
  printf("- `short` and `short int`\n");
  printf("- `unsigned` and `unsigned int`\n");
  printf("- `long` and `long int`\n");
  printf("- `unsigned long` and `unsigned long int`\n");
  printf("\n");
  printf("## Floating-Point Types\n");
  printf("- Size of `float`:       %2ld bytes (%ld bits)\n", sizeof(float),
         sizeof(float) * 8);
  printf("- Size of `double`:      %2ld bytes (%ld bits)\n", sizeof(double),
         sizeof(double) * 8);
  printf("- Size of `long double`: %2ld bytes (%ld bits)\n",
         sizeof(long double), sizeof(long double) * 8);
  return 0;
}