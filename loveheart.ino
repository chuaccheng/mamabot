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
