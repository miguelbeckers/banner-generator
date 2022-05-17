#include <stdio.h>
#include "coolbanner.h"

int main(void) { 
  printBanner("COOL\n", BASIC_SHADOWED, RED, 1);
  printBanner("BNNR\n", BASIC_OUTLINED, BLUE, 0);
 
  return 0;
}