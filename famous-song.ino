#include "DigiKeyboard.h"
#include <Windows.h>

bool isEnglishLayout(HKL layout) {
    // The English layout code is "00000409"
    return (layout == LoadKeyboardLayout(L"00000409", KLF_NOTELLSHELL));
}

void setup() {
    // Get the current keyboard layout
    HKL currentLayout = GetKeyboardLayout(0);

    // Check if the current layout is English
    if (!isEnglishLayout(currentLayout)) {
        // Attempt to set the keyboard layout to English
        HKL englishLayout = LoadKeyboardLayout(L"00000409", KLF_ACTIVATE | KLF_SUBSTITUTE_OK);
        if (englishLayout != NULL) {
            DigiKeyboard.print("Changed keyboard layout to English. ");
        } else {
            DigiKeyboard.print("Failed to change keyboard layout. ");
        }
    }

    // Play the famous song
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("https://www.youtube.com/tv#/watch/video/control?v=dQw4w9WgXcQ&list=RDdQw4w9WgXcQ&resume");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F11);
}

void loop() {
}
