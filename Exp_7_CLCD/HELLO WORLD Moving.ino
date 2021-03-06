{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.18362}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <LiquidCrystal.h>\par
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);\par
\par
//Variavle to Display\par
char * LargeText = "HELLO WORLD                                     ";\par
\par
int iLineNumber = 0;                                                                   // Line number to show your string (Either 0 or 1)\par
\par
int iCursor = 0;\par
\par
void setup() \par
\{\par
  lcd.begin(16, 2);\par
\}\par
\par
void loop() \par
\{\par
  UpdateLCDDisplay();                                                                 // Scoll text by 1 character\par
  delay(350);                                                                         // Change delay to change speed for scrollig text. \par
\}\par
\par
void UpdateLCDDisplay()\par
\{\par
  int iLenOfLargeText = strlen(LargeText);                                            // Calculate lenght of string.\par
  if (iCursor == (iLenOfLargeText - 1) )                                              // Reset variable for rollover effect.\par
  \{\par
    iCursor = 0;\par
  \}\par
  //lcd.clear();\par
  lcd.setCursor(0,iLineNumber);\par
  \par
  if(iCursor < iLenOfLargeText - 16)                                                  // This loop exicuted for normal 16 characters.\par
  \{\par
    for (int iChar = iCursor; iChar < iCursor + 16 ; iChar++)\par
    \{\par
      lcd.print(LargeText[iChar]);\par
    \}\par
  \}\par
  else\par
  \{\par
    for (int iChar = iCursor; iChar < (iLenOfLargeText - 1) ; iChar++)                //  This code takes care of printing charecters of current string.\par
    \{\par
      lcd.print(LargeText[iChar]);\par
    \}\par
    for (int iChar = 0; iChar <= 16 - (iLenOfLargeText - iCursor); iChar++)           //  Reamining charecter will be printed by this loop.\par
    \{\par
      lcd.print(LargeText[iChar]);   \par
    \}\par
  \}\par
  iCursor++;\par
\}\par
}
 