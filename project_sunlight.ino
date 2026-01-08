#include <FastLED.h>

#define NUM_LEDS 255
#define DATA_PIN 2

CRGB leds[NUM_LEDS];

// array lists for pattern 0
int greenLEDs_pattern1[] = {52, 59, 68, 67, 76, 83, 82, 92, 93, 98, 97, 110, 113, 126, 129, 142, 145, 158, 161, 174, 177, 190, 193, 206, 205, 211, 210, 220, 221, 227, 236, 235};
int lightgreenLEDs_pattern1[] = {0, 1, 2, 13, 15, 16, 31, 32, 35, 34, 44, 45, 46, 47, 51, 50, 49, 48, 60, 61, 62, 63, 66, 65, 64, 81, 79, 78, 77, 80, 94, 95, 96, 111, 112, 127, 128, 143, 144, 159, 160, 175, 176, 191, 192, 207, 209, 208, 222, 223, 226, 225, 224, 237, 238, 239, 244, 243, 242, 241, 240, 251, 252, 253, 254, 255};
int blueLEDs_pattern1[] = {75, 84, 91, 100, 99, 108, 109, 115, 114, 124, 125, 131, 130, 140, 141, 147, 146, 156, 157, 163, 162, 172, 173, 179, 178, 187, 188, 189, 196, 195, 194, 203, 204, 212, 219, 228};
int yellowLEDs_pattern1[] = {87, 104, 102, 90, 116, 122, 123, 134, 133, 132, 137, 138, 139, 150, 149, 148, 153, 154, 155, 165, 164, 171, 168, 182, 197};
int lightblueLEDs_pattern1[] = {7, 8, 23, 56, 57, 58, 71, 70, 69, 72, 73, 74, 86, 85, 88, 89, 103, 101, 105, 106, 107, 119, 118, 117, 120, 121, 135, 136, 151, 152, 167, 166, 169, 168, 170, 181, 180, 183, 184, 185, 186, 199, 198, 200, 201, 202, 215, 214, 213, 216, 217, 218, 231, 230, 229, 232, 233, 234, 247, 246, 245, 248, 249, 250 };
int middarkgreenLEDs_pattern1[] = {6, 3, 9, 11, 12, 22, 25, 24, 39, 40, 55, 54, 53, 42, 43, 36};
int brownLEDs_pattern1[] = {14, 17, 20, 21, 18, 19, 10, 5, 4, 30, 29, 28, 27, 26, 33, 37, 38, 41};

// array lists for pattern 1
int greenLEDs_pattern2[] = {52, 59, 68, 67, 76, 83, 82, 92, 93, 98, 97, 110, 113, 126, 129, 142, 145, 158, 161, 174, 177, 190, 193, 206, 205, 211, 210, 220, 221, 227, 236, 235};
int lightgreenLEDs_pattern2[] = {0, 1, 2, 13, 15, 16, 31, 32, 35, 34, 44, 45, 46, 47, 51, 50, 49, 48, 60, 61, 62, 63, 66, 65, 64, 81, 79, 78, 77, 80, 94, 95, 96, 111, 112, 127, 128, 143, 144, 159, 160, 175, 176, 191, 192, 207, 209, 208, 222, 223, 226, 225, 224, 237, 238, 239, 244, 243, 242, 241, 240, 251, 252, 253, 254, 255};
int blueLEDs_pattern2[] = {75, 84, 91, 100, 99, 108, 109, 115, 114, 124, 125, 131, 130, 140, 141, 147, 146, 156, 157, 163, 162, 172, 173, 179, 178, 187, 188, 189, 196, 195, 194, 203, 204, 212, 219, 228};
int yellowLEDs_pattern2[] = {88, 105, 101, 86, 74, 116, 122, 123, 134, 133, 132, 137, 138, 139, 150, 149, 148, 153, 154, 155, 165, 164, 171, 183, 185, 198, 202};
int lightblueLEDs_pattern2[] = {7, 8, 23, 56, 57, 58, 71, 70, 69, 72, 73, 74, 87, 85, 87, 89, 90, 103, 102, 104, 106, 107, 119, 118, 117, 120, 121, 135, 136, 151, 152, 167, 166, 168, 169, 170, 181, 180, 182, 184, 186, 199, 197, 200, 201, 215, 214, 213, 216, 217, 218, 231, 230, 229, 232, 233, 234, 247, 246, 245, 248, 249, 250 };
int middarkgreenLEDs_pattern2[] = {6, 3, 9, 11, 12, 22, 25, 24, 39, 40, 55, 54, 53, 42, 43, 36};
int brownLEDs_pattern2[] = {14, 17, 20, 21, 18, 19, 10, 5, 4, 30, 29, 28, 27, 26, 33, 37, 38, 41};

