#include "../types.h"

static const struct TFont BASIC_SHADOWED = {

    .A = {.height = 6,
          .width = 7,
          .content = " ████  \n"
                     "██▒▒██ \n"
                     "██████▒\n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .B = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒██▒\n"
                     "█████▒▒\n"
                     "██▒▒██ \n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .C = {.height = 6,
          .width = 6,
          .content = "█████ \n"
                     "██▒▒▒▒\n"
                     "██▒   \n"
                     "██▒   \n"
                     "█████ \n"
                     " ▒▒▒▒▒\n"},
    .D = {.height = 6,
          .width = 7,
          .content = "█████  \n"
                     "██▒▒██ \n"
                     "██▒ ██▒\n"
                     "██▒ ██▒\n"
                     "█████▒▒\n"
                     " ▒▒▒▒▒ \n"},
    .E = {.height = 6,
          .width = 6,
          .content = "█████ \n"
                     "██▒▒▒▒\n"
                     "████  \n"
                     "██▒▒▒ \n"
                     "█████ \n"
                     " ▒▒▒▒▒\n"},
    .F = {.height = 6,
          .width = 6,
          .content = "█████ \n"
                     "██▒▒▒▒\n"
                     "████  \n"
                     "██▒▒▒ \n"
                     "██▒   \n"
                     " ▒▒   \n"},
    .G = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒▒▒▒\n"
                     "██▒███ \n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .H = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .I = {.height = 6,
          .width = 5,
          .content = "████ \n"
                     " ██▒▒\n"
                     " ██▒ \n"
                     " ██▒ \n"
                     "████ \n"
                     " ▒▒▒▒\n"},
    .J = {.height = 6,
          .width = 7,
          .content = "    ██ \n"
                     "    ██▒\n"
                     "    ██▒\n"
                     "██  ██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .K = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒██▒▒\n"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .L = {.height = 6,
          .width = 6,
          .content = "██    \n"
                     "██▒   \n"
                     "██▒   \n"
                     "██▒   \n"
                     "█████ \n"
                     " ▒▒▒▒▒\n"},
    .M = {.height = 6,
          .width = 9,
          .content = "██    ██ \n"
                     "███  ███▒\n"
                     "████████▒\n"
                     "██▒██▒██▒\n"
                     "██▒ ▒▒██▒\n"
                     " ▒▒    ▒▒\n"},
    .N = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "███ ██▒\n"
                     "██████▒\n"
                     "██▒███▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .O = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .P = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     "██▒▒▒▒▒\n"
                     "██▒    \n"
                     " ▒▒    \n"},
    .Q = {.height = 7,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒██▒\n"
                     "██▒▒██▒\n"
                     "██▒███▒\n"
                     "██████▒\n"
                     " ▒▒██▒▒\n"
                     "    ▒▒ \n"},
    .R = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     "██▒██▒▒\n"
                     "██▒ ██ \n"
                     " ▒▒  ▒▒\n"},
    .S = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     "██▒▒▒▒▒\n"
                     "██████ \n"
                     " ▒▒▒██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .T = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     " ▒██▒▒▒\n"
                     "  ██▒  \n"
                     "  ██▒  \n"
                     "  ██▒  \n"
                     "   ▒▒  \n"},
    .U = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒ ██▒\n"
                     "██▒ ██▒\n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .V = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒ ██▒\n"
                     "██▒ ██▒\n"
                     " ████▒▒\n"
                     "  ██▒▒ \n"
                     "   ▒▒  \n"},
    .W = {.height = 6,
          .width = 9,
          .content = "██    ██ \n"
                     "██▒██ ██▒\n"
                     "████████▒\n"
                     "███▒▒███▒\n"
                     "██▒▒  ██▒\n"
                     " ▒▒    ▒▒\n"},
    .X = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     " ████▒▒\n"
                     "  ██▒▒ \n"
                     " ████  \n"
                     "██▒▒██ \n"
                     " ▒▒  ▒▒\n"},
    .Y = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒ ██▒\n"
                     " ████▒▒\n"
                     "  ██▒▒ \n"
                     "  ██▒  \n"
                     "   ▒▒  \n"},
    .Z = {.height = 6,
          .width = 7,
          .content = "██████ \n"
                     " ▒▒██▒▒\n"
                     "  ██▒▒ \n"
                     " ██▒▒  \n"
                     "██████ \n"
                     " ▒▒▒▒▒▒\n"},
    .a = {.height = 6,
          .width = 8,
          .content = "   ████ \n"
                     "    ▒██▒\n"
                     " ██████▒\n"
                     "███▒▒██▒\n"
                     " ██████▒\n"
                     "  ▒▒▒▒▒▒\n"},
    .b = {.height = 6,
          .width = 8,
          .content = "██      \n"
                     "██▒     \n"
                     "██████  \n"
                     "██▒▒███ \n"
                     "██████▒▒\n"
                     " ▒▒▒▒▒▒ \n"},
    .c = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒▒▒▒\n"
                     "██████ \n"
                     " ▒▒▒▒▒▒\n"},
    .d = {.height = 6,
          .width = 8,
          .content = "     ██ \n"
                     "     ██▒\n"
                     " ██████▒\n"
                     "███▒▒██▒\n"
                     " ██████▒\n"
                     "  ▒▒▒▒▒▒\n"},
    .e = {.height = 6,
          .width = 7,
          .content = "\v"
                     "\v"
                     " ████  \n"
                     "██▒▒██ \n"
                     "██████▒\n"
                     "██▒▒▒▒▒\n"
                     "████   \n"
                     " ▒▒▒▒  \n"},
    .f = {.height = 6,
          .width = 6,
          .content = " ████ \n"
                     " ██▒▒▒\n"
                     "████  \n"
                     " ██▒▒ \n"
                     " ██▒  \n"
                     "  ▒▒  \n"},
    .g = {.height = 6,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     " ▒▒▒██▒\n"
                     "  ████▒\n"
                     "   ▒▒▒▒\n"},
    .h = {.height = 6,
          .width = 7,
          .content = "██     \n"
                     "██▒    \n"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .i = {.height = 6,
          .width = 5,
          .content = " ██  \n"
                     "  ▒▒ \n"
                     "███  \n"
                     " ██▒ \n"
                     " ███▒\n"
                     "  ▒▒▒\n"},
    .j = {.height = 8,
          .width = 4,
          .content = " ██ \n"
                     "  ▒▒\n"
                     "███ \n"
                     " ██▒\n"
                     " ██▒\n"
                     " ██▒\n"
                     "███▒\n"
                     " ▒▒▒\n"},
    .k = {.height = 6,
          .width = 7,
          .content = "██  ██ \n"
                     "██▒██▒▒\n"
                     "█████▒ \n"
                     "██▒██▒ \n"
                     "██▒ ██ \n"
                     " ▒▒  ▒▒\n"},
    .l = {.height = 6,
          .width = 5,
          .content = "███  \n"
                     " ██▒ \n"
                     " ██▒ \n"
                     " ██▒ \n"
                     " ███ \n"
                     "  ▒▒▒\n"},
    .m = {.height = 4,
          .width = 11,
          .content = "\v"
                     "\v"
                     "██████████ \n"
                     "██▒▒██▒▒██▒\n"
                     "██▒ ██▒ ██▒\n"
                     " ▒▒  ▒▒  ▒▒\n"},
    .n = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██▒ ██▒\n"
                     " ▒▒  ▒▒\n"},
    .o = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .p = {.height = 6,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     "██▒▒▒▒▒\n"
                     "██▒    \n"
                     " ▒▒    \n"},
    .q = {.height = 6,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██████ \n"
                     "██▒▒██▒\n"
                     "██████▒\n"
                     " ▒▒▒██▒\n"
                     "    ██▒\n"
                     "     ▒▒\n"},
    .r = {.height = 4,
          .width = 6,
          .content = "\v"
                     "\v"
                     "█████ \n"
                     "██▒▒▒▒\n"
                     "██▒   \n"
                     " ▒▒   \n"},
    .s = {.height = 6,
          .width = 7,
          .content = "████   \n"
                     "██▒▒▒  \n"
                     "█████  \n"
                     " ▒▒███ \n"
                     "█████▒▒\n"
                     " ▒▒▒▒▒ \n"},
    .t = {.height = 6,
          .width = 6,
          .content = " ██   \n"
                     " ██▒  \n"
                     "█████ \n"
                     " ██▒▒▒\n"
                     " ███  \n"
                     "  ▒▒▒ \n"},
    .u = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██  ██ \n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     " ▒▒▒▒▒▒\n"},
    .v = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██  ██ \n"
                     " ████▒▒\n"
                     "  ██▒▒ \n"
                     "   ▒▒  \n"},
    .w = {.height = 4,
          .width = 11,
          .content = "\v"
                     "\v"
                     "██  ██  ██ \n"
                     "██▒ ██▒ ██▒\n"
                     "██████████▒\n"
                     " ▒▒▒▒▒▒▒▒▒▒\n"},
    .x = {.height = 4,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██  ██ \n"
                     " ████▒▒\n"
                     "██▒▒██ \n"
                     " ▒▒  ▒▒\n"},
    .y = {.height = 6,
          .width = 7,
          .content = "\v"
                     "\v"
                     "██  ██ \n"
                     "██▒ ██▒\n"
                     "██████▒\n"
                     " ▒▒▒██▒\n"
                     "  ████▒\n"
                     "   ▒▒▒▒\n"},
    .z = {.height = 5,
          .width = 7,
          .content = "\v"
                     "██████ \n"
                     " ▒███▒▒\n"
                     " ███▒▒ \n"
                     "██████ \n"
                     " ▒▒▒▒▒▒\n"},
    .n0 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      "███▒██▒\n"
                      "██▒▒██▒\n"
                      "██▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .n1 = {.height = 6,
           .width = 7,
           .content = "  ██   \n"
                      "████▒  \n"
                      " ▒██▒  \n"
                      "  ██▒  \n"
                      "██████ \n"
                      " ▒▒▒▒▒▒\n"},
    .n2 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      " ▒▒▒██▒\n"
                      "██████▒\n"
                      "██▒▒▒▒▒\n"
                      "██████ \n"
                      " ▒▒▒▒▒▒\n"},
    .n3 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      " ▒▒▒██▒\n"
                      " █████▒\n"
                      "  ▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .n4 = {.height = 6,
           .width = 7,
           .content = "██  ██ \n"
                      "██▒ ██▒\n"
                      "██████▒\n"
                      " ▒▒▒██▒\n"
                      "    ██▒\n"
                      "     ▒▒\n"},
    .n5 = {.height = 6,
           .width = 7,
           .content = "████   \n"
                      "██▒▒▒  \n"
                      "██████ \n"
                      " ▒▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .n6 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      "██▒▒▒▒▒\n"
                      "██████ \n"
                      "██▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .n7 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      " ▒▒▒██▒\n"
                      "  ████▒\n"
                      "   ██▒▒\n"
                      "   ██▒ \n"
                      "    ▒▒ \n"},
    .n8 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      "██▒▒██▒\n"
                      "██████▒\n"
                      "██▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .n9 = {.height = 6,
           .width = 7,
           .content = "██████ \n"
                      "██▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒██▒\n"
                      "██████▒\n"
                      " ▒▒▒▒▒▒\n"},
    .dot = {.height = 2,
            .width = 3,
            .content = "\v"
                       "\v"
                       "\v"
                       "\v"
                       "██ \n"
                       " ▒▒\n"},
    .colon = {.height = 4,
              .width = 3,
              .content = "\v"
                         "\v"
                         "██ \n"
                         " ▒▒\n"
                         "██ \n"
                         " ▒▒\n"},
    .coma = {.height = 3,
             .width = 3,
             .content = "\v"
                        "\v"
                        "\v"
                        "\v"
                        "██ \n"
                        " █▒\n"
                        "  ▒\n"},
    .semicolon = {.height = 5,
                  .width = 3,
                  .content = "\v"
                             "\v"
                             "██ \n"
                             " ▒▒\n"
                             "██ \n"
                             " █▒\n"
                             "  ▒\n"},
    .aphostrophe = {.height = 2,
                    .width = 2,
                    .content = "█ \n"
                               " ▒\n"},
    .quotationMark = {.height = 2,
                      .width = 4,
                      .content = "█ █ \n"
                                 " ▒ ▒\n"},
    .questionMark = {.height = 6,
                     .width = 7,
                     .content = "██████ \n"
                                " ▒▒▒██▒\n"
                                "  ████▒\n"
                                "   ▒▒▒▒\n"
                                "  ██   \n"
                                "   ▒▒  \n"},
    .exclamationMark = {.height = 6,
                        .width = 3,
                        .content = "██ \n"
                                   "██▒\n"
                                   "██▒\n"
                                   " ▒▒\n"
                                   "██ \n"
                                   " ▒▒\n"},
    .openParentheses = {.height = 6,
                        .width = 4,
                        .content = " ██ \n"
                                   "██▒▒\n"
                                   "██▒ \n"
                                   "██▒ \n"
                                   " ██ \n"
                                   "  ▒▒\n"},
    .closeParentheses = {.height = 6,
                         .width = 4,
                         .content = "██  \n"
                                    " ██ \n"
                                    " ██▒\n"
                                    " ██▒\n"
                                    "██▒▒\n"
                                    " ▒▒ \n"},
    .openCurlyBrace = {.height = 6,
                       .width = 4,
                       .content = " ██ \n"
                                  " ██▒\n"
                                  "██▒▒\n"
                                  " ██ \n"
                                  " ██▒\n"
                                  "  ▒▒\n"},
    .closeCurlyBrace = {.height = 6,
                        .width = 4,
                        .content = "██  \n"
                                   "██▒ \n"
                                   " ██ \n"
                                   "██▒▒\n"
                                   "██▒ \n"
                                   " ▒▒ \n"},
    .openBracket = {.height = 6,
                    .width = 4,
                    .content = "███ \n"
                               "██▒▒\n"
                               "██▒ \n"
                               "██▒ \n"
                               "███ \n"
                               " ▒▒▒\n"},
    .closeBracket = {.height = 6,
                     .width = 4,
                     .content = "███ \n"
                                " ██▒\n"
                                " ██▒\n"
                                " ██▒\n"
                                "███▒\n"
                                " ▒▒▒\n"},
    .plus = {.height = 4,
             .width = 7,
             .content = "\v"
                        "  ██   \n"
                        "██████ \n"
                        "  ██▒▒▒\n"
                        "   ▒▒  \n"},
    .minus = {.height = 2,
              .width = 7,
              .content = "\v"
                         "\v"
                         "██████ \n"
                         " ▒▒▒▒▒▒\n"},
    .asterisk = {.height = 4,
                 .width = 7,
                 .content = "\v"
                            " ████  \n"
                            "██▒▒██ \n"
                            " ████▒▒\n"
                            "  ▒▒▒▒ \n"},
    .slash = {.height = 6,
              .width = 7,
              .content = "    ██ \n"
                         "   ██▒▒\n"
                         "  ██▒▒ \n"
                         " ██▒▒  \n"
                         "██▒▒   \n"
                         " ▒▒    \n"},
    .equals = {.height = 4,
               .width = 7,
               .content = "\v"
                          "██████ \n"
                          " ▒▒▒▒▒▒\n"
                          "██████ \n"
                          " ▒▒▒▒▒▒\n"},
    .at = {.height = 8,
           .width = 11,
           .content = "██████████ \n"
                      "██▒▒▒▒▒▒██▒\n"
                      "██▒ ██████▒\n"
                      "██▒ ██▒▒██▒\n"
                      "██▒ ██████▒\n"
                      "██▒  ▒▒▒▒▒▒\n"
                      "████████   \n"
                      " ▒▒▒▒▒▒▒▒  \n"},
    .dollar = {.height = 8,
               .width = 7,
               .content = "\033[1A"
                          "  ██   \n"
                          "██████ \n"
                          "██▒▒▒▒▒\n"
                          "██████ \n"
                          " ▒▒▒██▒\n"
                          "██████▒\n"
                          "  ██▒▒▒\n"
                          "   ▒▒  \n"},
    .percent = {.height = 6,
                .width = 7,
                .content = "██  ██ \n"
                           " ▒▒██▒▒\n"
                           "  ██▒▒ \n"
                           " ██▒▒  \n"
                           "██▒▒██ \n"
                           " ▒▒  ▒▒\n"},
    .ampersand = {.height = 6,
                  .width = 10,
                  .content = " ███      \n"
                             "██▒██     \n"
                             " ████▒██  \n"
                             "██▒▒███▒▒ \n"
                             " ████▒▒██ \n"
                             "  ▒▒▒▒  ▒▒\n"},
    .underline = {.height = 2,
                  .width = 7,
                  .content = "\v"
                             "\v"
                             "\v"
                             "\v"
                             "██████ \n"
                             " ▒▒▒▒▒▒\n"},
    .backslash = {.height = 6,
                  .width = 7,
                  .content = "██     \n"
                             " ██    \n"
                             "  ██   \n"
                             "   ██  \n"
                             "    ██ \n"
                             "     ▒▒\n"},
    .circumflex = {.height = 4,
                   .width = 7,
                   .content = "\v"
                              "  ██   \n"
                              " ████  \n"
                              "██▒▒██ \n"
                              " ▒▒  ▒▒\n"},
    .tilde = {.height = 3,
              .width = 10,
              .content = "\v"
                         "\v"
                         "  ███ ███ \n"
                         "███▒███▒▒▒\n"
                         " ▒▒▒ ▒▒▒  \n"}};