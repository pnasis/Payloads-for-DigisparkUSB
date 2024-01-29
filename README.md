# Payloads for DigisparkUSB

This repository includes several DigiSpark sketches designed for the Arduino IDE, leveraging the DigiKeyboard.h library to transform the DigiSpark into a programmable keyboard capable of executing various actions. This functionality falls under the category of Human Interface Device (HID), aiming to replicate the legitimate behavior of a keyboard. The Digispark ATtiny85 is a microcontroller development board based on the ATtiny85 chip.

<p align=center>
<img src="https://www.bifelectronic.com/5523-large_default/ard-digispark.jpg" alt="digispark-photo" width=300px>
</p>

**Disclaimer!**
This software is shared for educational and research purposes only. The author Prodromos Nasis does not encourage or condone any unethical or illegal activities using this software. Any individual who chooses to use this program is solely responsible for their actions. The author shall not be held liable for any misuse of this software for unauthorized purposes, including but not limited to network intrusion, unauthorized access, or any other malicious activities.

By downloading, copying, or using this software, you agree that you will use it in compliance with all applicable laws, and you assume full responsibility for any consequences that may arise from its use.

This software is provided "as is," without any warranties or guarantees of any kind, either expressed or implied. The author makes no guarantees regarding the functionality, reliability, or suitability of this software for any purpose.

Users are advised to use this software in a lawful and ethical manner and to respect the privacy and rights of others.

**Please use this software responsibly and only in authorized and legal environments!**

## Installation

In order to be able to program the DigisparkUSB using Arduino IDE, you have to add to the Board Managers the following url "https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json".

## List of Sketches

- **famous-song.ino:** this is a very basic sketch that opens and plays a very famous song to the victim computer. This is also can be used as a Proof of Concept (PoC).
- **Win10-Backdoor.ino:** this sketch is capable of creating a backdoor on a Windows 10 machine by downloading the powercat executable.
- **Dump-NTLM-Hashes.ino:** this sketch is capable of dumping the NTLM hashes presented in the victim computer and send it to the attackers machine in a zip format.
- **famous-blue-screen-of-death.ino:** this sketch tries to fool the victim into thinking that got the infamous blue screen of death.

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

>This project is under [Apache 2.0](https://choosealicense.com/licenses/apache-2.0/) licence.
