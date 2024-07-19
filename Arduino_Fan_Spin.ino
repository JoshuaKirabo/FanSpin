#include <Adafruit_CircuitPlayground.h>

void setup()
  {
    CircuitPlayground.begin();
    CircuitPlayground.setBrightness(255); 
  }

void loop()
  {
    while(true)
      {
        if(CircuitPlayground.leftButton())
          {
            for(int i = 0; i<5; i++)
              {
                CircuitPlayground.setPixelColor(i, 255, 0, 0);
              } // for
            
            CircuitPlayground.strip.show();
          } // if
        else if(CircuitPlayground.rightButton())
          {
            for(int i = 5; i<10; i++)
              {
                CircuitPlayground.setPixelColor(i, 0, 0, 255);
              } // for

              CircuitPlayground.clearPixels();
              CircuitPlayground.strip.show();
          } // else if
        else
          {
            CircuitPlayground.clearPixels();
            CircuitPlayground.strip.show();
          }
      }
  }