// array lists for pattern 2
int greenLEDs_pattern3[] = {52, 59, 68, 67, 76, 83, 82, 92, 93, 98, 97, 110, 113, 126, 129, 142, 145, 158, 161, 174, 177, 190, 193, 206, 205, 211, 210, 220, 221, 227, 236, 235};
int lightgreenLEDs_pattern3[] = {0, 1, 2, 13, 15, 16, 31, 32, 35, 34, 44, 45, 46, 47, 51, 49, 48, 60, 61, 62, 63, 66, 65, 64, 81, 79, 78, 77, 80, 94, 95, 96, 111, 112, 127, 128, 143, 144, 159, 160, 175, 176, 191, 192, 207, 209, 208, 222, 223, 226, 225, 224, 237, 238, 239, 244, 243, 242, 241, 240, 251, 252, 253, 254, 255};
int blueLEDs_pattern3[] = {75, 84, 91, 100, 99, 108, 109, 115, 114, 124, 125, 131, 130, 140, 141, 147, 146, 156, 157, 163, 162, 172, 173, 179, 178, 187, 188, 189, 196, 195, 194, 203, 204, 212, 219, 228};
int yellowLEDs_pattern3[] = {87, 104, 102, 90, 116, 122, 123, 134, 133, 132, 137, 138, 139, 150, 149, 148, 153, 154, 155, 165, 164, 171, 168, 182, 197};
int lightblueLEDs_pattern3[] = {7, 8, 23, 56, 57, 58, 71, 70, 69, 72, 73, 74, 86, 85, 88, 89, 103, 101, 105, 106, 107, 119, 118, 117, 120, 121, 135, 136, 151, 152, 167, 166, 169, 168, 170, 181, 180, 183, 184, 185, 186, 199, 198, 200, 201, 202, 215, 214, 213, 216, 217, 218, 231, 230, 229, 232, 233, 234, 247, 246, 245, 248, 249, 250 };
int middarkgreenLEDs_pattern3[] = {50, 6, 3, 9, 11, 12, 22, 25, 24, 39, 40, 55, 54, 53, 42, 43, 36};
int brownLEDs_pattern3[] = {14, 17, 20, 21, 18, 19, 10, 5, 4, 30, 29, 28, 27, 26, 33, 37, 38, 41};

void setup() {
  delay(1000);
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.clear();
  FastLED.setBrightness(20);
  delay(500);
}

void setLEDColors(int* LEDs, int numLEDs, CRGB color) {
  for (int i = 0; i < numLEDs; i++) {
    leds[LEDs[i]] = color;
  }
}

