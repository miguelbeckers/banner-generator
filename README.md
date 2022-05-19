## 📜 Description

Sometimes we create a C program and we want to show a cool banner on the top of the console.
There are some alternativities to do that, the most common way is to draw some letters using ASCII characters.
But that can take time to be done and your code may not look clean with a lot of prints.
With this library it is possible to print a banner with a text, color and a font of your choice.

Run this exemple project [here](https://replit.com/@miguelbeckers/coolbanner) to see how it works.

## 🔨 How to use?

1. Clone or download this project
1. Copy the `font` folder and the `coolbanner.h` file to your C program folder
1. In your C program, include the library using `#include "coolbanner.h"`
1. Call the function `printBanner` passing a string, a font and a color as arguments

## ✒️ Available fonts

* BASIC_LINEAR:
```
╔═╗---╔═══╗╔══╗-╔═╗╔════╗-╔═══╗-╔═════╗
║-║---╚╗-╔╝║--╚╗║-║║-╔══╝╔╝╔═╗╚╗║-╔═╗-║
║-║----║-║-║---╚╝-║║-╚═╗-║-╚═╝-║║-╚═╝-║
║-║----║-║-║-╔╗---║║-╔═╝-║-╔═╗-║║-╔╗-╔╝
║-╚══╗╔╝-╚╗║-║╚╗--║║-╚══╗║-║-║-║║-║╚╗╚╗
╚════╝╚═══╝╚═╝-╚══╝╚════╝╚═╝-╚═╝╚═╝-╚═╝
```

* BASIC_SHADOWED:
```
 ██████  ██  ██   ████   █████   ██████  ██    ██  █████  █████  
 ██▒▒▒▒▒ ██▒ ██▒ ██▒▒██  ██▒▒██  ██▒▒██▒ ██▒██ ██▒ ██▒▒▒▒ ██▒▒██ 
 ██████  ██████▒ ██████▒ ██▒ ██▒ ██▒ ██▒ ████████▒ ████   ██▒ ██▒
  ▒▒▒██▒ ██▒▒██▒ ██▒▒██▒ ██▒ ██▒ ██▒ ██▒ ███▒▒███▒ ██▒▒▒  ██▒ ██▒
 ██████▒ ██▒ ██▒ ██▒ ██▒ █████▒▒ ██████▒ ██▒▒  ██▒ █████  █████▒▒
  ▒▒▒▒▒▒  ▒▒  ▒▒  ▒▒  ▒▒  ▒▒▒▒▒   ▒▒▒▒▒▒  ▒▒    ▒▒  ▒▒▒▒▒  ▒▒▒▒▒  
```

* BASIC_OUTLINED:
```
┌██████┐┌██┐┌██┐┌██████┐┌██┐   ┌████┐┌██┐┌██┐┌█████┐┌█████┐ 
│██┌┐██││██││██│└─┐██┌─┘│██│   └┐██┌┘│███┤██││██┌──┘│██┌┐██┐
│██││██││██││██│  │██│  │██│    │██│ │██████││████┐ │██││██│
│██││██││██││██│  │██│  │██│    │██│ │██ ███││██┌─┘ │██││██│
│██████││██████│  │██│  │█████┐┌████┐│██├┐██││█████┐│█████┌┘
└──────┘└──────┘  └──┘  └─────┘└────┘└──┘└──┘└─────┘└─────┘  
```

* BASIC_REGULAR:
```
 ██████ █████ ██████ ██  ██ ██     ████  ██████
 ██  ██ ██    ██     ██  ██ ██    ██  ██ ██  ██
 ██████ ████  ██ ███ ██  ██ ██    ██████ ██████
 ██ ██  ██    ██  ██ ██  ██ ██    ██  ██ ██ ██ 
 ██  ██ █████ ██████ ██████ █████ ██  ██ ██  ██ 
 
 ```

## ⚠️ Note

* This project was made to work on Replit so, it may not work locally depending the setup.
* A new version compatible with windows and C11 will be available soon!
