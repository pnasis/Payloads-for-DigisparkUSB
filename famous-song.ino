#include "DigiKeyboard.h"

void setup() {
    // Play the famous song
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F11);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
}

void loop() {
}
