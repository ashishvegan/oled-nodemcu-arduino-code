#include<Adafruit_SSD1306.h>
#include<Wire.h>
#define RESET_PIN LED_BUILTIN
Adafruit_SSD1306 oled(RESET_PIN);
int count = 1;
void setup()
{
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.display();
  delay(1000);
  oled.setTextColor(WHITE);
  oled.clearDisplay();
}
void loop()
{
  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(0,0);
  oled.print("COUNTER");
  oled.println();
  oled.print(count);
  oled.display();
  delay(50);
  count++;
}