void loop() {
  // Set pattern one
  setLEDColors(greenLEDs_pattern1, sizeof(greenLEDs_pattern1) / sizeof(greenLEDs_pattern1[0]), CRGB(35, 225, 36));
  setLEDColors(lightgreenLEDs_pattern1, sizeof(lightgreenLEDs_pattern1) / sizeof(lightgreenLEDs_pattern1[0]), CRGB(168, 230, 29));
  setLEDColors(blueLEDs_pattern1, sizeof(blueLEDs_pattern1) / sizeof(blueLEDs_pattern1[0]), CRGB(0, 183, 239));
  setLEDColors(yellowLEDs_pattern1, sizeof(yellowLEDs_pattern1) / sizeof(yellowLEDs_pattern1[0]), CRGB(255, 242, 0));
  setLEDColors(lightblueLEDs_pattern1, sizeof(lightblueLEDs_pattern1) / sizeof(lightblueLEDs_pattern1[0]), CRGB(153, 217, 234));
  setLEDColors(middarkgreenLEDs_pattern1, sizeof(middarkgreenLEDs_pattern1) / sizeof(middarkgreenLEDs_pattern1[0]), CRGB(0, 140, 0));
  setLEDColors(brownLEDs_pattern1, sizeof(brownLEDs_pattern1) / sizeof(brownLEDs_pattern1[0]), CRGB(139, 69, 19));

  // Wait for 1 seconds
  FastLED.show();
  delay(400);

  // Clear all LEDs
  FastLED.clear();

  // Set pattern 2
  setLEDColors(greenLEDs_pattern2, sizeof(greenLEDs_pattern2) / sizeof(greenLEDs_pattern2[0]), CRGB(35, 225, 36));
  setLEDColors(lightgreenLEDs_pattern2, sizeof(lightgreenLEDs_pattern2) / sizeof(lightgreenLEDs_pattern2[0]), CRGB(168, 230, 29));
  setLEDColors(blueLEDs_pattern2, sizeof(blueLEDs_pattern2) / sizeof(blueLEDs_pattern2[0]), CRGB(0, 183, 239));
  setLEDColors(yellowLEDs_pattern2, sizeof(yellowLEDs_pattern2) / sizeof(yellowLEDs_pattern2[0]), CRGB(255, 242, 0));
  setLEDColors(lightblueLEDs_pattern2, sizeof(lightblueLEDs_pattern2) / sizeof(lightblueLEDs_pattern2[0]), CRGB(153, 217, 234));
  setLEDColors(middarkgreenLEDs_pattern2, sizeof(middarkgreenLEDs_pattern2) / sizeof(middarkgreenLEDs_pattern2[0]), CRGB(0, 140, 0));
  setLEDColors(brownLEDs_pattern2, sizeof(brownLEDs_pattern2) / sizeof(brownLEDs_pattern2[0]), CRGB(139, 69, 19));

  // Wait for 1 seconds
  FastLED.show();
  delay(400);

  // Clear all LEDs
  FastLED.clear();

  // Set pattern 3
  setLEDColors(greenLEDs_pattern3, sizeof(greenLEDs_pattern3) / sizeof(greenLEDs_pattern3[0]), CRGB(35, 225, 36));
  setLEDColors(lightgreenLEDs_pattern3, sizeof(lightgreenLEDs_pattern3) / sizeof(lightgreenLEDs_pattern3[0]), CRGB(168, 230, 29));
  setLEDColors(blueLEDs_pattern3, sizeof(blueLEDs_pattern3) / sizeof(blueLEDs_pattern3[0]), CRGB(0, 183, 239));
  setLEDColors(yellowLEDs_pattern3, sizeof(yellowLEDs_pattern3) / sizeof(yellowLEDs_pattern3[0]), CRGB(255, 242, 0));
  setLEDColors(lightblueLEDs_pattern3, sizeof(lightblueLEDs_pattern3) / sizeof(lightblueLEDs_pattern3[0]), CRGB(153, 217, 234));
  setLEDColors(middarkgreenLEDs_pattern3, sizeof(middarkgreenLEDs_pattern3) / sizeof(middarkgreenLEDs_pattern3[0]), CRGB(0, 140, 0));
  setLEDColors(brownLEDs_pattern3, sizeof(brownLEDs_pattern3) / sizeof(brownLEDs_pattern3[0]), CRGB(139, 69, 19));

  // Wait for 1 seconds
  FastLED.show();
  delay(400);

  // Clear all LEDs
  FastLED.clear();
}
