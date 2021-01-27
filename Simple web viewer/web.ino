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
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);
//We can modify the URL we want to visit in the below line of the code.
  Keyboard.print("https://www.youtube.com/watch?v=T5o_0BoTvWg");

  typeKey(KEY_RETURN);

  delay(3000);

  Keyboard.print("f");

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
