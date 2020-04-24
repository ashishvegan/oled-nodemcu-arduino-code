#include<Adafruit_SSD1306.h>
#include<Wire.h>
#define RESET_PIN LED_BUILTIN
Adafruit_SSD1306 oled(RESET_PIN);
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
  oled.setCursor(0, 0);
  oled.print("SISTec, GN");
  oled.display();
  delay(400);
  oled.setCursor(0, 18);
  oled.print("PREPARE &");
  oled.display();
  delay(400);
  oled.println();
  oled.print("DON'T");
  oled.display();
  delay(400);
  oled.println();
  oled.print("PANIC");
  oled.display();
  delay(1000);

  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(0, 0);
  oled.print("SISTec, GN");
  oled.display();
  delay(400);
  oled.setCursor(0, 18);
  oled.print("FIGHT");
  oled.setTextSize(1);
  oled.setCursor(70, 22);
  oled.print("AGAINST");
  oled.display();
  oled.setTextSize(2);
  delay(400);
  oled.setCursor(0,34);
  oled.print("CORONA");
  oled.display();
  delay(400);
  oled.println();
  oled.print("VIRUS");
  oled.display();
  delay(1000);

  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(0, 0);
  oled.print("SISTec, GN");
  oled.display();
  delay(400);
  oled.setCursor(0, 18);
  oled.print("STAY SAFE");
  oled.display();
  delay(400);
  oled.println();
  oled.print("STAY AT");
  oled.display();
  delay(400);
  oled.println();
  oled.print("HOME");
  oled.display();
  delay(1000);

  oled.clearDisplay();
  oled.setTextSize(2);
  oled.setCursor(28, 0);
  oled.print("MADE BY");
  oled.display();
  delay(400);
  oled.setCursor(30, 18);
  oled.print("ASHISH");
  oled.display();
  delay(400);
  oled.println();
  oled.setCursor(30, 36);
  oled.print("LABADE");
  oled.display();
  delay(400);
  oled.println();
  oled.setTextSize(1);
  oled.setCursor(10, 55);
  oled.print("www.ashishvegan.com");
  oled.display();
  delay(1000);

}
