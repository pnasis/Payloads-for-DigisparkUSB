#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("http://fakebsod.com/windows-8-and-10");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() {
}