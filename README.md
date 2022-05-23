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

* BASIC_SHADOWED: <br/>
![shadowed](https://user-images.githubusercontent.com/52552717/169814013-6504f254-84b8-4a81-a862-5107dc5a3ee0.png)
* BASIC_OUTLINED: <br/>
![outlined](https://user-images.githubusercontent.com/52552717/169814577-0e4be0e8-94fc-47c5-b2ec-f1b1471ceaec.png)
* BASIC_LINEAR: <br/>
![image](https://user-images.githubusercontent.com/52552717/169813121-bbb201f1-2bbd-4df4-bf27-a829009da887.png)
* BASIC_REGULAR: <br/>
![image](https://user-images.githubusercontent.com/52552717/169813162-0548a49d-f936-4099-94eb-dbe318090721.png)

## ⚠️ Note

* This project was made to work on Replit so, it may not work locally depending the setup.
* A new version compatible with windows and C11 will be available soon!
