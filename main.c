#include "coolbanner.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const int STRING_SIZE = 30;
static const int LINE_SIZE = 10;

void pauseSystem();
void clearBuffer();
void formatText();

int main(void) {
  printBanner("COOL\n", BASIC_SHADOWED, RED);
  printBanner("BANNER\n", BASIC_OUTLINED, BLUE);

  pauseSystem();

  while (1) {
    struct TFont *font;
    char *color;
    char text[STRING_SIZE];
    char formated[STRING_SIZE + STRING_SIZE / LINE_SIZE];
    int option = 0;

    printf("Insert your text: ");
    fgets(text, sizeof(text), stdin);
    formatText(text, formated);

    do {
      printf("\n1 - Basic_outlined");
      printf("\n2 - Basic_shadowed");
      printf("\n3 - Basic_linear");
      printf("\n4 - Basic_regular\n");
      printf("\nChoose a font: ");

      if (scanf("%d", &option) != 1)
        clearBuffer();

      if (option < 1 || option > 4)
        printf("\n%sInvalid option%s\n", RED, WHITE);

    } while (option < 1 || option > 4);

    switch (option) {
    case 1:
      font = &BASIC_OUTLINED;
      break;
    case 2:
      font = &BASIC_SHADOWED;
      break;
    case 3:
      font = &BASIC_LINEAR;
      break;
    case 4:
      font = &BASIC_REGULAR;
      break;
    }

    option = 0;

    do {
      printf("\n1 - Red");
      printf("\n2 - Blue");
      printf("\n3 - Green");
      printf("\n4 - Yellow");
      printf("\n5 - Magenta");
      printf("\n6 - Cyan");
      printf("\n7 - No color\n");
      printf("\nChoose a color: ");

      if (scanf("%d", &option) != 1)
        clearBuffer();

      if (option < 1 || option > 7)
        printf("\n%sInvalid option%s\n", RED, WHITE);

    } while (option < 1 || option > 7);

    switch (option) {
    case 1:
      color = RED;
      break;
    case 2:
      color = BLUE;
      break;
    case 3:
      color = GREEN;
      break;
    case 4:
      color = YELLOW;
      break;
    case 5:
      color = MAGENTA;
      break;
    case 6:
      color = CYAN;
      break;
    case 7:
      color = WHITE;
      break;
    }

    system("clear");
    printf("\nHere is your banner!\n\n");
    printBanner(formated, *font, color);

    clearBuffer();
    pauseSystem();
  }

  return 0;
}

void formatText(char text[], char formated[]) {
  int count = 0;

  for (int i = 0; i < strlen(text); i++) {
    formated[count] = text[i];
    count++;

    if (i % 10 == 0 && i != 0) {
      formated[count] = '\n';
      count++;
    }
  }

  formated[count] = '\0';
}

void pauseSystem() {
  printf("\nPress enter to continue... ");
  getchar();
  system("clear");
}

void clearBuffer() {
  int ch;
  do {
    ch = fgetc(stdin);
  } while (ch != EOF && ch != '\n');
}