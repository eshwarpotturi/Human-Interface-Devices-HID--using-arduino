#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("Hello World!");

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
