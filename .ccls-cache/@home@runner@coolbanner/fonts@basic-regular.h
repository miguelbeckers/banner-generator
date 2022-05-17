#include "../types.h"

static const struct TFont BASIC_REGULAR = {

    .A = {.height = 5,
          .width = 6,
          .content = " ████ \n"
                     "██  ██\n"
                     "██████\n"
                     "██  ██\n"
                     "██  ██\n"},
    .B = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██  ██\n"
                     "█████ \n"
                     "██  ██\n"
                     "██████\n"},
    .C = {.height = 5,
          .width = 5,
          .content = "█████\n"
                     "██   \n"
                     "██   \n"
                     "██   \n"
                     "█████\n"},
    .D = {.height = 5,
          .width = 6,
          .content = "█████ \n"
                     "██  ██\n"
                     "██  ██\n"
                     "██  ██\n"
                     "█████ \n"},
    .E = {.height = 5,
          .width = 5,
          .content = "█████\n"
                     "██   \n"
                     "████ \n"
                     "██   \n"
                     "█████\n"},
    .F = {.height = 5,
          .width = 5,
          .content = "█████\n"
                     "██   \n"
                     "████ \n"
                     "██   \n"
                     "██   \n"},
    .G = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██    \n"
                     "██ ███\n"
                     "██  ██\n"
                     "██████\n"},
    .H = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██  ██\n"
                     "██████\n"
                     "██  ██\n"
                     "██  ██\n"},
    .I = {.height = 5,
          .width = 4,
          .content = "████\n"
                     " ██ \n"
                     " ██ \n"
                     " ██ \n"
                     "████\n"},
    .J = {.height = 5,
          .width = 6,
          .content = "    ██\n"
                     "    ██\n"
                     "    ██\n"
                     "██  ██\n"
                     "██████\n"},
    .K = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██ ██ \n"
                     "██████\n"
                     "██  ██\n"
                     "██  ██\n"},
    .L = {.height = 5,
          .width = 5,
          .content = "██   \n"
                     "██   \n"
                     "██   \n"
                     "██   \n"
                     "█████\n"},
    .M = {.height = 5,
          .width = 8,
          .content = "██    ██\n"
                     "███  ███\n"
                     "████████\n"
                     "██ ██ ██\n"
                     "██    ██\n"},
    .N = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "███ ██\n"
                     "██████\n"
                     "██ ███\n"
                     "██  ██\n"},
    .O = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██  ██\n"
                     "██  ██\n"
                     "██  ██\n"
                     "██████\n"},
    .P = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██  ██\n"
                     "██████\n"
                     "██    \n"
                     "██    \n"},
    .Q = {.height = 6,
          .width = 6,
          .content = "██████\n"
                     "██  ██\n"
                     "██  ██\n"
                     "██ ███\n"
                     "██████\n"
                     "   ██ \n"},
    .R = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██  ██\n"
                     "██████\n"
                     "██ ██ \n"
                     "██  ██\n"},
    .S = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "██    \n"
                     "██████\n"
                     "    ██\n"
                     "██████\n"},
    .T = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "  ██  \n"
                     "  ██  \n"
                     "  ██  \n"
                     "  ██  \n"},
    .U = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██  ██\n"
                     "██  ██\n"
                     "██  ██\n"
                     "██████\n"},
    .V = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██  ██\n"
                     "██  ██\n"
                     " ████ \n"
                     "  ██  \n"},
    .W = {.height = 5,
          .width = 8,
          .content = "██    ██\n"
                     "██ ██ ██\n"
                     "████████\n"
                     "███  ███\n"
                     "██    ██\n"},
    .X = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     " ████ \n"
                     "  ██  \n"
                     " ████ \n"
                     "██  ██\n"},
    .Y = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██  ██\n"
                     " ████ \n"
                     "  ██  \n"
                     "  ██  \n"},
    .Z = {.height = 5,
          .width = 6,
          .content = "██████\n"
                     "   ██ \n"
                     "  ██  \n"
                     " ██   \n"
                     "██████\n"},
    .a = {.height = 5,
          .width = 6,
          .content = "  ▄▄▄▄\n"
                     "  ▀▀██\n"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"},
    .b = {.height = 5,
          .width = 6,
          .content = "██    \n"
                     "██    \n"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"},
    .c = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██    \n"
                     "██████\n"},
    .d = {.height = 5,
          .width = 6,
          .content = "    ██\n"
                     "    ██\n"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"},
    .e = {.height = 5,
          .width = 6,
          .content = "\v"
                     "\v"
                     " ████ \n"
                     "██  ██\n"
                     "██████\n"
                     "██▄▄  \n"
                     "▀▀▀▀  \n"},
    .f = {.height = 5,
          .width = 5,
          .content = " ████\n"
                     " ██  \n"
                     "████ \n"
                     " ██  \n"
                     " ██  \n"},
    .g = {.height = 5,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"
                     "    ██\n"
                     "  ████\n"},
    .h = {.height = 5,
          .width = 6,
          .content = "██    \n"
                     "██    \n"
                     "██████\n"
                     "██  ██\n"
                     "██  ██\n"},
    .i = {.height = 5,
          .width = 4,
          .content = " ██ \n"
                     "    \n"
                     "███ \n"
                     " ██ \n"
                     " ███\n"},
    .j = {.height = 7,
          .width = 3,
          .content = " ██\n"
                     "   \n"
                     "███\n"
                     " ██\n"
                     " ██\n"
                     " ██\n"
                     "███\n"},
    .k = {.height = 5,
          .width = 6,
          .content = "██  ██\n"
                     "██ ██ \n"
                     "█████ \n"
                     "██ ██ \n"
                     "██  ██\n"},
    .l = {.height = 5,
          .width = 4,
          .content = "███ \n"
                     " ██ \n"
                     " ██ \n"
                     " ██ \n"
                     " ███\n"},
    .m = {.height = 3,
          .width = 10,
          .content = "\v"
                     "\v"
                     "██████████\n"
                     "██  ██  ██\n"
                     "██  ██  ██\n"},
    .n = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██  ██\n"
                     "██  ██\n"},
    .o = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"},
    .p = {.height = 5,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"
                     "██    \n"
                     "██    \n"},
    .q = {.height = 5,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██████\n"
                     "██  ██\n"
                     "██████\n"
                     "    ██\n"
                     "    ██\n"},
    .r = {.height = 3,
          .width = 5,
          .content = "\v"
                     "\v"
                     "█████\n"
                     "██   \n"
                     "██   \n"},
    .s = {.height = 4,
          .width = 5,
          .content = "\v"
                     "█████\n"
                     "██▄▄▄\n"
                     "▀▀▀██\n"
                     "█████\n"},
    .t = {.height = 5,
          .width = 5,
          .content = " ██  \n"
                     " ██  \n"
                     "█████\n"
                     " ██  \n"
                     " ███ \n"},
    .u = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██  ██\n"
                     "██  ██\n"
                     "██████\n"},
    .v = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██  ██\n"
                     " ████ \n"
                     "  ██  \n"},
    .w = {.height = 3,
          .width = 10,
          .content = "\v"
                     "\v"
                     "██  ██  ██\n"
                     "██  ██  ██\n"
                     "██████████\n"},
    .x = {.height = 3,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██  ██\n"
                     " ████ \n"
                     "██  ██\n"},
    .y = {.height = 5,
          .width = 6,
          .content = "\v"
                     "\v"
                     "██  ██\n"
                     "██  ██\n"
                     "██████\n"
                     "    ██\n"
                     "  ████\n"},
    .z = {.height = 4,
          .width = 6,
          .content = "\v"
                     "██████\n"
                     "  ███ \n"
                     " ███  \n"
                     "██████\n"},
    .n0 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "███ ██\n"
                      "██  ██\n"
                      "██  ██\n"
                      "██████\n"},
    .n1 = {.height = 5,
           .width = 6,
           .content = "  ██  \n"
                      "████  \n"
                      "  ██  \n"
                      "  ██  \n"
                      "██████\n"},
    .n2 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "    ██\n"
                      "██████\n"
                      "██    \n"
                      "██████\n"},
    .n3 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "    ██\n"
                      " █████\n"
                      "    ██\n"
                      "██████\n"},
    .n4 = {.height = 5,
           .width = 6,
           .content = "██  ██\n"
                      "██  ██\n"
                      "██████\n"
                      "    ██\n"
                      "    ██\n"},
    .n5 = {.height = 5,
           .width = 6,
           .content = "████  \n"
                      "██    \n"
                      "██████\n"
                      "    ██\n"
                      "██████\n"},
    .n6 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "██    \n"
                      "██████\n"
                      "██  ██\n"
                      "██████\n"},
    .n7 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "    ██\n"
                      "  ████\n"
                      "   ██ \n"
                      "   ██ \n"},
    .n8 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "██  ██\n"
                      "██████\n"
                      "██  ██\n"
                      "██████\n"},
    .n9 = {.height = 5,
           .width = 6,
           .content = "██████\n"
                      "██  ██\n"
                      "██████\n"
                      "    ██\n"
                      "██████\n"},
    .dot = {.height = 1,
            .width = 2,
            .content = "\v"
                       "\v"
                       "\v"
                       "\v"
                       "██\n"},
    .colon = {.height = 3,
              .width = 2,
              .content = "\v"
                         "\v"
                         "██\n"
                         "  \n"
                         "██\n"},
    .coma = {.height = 2,
             .width = 2,
             .content = "\v"
                        "\v"
                        "\v"
                        "\v"
                        "██\n"
                        " █\n"},
    .semicolon = {.height = 4,
                  .width = 2,
                  .content = "\v"
                             "\v"
                             "██\n"
                             "  \n"
                             "██\n"
                             " █\n"},
    .aphostrophe = {.height = 1, .width = 1, .content = "█\n"},
    .quotationMark = {.height = 1, .width = 1, .content = "█ █\n"},
    .questionMark = {.height = 5,
                     .width = 6,
                     .content = "██████\n"
                                "▀▀  ██\n"
                                "  ████\n"
                                "  ▀▀  \n"
                                "  ██  \n"},
    .exclamationMark = {.height = 5,
                        .width = 2,
                        .content = "██\n"
                                   "██\n"
                                   "██\n"
                                   "▀▀\n"
                                   "██\n"},
    .openParentheses = {.height = 5,
                        .width = 3,
                        .content = " ██\n"
                                   "██ \n"
                                   "██ \n"
                                   "██ \n"
                                   " ██\n"},
    .closeParentheses = {.height = 5,
                         .width = 3,
                         .content = "██ \n"
                                    " ██\n"
                                    " ██\n"
                                    " ██\n"
                                    "██ \n"},
    .openCurlyBrace = {.height = 5,
                       .width = 3,
                       .content = " ██\n"
                                  " ██\n"
                                  "██ \n"
                                  " ██\n"
                                  " ██\n"},
    .closeCurlyBrace = {.height = 5,
                        .width = 3,
                        .content = "██ \n"
                                   "██ \n"
                                   " ██\n"
                                   "██ \n"
                                   "██ \n"},
    .openBracket = {.height = 5,
                    .width = 3,
                    .content = "███\n"
                               "██ \n"
                               "██ \n"
                               "██ \n"
                               "███\n"},
    .closeBracket = {.height = 5,
                     .width = 3,
                     .content = "███\n"
                                " ██\n"
                                " ██\n"
                                " ██\n"
                                "███\n"},
    .plus = {.height = 3,
             .width = 6,
             .content = "\v"
                        "  ██  \n"
                        "██████\n"
                        "  ██  \n"},
    .minus = {.height = 1,
              .width = 6,
              .content = "\v"
                         "\v"
                         "██████\n"},
    .asterisk = {.height = 3,
                 .width = 6,
                 .content = "\v"
                            " ▄██▄ \n"
                            "██████\n"
                            " ▀██▀ \n"},
    .slash = {.height = 5,
              .width = 6,
              .content = "    ██\n"
                         "   ██ \n"
                         "  ██  \n"
                         " ██   \n"
                         "██    \n"},
    .equals = {.height = 3,
               .width = 6,
               .content = "\v"
                          "██████\n"
                          "      \n"
                          "██████\n"},
    .at = {.height = 7,
           .width = 10,
           .content = "██████████\n"
                      "██      ██\n"
                      "██  ██████\n"
                      "██  ██  ██\n"
                      "██  ██████\n"
                      "██        \n"
                      "████████  \n"},
    .dollar = {.height = 7,
               .width = 6,
               .content = "\033[1A"
                          "  ██  \n"
                          "██████\n"
                          "██    \n"
                          "██████\n"
                          "    ██\n"
                          "██████\n"
                          "  ██  \n"},
    .percent = {.height = 5,
                .width = 6,
                .content = "██  ██\n"
                           "   ██ \n"
                           "  ██  \n"
                           " ██   \n"
                           "██  ██\n"},
    .ampersand = {.height = 5,
                  .width = 9,
                  .content = " ███     \n"
                             "██ ██    \n"
                             " ████ ██ \n"
                             "██  ███  \n"
                             " ████  ██\n"},
    .underline = {.height = 1,
                  .width = 6,
                  .content = "\v"
                             "\v"
                             "\v"
                             "\v"
                             "██████\n"},
    .backslash = {.height = 5,
                  .width = 6,
                  .content = "██    \n"
                             " ██   \n"
                             "  ██  \n"
                             "   ██ \n"
                             "    ██\n"},
    .circumflex = {.height = 3,
                   .width = 6,
                   .content = "\v"
                              "  ██  \n"
                              " ████ \n"
                              "██  ██\n"},
    .tilde = {.height = 2,
              .width = 9,
              .content = "\v"
                         "\v"
                         "  ███ ███\n"
                         "███ ███  \n"}};