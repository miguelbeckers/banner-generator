#ifndef COMPILED
#define COMPILED

struct TLetter {
  int const height;
  int const width;
  char const *content;
};

struct TFont {
int spacing;  
const struct TLetter A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S,
      T, U, V, W, X, Y, Z, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r,
      s, t, u, v, w, x, y, z, n0, n1, n2, n3, n4, n5, n6, n7, n8, n9,

      dot, colon, coma, semicolon, aphostrophe, quotationMark, questionMark,
      exclamationMark, openParentheses, closeParentheses, openCurlyBrace,
      closeCurlyBrace, openBracket, closeBracket, plus, minus, asterisk, slash,
      equals, at, dollar, percent, ampersand, underline, backslash, circumflex,
      tilde;
};

#endif // COMPILED