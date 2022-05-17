#include <stdio.h>
#include <string.h>

#include "fonts/basic-linear.h"
#include "fonts/basic-outlined.h"
#include "fonts/basic-regular.h"
#include "fonts/basic-shadowed.h"

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
#define NO_COLOR "\x1b[0m"

void moveCursorUp(int n) { printf("\033[%dA", n); }
void moveCursorDown(int n) { printf("\033[%dB", n); }
void moveCursorRight(int n) { printf("\033[%dC", n); }
void moveCursorLeft(int n) { printf("\033[%dD", n); }
void saveCursorPosition() { printf("\033[s"); }
void restoreCursorPosition() { printf("\033[u"); }

void printLetter(struct TLetter letter) {
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

void printBanner(char *text, struct TFont font, char *color) {
  printf("%s", color);

  for (int i = 0; i < strlen(text); i++) {
    if (font.spacing > 0)
      moveCursorRight(font.spacing);

    switch (text[i]) {
    case 'a':
      printLetter(font.a);
      break;
    case 'b':
      printLetter(font.b);
      break;
    case 'c':
      printLetter(font.c);
      break;
    case 'd':
      printLetter(font.d);
      break;
    case 'e':
      printLetter(font.e);
      break;
    case 'f':
      printLetter(font.f);
      break;
    case 'g':
      printLetter(font.g);
      break;
    case 'h':
      printLetter(font.h);
      break;
    case 'i':
      printLetter(font.i);
      break;
    case 'j':
      printLetter(font.j);
      break;
    case 'k':
      printLetter(font.k);
      break;
    case 'l':
      printLetter(font.l);
      break;
    case 'm':
      printLetter(font.m);
      break;
    case 'n':
      printLetter(font.n);
      break;
    case 'o':
      printLetter(font.o);
      break;
    case 'p':
      printLetter(font.p);
      break;
    case 'q':
      printLetter(font.q);
      break;
    case 'r':
      printLetter(font.r);
      break;
    case 's':
      printLetter(font.s);
      break;
    case 't':
      printLetter(font.t);
      break;
    case 'u':
      printLetter(font.u);
      break;
    case 'v':
      printLetter(font.v);
      break;
    case 'w':
      printLetter(font.w);
      break;
    case 'x':
      printLetter(font.x);
      break;
    case 'y':
      printLetter(font.y);
      break;
    case 'z':
      printLetter(font.z);
      break;
    case 'A':
      printLetter(font.A);
      break;
    case 'B':
      printLetter(font.B);
      break;
    case 'C':
      printLetter(font.C);
      break;
    case 'D':
      printLetter(font.D);
      break;
    case 'E':
      printLetter(font.E);
      break;
    case 'F':
      printLetter(font.F);
      break;
    case 'G':
      printLetter(font.G);
      break;
    case 'H':
      printLetter(font.H);
      break;
    case 'I':
      printLetter(font.I);
      break;
    case 'J':
      printLetter(font.J);
      break;
    case 'K':
      printLetter(font.K);
      break;
    case 'L':
      printLetter(font.L);
      break;
    case 'M':
      printLetter(font.M);
      break;
    case 'N':
      printLetter(font.N);
      break;
    case 'O':
      printLetter(font.O);
      break;
    case 'P':
      printLetter(font.P);
      break;
    case 'Q':
      printLetter(font.Q);
      break;
    case 'R':
      printLetter(font.R);
      break;
    case 'S':
      printLetter(font.S);
      break;
    case 'T':
      printLetter(font.T);
      break;
    case 'U':
      printLetter(font.U);
      break;
    case 'V':
      printLetter(font.V);
      break;
    case 'W':
      printLetter(font.W);
      break;
    case 'X':
      printLetter(font.X);
      break;
    case 'Y':
      printLetter(font.Y);
      break;
    case 'Z':
      printLetter(font.Z);
      break;
    case '0':
      printLetter(font.n0);
      break;
    case '1':
      printLetter(font.n1);
      break;
    case '2':
      printLetter(font.n2);
      break;
    case '3':
      printLetter(font.n3);
      break;
    case '4':
      printLetter(font.n4);
      break;
    case '5':
      printLetter(font.n5);
      break;
    case '6':
      printLetter(font.n6);
      break;
    case '7':
      printLetter(font.n7);
      break;
    case '8':
      printLetter(font.n8);
      break;
    case '9':
      printLetter(font.n9);
      break;
    case '.':
      printLetter(font.dot);
      break;
    case ':':
      printLetter(font.colon);
      break;
    case ',':
      printLetter(font.coma);
      break;
    case ';':
      printLetter(font.semicolon);
      break;
    case '\'':
      printLetter(font.aphostrophe);
      break;
    case '"':
      printLetter(font.quotationMark);
      break;
    case '?':
      printLetter(font.questionMark);
      break;
    case '!':
      printLetter(font.exclamationMark);
      break;
    case '(':
      printLetter(font.openParentheses);
      break;
    case ')':
      printLetter(font.closeParentheses);
      break;
    case '{':
      printLetter(font.openCurlyBrace);
      break;
    case '}':
      printLetter(font.closeCurlyBrace);
      break;
    case '[':
      printLetter(font.openBracket);
      break;
    case ']':
      printLetter(font.closeBracket);
      break;
    case '+':
      printLetter(font.plus);
      break;
    case '-':
      printLetter(font.minus);
      break;
    case '*':
      printLetter(font.asterisk);
      break;
    case '/':
      printLetter(font.slash);
      break;
    case '=':
      printLetter(font.equals);
      break;
    case '@':
      printLetter(font.at);
      break;
    case '$':
      printLetter(font.dollar);
      break;
    case '%':
      printLetter(font.percent);
      break;
    case '&':
      printLetter(font.ampersand);
      break;
    case '_':
      printLetter(font.underline);
      break;
    case '\\':
      printLetter(font.backslash);
      break;
    case '^':
      printLetter(font.circumflex);
      break;
    case '~':
      printLetter(font.tilde);
      break;     
    case ' ':
      moveCursorRight(2);
      break;
    case '\n':
      moveCursorDown(font.A.height);
      printf("\n");
      break;
    default:
      printf("%c", text[i]);
      break;
    }
  }

  printf("%s", NO_COLOR);
}