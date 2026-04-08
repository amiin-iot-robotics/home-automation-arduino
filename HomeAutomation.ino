#include <Servo.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 
Servo servo;
int bt_data;

#define whitelamp 12
#define greenlamp 11
#define fan 10
#define socket 8
#define flamesensor 6
#define buzzer 5
#define green 4
#define red 3

void setup(){
  servo.attach(7);
  pinMode(whitelamp,OUTPUT);
  pinMode(greenlamp,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(socket,OUTPUT);
  pinMode(flamesensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);

  // lcd.init();
  lcd.begin(16,2);
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("HOME AUTOMATION");
    
  Serial.begin(9600); // initialize serial communication at 9600 bits per second: 
  digitalWrite(green,HIGH);
  delay(40);
      digitalWrite(whitelamp,HIGH);
    digitalWrite(socket,HIGH);
    digitalWrite(fan,HIGH);
    digitalWrite(greenlamp,HIGH);
}

void loop(){
int flameVal=digitalRead(flamesensor);
// Serial.println(flameVal);
if(flameVal==0){
  Serial.println('Zero');
  for(int i=0;i<4;i++){
  lcd.setCursor(0,1);
  lcd.print("Fire Detected!!!");
  digitalWrite(buzzer,LOW);
  digitalWrite(red,LOW);
  delay(500);
    digitalWrite(buzzer,HIGH);
  digitalWrite(red,HIGH);
  delay(500);
  }
}
else{
  // Serial.println("else");
    lcd.setCursor(0,1);
  lcd.print("No Fire Detected ");
  digitalWrite(buzzer,LOW);
  digitalWrite(red,LOW);
}

if(Serial.available() > 0){     
bt_data = Serial.read(); 
Serial.println(bt_data);
// //abcent of if(speed =bt_data) you get original code if not working  !!!
}      

     if(bt_data == 1){digitalWrite(whitelamp,HIGH);delay(20);}
else if(bt_data == 2){digitalWrite(whitelamp,LOW);delay(20);}  
else if(bt_data == 3){digitalWrite(greenlamp,HIGH);delay(20);} 
else if(bt_data == 4){digitalWrite(greenlamp,LOW);delay(20);} 
else if(bt_data == 5){digitalWrite(fan,HIGH);delay(20);; }     
else if(bt_data == 6){digitalWrite(fan,LOW);delay(20);}
else if(bt_data == 7){digitalWrite(socket,HIGH);delay(20);}   
else if(bt_data == 8){digitalWrite(socket,LOW);delay(20);}  

else if (bt_data == 9){
for(int i=0;i<90;i++){
 servo.write(i);
 delay(20);
}
bt_data=-1;
}
else if (bt_data == 10){
for(int i=90;i>0;i--){
 servo.write(i);
 delay(20);
}  
bt_data=-1;
}

////////////// start voice 
  else if(bt_data == 12){digitalWrite(whitelamp,HIGH);delay(20);}
else if(bt_data == 11){digitalWrite(whitelamp,LOW);delay(20);}  
else if(bt_data == 14){digitalWrite(greenlamp,HIGH);delay(20);} 
else if(bt_data == 13){digitalWrite(greenlamp,LOW);delay(20);} 
else if(bt_data == 16){digitalWrite(fan,HIGH);delay(20);; }     
else if(bt_data == 15){digitalWrite(fan,LOW);delay(20);}
else if(bt_data == 18){digitalWrite(socket,HIGH);delay(20);}   
else if(bt_data == 17){digitalWrite(socket,LOW);delay(20);}  

else if (bt_data == 19){
for(int i=0;i<90;i++){
 servo.write(i);
 delay(20);
}
bt_data=-1;
}
else if (bt_data == 20){
for(int i=90;i>0;i--){
 servo.write(i);
 delay(20);
}  
bt_data=-1;
}
  else if(bt_data == 22){
    digitalWrite(whitelamp,HIGH);
    digitalWrite(socket,HIGH);
    digitalWrite(fan,HIGH);
    digitalWrite(greenlamp,HIGH);

  }
    else if(bt_data == 21){
    digitalWrite(whitelamp,LOW);
    digitalWrite(socket,LOW);
    digitalWrite(fan,LOW);
    digitalWrite(greenlamp,LOW);

  }

delay(30);
}
