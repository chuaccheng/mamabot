#include <Adafruit_ILI9341.h>
#include <Adafruit_STMPE610.h>
#include <Adafruit_GFX.h>

// For the Adafruit shield, these are the default.
#define TFT_DC 9
#define TFT_CS 10

#define RobotColour ILI9341_PINK

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
// If using the breakout, change pins as desired
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup() {
  // put your setup code here, to run once:
  tft.begin();

  tft.fillScreen(0xFFFF);
  tft.setRotation(1);

  tft.setTextSize(2);
  tft.setCursor(45,40);
  tft.setTextColor(ILI9341_BLACK);
  tft.println("Happy Mother's Day!");
  

  drawBigRobot(0XFD20);
  drawSmallRobot(ILI9341_PINK);
  loveHeart(ILI9341_RED);
  loveHeart2(ILI9341_RED);
  


}



void drawBigRobot(uint16_t colour){
  //big Robot
  tft.fillRect(60,80,90,80,colour);
  tft.fillRect(80,160,50,30,ILI9341_BLACK);
  
  //eyes


  //mouth
  tft.drawLine(102,145,110,145, 0xF800);
  tft.drawLine(102,146,110,146, 0xF800);
  tft.drawLine(102,147,110,147, 0xF800);
  

  
  tft.fillCircle(90,135,4,ILI9341_BLACK);
  
  tft.fillCircle(120,135,4,ILI9341_BLACK);
 }


  void drawSmallRobot(uint16_t colour){
      //small Robot
  tft.fillRect(170,130,50,40, colour);
  tft.fillRect(180,170,30,20, ILI9341_BLACK);

  //eyes
  tft.fillCircle(185,160,2,ILI9341_BLACK);
  tft.fillCircle(200,160,2,ILI9341_BLACK);


  }

uint16_t robotColour = ILI9341_BLUE;

void loop() {
  // put your main code here, to run repeatedly:
  //blink(robotColour);
  delay(200);
  drawBigRobot(ILI9341_YELLOW);
  drawSmallRobot(ILI9341_CYAN);
  loveHeart(ILI9341_MAROON);
  loveHeart2(ILI9341_RED);
  delay(200);
  drawBigRobot(ILI9341_ORANGE);
  drawSmallRobot(ILI9341_PINK);
  loveHeart(ILI9341_RED);
  loveHeart2(ILI9341_MAROON);
  delay(200);
}

void loveHeart(uint16_t colour)
{
  int x0 = 180;
  int x1 = 200;
  int y = 85;
  int r = 10;

  tft.fillCircle(x0,y,r,colour);
  tft.fillCircle(x1,y,r,colour);
  tft.fillTriangle(x0-r-1,y,x1+r,y,x0+r+1,y+(r*3), colour);
}

void loveHeart2(uint16_t colour)
{
  int x0 = 230;
  int x1 = 250;
  int y = 85;
  int r = 10;

  tft.fillCircle(x0,y,r,colour);
  tft.fillCircle(x1,y,r,colour);
  tft.fillTriangle(x0-r-1,y,x1+r,y,x0+r+1,y+(r*3), colour);
}

/*INTERACTIONS*/


