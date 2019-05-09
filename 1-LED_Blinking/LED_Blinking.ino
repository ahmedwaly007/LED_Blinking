          
          void setup()
          {
            pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as output pin
          }
          
          void loop() 
          {
            digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level but actually the LED is on; this is becauseit is active low on the ESP-01)
            delay(1000);  
            digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
            delay(1000); 
          }
            
