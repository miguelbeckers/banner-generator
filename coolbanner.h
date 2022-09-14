#include <stdio.h>
#include <string.h>

#include "fonts/basic-linear.h"
#include "fonts/basic-outlined.h"
#include "fonts/basic-regular.h"
#include "fonts/basic-shadowed.h"

#define WHITE "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define LIGHT_RED "\e[1;91m"
#define LIGHT_GREEN "\e[1;92m"
#define LIGHT_YELLOW "\e[1;93m"
#define LIGHT_BLUE "\e[0;94m"
#define LIGHT_MAGENTA "\e[1;95m"
#define LIGHT_CYAN "\e[1;96m"

void moveCursorUp(int n) { printf("\033[%dA", n); }
void moveCursorDown(int n) { printf("\033[%dB", n); }
void moveCursorRight(int n) { printf("\033[%dC", n); }
void moveCursorLeft(int n) { printf("\033[%dD", n); }
void saveCursorPosition() { printf("\033[s"); }
void restoreCursorPosition() { printf("\033[u"); }

void printLetter(struct Letter letter) {
  int count = 0;
  saveCursorPosition();

  for (int i = 0; i < letter.height; i++) {
    while (letter.content[count] != '\n') {
      if (letter.content[count] == ' ') {
        moveCursorRight(1);
      } else {
        printf("%c", letter.content[count]);
      }
      count++;
    }
    moveCursorDown(1);
    moveCursorLeft(letter.width);
    count++;
  }
  restoreCursorPosition();
  moveCursorRight(letter.width);
}

void printBanner(char *text, struct Font font, char *color) {
  printf("%s", color);

  for (int i = 0; i < strlen(text); i++) {
    if (font.spacing > 0)
      moveCursorRight(font.spacing);

    switch (text[i]) {
    case 32:
      printLetter(font.c032);
      break;
    case 33:
      printLetter(font.c033);
      break;
    case 34:
      printLetter(font.c034);
      break;
    case 35:
      printLetter(font.c035);
      break;
    case 36:
      printLetter(font.c036);
      break;
    case 37:
      printLetter(font.c037);
      break;
    case 38:
      printLetter(font.c038);
      break;
    case 39:
      printLetter(font.c039);
      break;
    case 40:
      printLetter(font.c040);
      break;
    case 41:
      printLetter(font.c041);
      break;
    case 42:
      printLetter(font.c042);
      break;
    case 43:
      printLetter(font.c043);
      break;
    case 44:
      printLetter(font.c044);
      break;
    case 45:
      printLetter(font.c045);
      break;
    case 46:
      printLetter(font.c046);
      break;
    case 47:
      printLetter(font.c047);
      break;
    case 48:
      printLetter(font.c048);
      break;
    case 49:
      printLetter(font.c049);
      break;
    case 50:
      printLetter(font.c050);
      break;
    case 51:
      printLetter(font.c051);
      break;
    case 52:
      printLetter(font.c052);
      break;
    case 53:
      printLetter(font.c053);
      break;
    case 54:
      printLetter(font.c054);
      break;
    case 55:
      printLetter(font.c055);
      break;
    case 56:
      printLetter(font.c056);
      break;
    case 57:
      printLetter(font.c057);
      break;
    case 58:
      printLetter(font.c058);
      break;
    case 59:
      printLetter(font.c059);
      break;
    case 60:
      printLetter(font.c060);
      break;
    case 61:
      printLetter(font.c061);
      break;
    case 62:
      printLetter(font.c062);
      break;
    case 63:
      printLetter(font.c063);
      break;
    case 64:
      printLetter(font.c064);
      break;
    case 65:
      printLetter(font.c065);
      break;
    case 66:
      printLetter(font.c066);
      break;
    case 67:
      printLetter(font.c067);
      break;
    case 68:
      printLetter(font.c068);
      break;
    case 69:
      printLetter(font.c069);
      break;
    case 70:
      printLetter(font.c070);
      break;
    case 71:
      printLetter(font.c071);
      break;
    case 72:
      printLetter(font.c072);
      break;
    case 73:
      printLetter(font.c073);
      break;
    case 74:
      printLetter(font.c074);
      break;
    case 75:
      printLetter(font.c075);
      break;
    case 76:
      printLetter(font.c076);
      break;
    case 77:
      printLetter(font.c077);
      break;
    case 78:
      printLetter(font.c078);
      break;
    case 79:
      printLetter(font.c079);
      break;
    case 80:
      printLetter(font.c080);
      break;
    case 81:
      printLetter(font.c081);
      break;
    case 82:
      printLetter(font.c082);
      break;
    case 83:
      printLetter(font.c083);
      break;
    case 84:
      printLetter(font.c084);
      break;
    case 85:
      printLetter(font.c085);
      break;
    case 86:
      printLetter(font.c086);
      break;
    case 87:
      printLetter(font.c087);
      break;
    case 88:
      printLetter(font.c088);
      break;
    case 89:
      printLetter(font.c089);
      break;
    case 90:
      printLetter(font.c090);
      break;
    case 91:
      printLetter(font.c092);
      break;
    case 92:
      printLetter(font.c092);
      break;
    case 93:
      printLetter(font.c093);
      break;
    case 94:
      printLetter(font.c094);
      break;
    case 95:
      printLetter(font.c095);
      break;
    case 96:
      printLetter(font.c096);
      break;
    case 97:
      printLetter(font.c097);
      break;
    case 98:
      printLetter(font.c098);
      break;
    case 99:
      printLetter(font.c099);
      break;
    case 100:
      printLetter(font.c100);
      break;
    case 101:
      printLetter(font.c101);
      break;
    case 102:
      printLetter(font.c102);
      break;
    case 103:
      printLetter(font.c103);
      break;
    case 104:
      printLetter(font.c104);
      break;
    case 105:
      printLetter(font.c105);
      break;
    case 106:
      printLetter(font.c106);
      break;
    case 107:
      printLetter(font.c107);
      break;
    case 108:
      printLetter(font.c108);
      break;
    case 109:
      printLetter(font.c109);
      break;
    case 110:
      printLetter(font.c110);
      break;
    case 111:
      printLetter(font.c111);
      break;
    case 112:
      printLetter(font.c112);
      break;
    case 113:
      printLetter(font.c113);
      break;
    case 114:
      printLetter(font.c114);
      break;
    case 115:
      printLetter(font.c115);
      break;
    case 116:
      printLetter(font.c116);
      break;
    case 117:
      printLetter(font.c117);
      break;
    case 118:
      printLetter(font.c118);
      break;
    case 119:
      printLetter(font.c119);
      break;
    case 120:
      printLetter(font.c120);
      break;
    case 121:
      printLetter(font.c121);
      break;
    case 122:
      printLetter(font.c122);
      break;
    case 123:
      printLetter(font.c123);
      break;
    case 124:
      printLetter(font.c124);
      break;
    case 125:
      printLetter(font.c125);
      break;
    case 126:
      printLetter(font.c126);
      break;
    case '\n':
      moveCursorDown(font.c032.height);
      printf("\n");
      break;
    default:
      printf("%c", text[i]);
      break;
    }
  }

  printf("%s", WHITE);
}