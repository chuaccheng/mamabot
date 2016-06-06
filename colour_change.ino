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
