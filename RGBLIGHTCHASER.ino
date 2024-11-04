/* 
 
RGB LIGHT CHASER 
 
This sketch is for the common cathode type of RGB LED, For common cathode, 255 means full color display and 0 means color is not displayed. 
It goes from red, blue and purple. 
The theme of this RGB light chaser program is digital output using PWM to control the brightness of the RGB LED. 
*/ 
 
void setup() // the setup function runs once when you press reset or power the board 
 
{  
 
pinMode(9, OUTPUT);  
pinMode(10, OUTPUT); 
pinMode(11, OUTPUT);  
 
}  
 
void loop() // Red color (full red, no green, no blue)  
 
{ 
analogWrite(9, 255); 
analogWrite(10, 0);  
analogWrite(11, 0);  
delay(1000); // Green color (no red, full green, no blue) 
 
 AnalogWrite(9, 0);  
analogWrite(10, 255);  
analogWrite(11, 0);  
delay(1000); // Blue color (no red, no green, full blue) 
 
 analogWrite(9, 0);  
analogWrite(10, 0);  
analogWrite(11, 255);  
delay(1000); // Purple color (full red, no green, full blue)  
 
analogWrite(9, 255);  
analogWrite(10, 0);  
analogWrite(11, 255);  
delay(1000); 
}

