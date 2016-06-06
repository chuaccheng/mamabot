  void drawSmallRobot(uint16_t colour){
      //small Robot
  tft.fillRect(170,130,50,40, colour);
  tft.fillRect(180,170,30,20, ILI9341_BLACK);

  //eyes
  tft.fillCircle(185,160,2,ILI9341_BLACK);
  tft.fillCircle(200,160,2,ILI9341_BLACK);


  }
