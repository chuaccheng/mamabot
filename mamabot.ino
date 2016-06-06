

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

