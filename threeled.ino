// Bronte Jurgens	
// 217015344

int led1 = D6; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2


int led3 = D5;
uint8_t led_state1 = LOW;
uint8_t led_state2 = LOW;
uint8_t led_state3 = LOW;

// SYNTAX
bool success = Particle.function("funcKey", funcName);

// Cloud functions must return int and take one String
int funcName(String extra) {
  return 0;
}
 

void setup()
{
    
    pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);

  // register the cloud function
  Particle.function("Colour", ledColour);
}

void loop()
{
  // this loops forever
}

int ledColour(String colour)
{
    if (colour == "red")
  {
    led_state1 = !led_state1;
    digitalWrite(led1, led_state1);
    delay(1000);
        return 1;
    
      
  if (colour == "blue")
  {
    led_state2 = !led_state2;
    digitalWrite(led1, led_state2);
    delay(1000);
        return 1;
    
  } 
  if (colour == "green")
  {
 
   led_state3 = !led_state3;
    digitalWrite(led1, led_state3);
    delay(1000);
  	    return 1;
  } 
  else return -1;
    
}
}
