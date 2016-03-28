/*
Welcome to the Twitter clock!

instead of time progressing by seconds, it progresses by tweets. This clock represents, in a different way, the 
progression of our society based upon how much data we create and consume.

This clock moves whenever someone tweets with #trump attached.

 here is the IFTTT recipe:   https://ifttt.com/recipes/402057-twitter-clock
*/


const int motor = D7;
void setup() {
  
  
  Particle.function("tweetMove", tweetMove); // the function called by IFTTT
  
  pinMode(motor, OUTPUT); // both the motor and the little blue light will light up when activated. good for debugging
 // Serial.begin(19200);  I used this for debugging as I went allong. The Serial.println commands were checkpoints in the for() loop
}

void loop() {
 //didnt even need   
}
    
    
int tweetMove(String) {
  for (int br = 0; br < 2; br ++) { // if the state is active
   // Serial.println("Doing the thing");   // Checkpoint 1
    digitalWrite(motor, HIGH);//turn the hand of the clock
    delay(50);            // for one second
    digitalWrite(motor, LOW);// and then stop the clock
  //  Serial.println("Done the thing");    // Checkpoint 2
  }
}

