
#include<LiquidCrystal.h>

#define led1 12 //중
#define led2 3 //임
#define led3 4 //무
#define led4 7 //황
#define led5 8 //태
#define led6 9 //높중

int step=0;
int btn1=5; //1 
int btn2=6; //2

 
int state1=0;
int state2=0;

LiquidCrystal lcd(3,4,10,11,12,13);



void tone1(int time);
void tone2(int time);
void tone3(int time);
void tone4(int time);
void tone5(int time);
void tone6(int time);


void tone1(int time){
  int t=time;
  digitalWrite(led1, HIGH);
  Serial.println("중");
   delay(t-100);
   digitalWrite(led1, LOW);
   delay(100);
 }
void tone2(int time){
  int t=time;
  digitalWrite(led2, HIGH);
  Serial.println("임");
  delay(t-100);//2
  digitalWrite(led2, LOW);
  delay(100);
 }
 void tone3(int time){
  int t=time;
  digitalWrite(led3, HIGH);
  Serial.println("무");
  delay(t-100);//1
  digitalWrite(led3, LOW);
   delay(100);
 }
void tone4(int time){
  int t=time;
  digitalWrite(led4, HIGH);
  Serial.println("황");
  delay(t-100);//1
  digitalWrite(led4, LOW);
  delay(100);
 }
 void tone5(int time){
    int t=time;
    digitalWrite(led5, HIGH);
    Serial.println("태");
   delay(t-100);//1
   digitalWrite(led5, LOW);
   delay(100);
 }
  void tone6(int time){
    int t=time;
    digitalWrite(led6, HIGH);
    Serial.println("높중");
   delay(t-100);//1
   digitalWrite(led6, LOW);
   delay(100);
 }


void song1(){
 lcd.clear();
   lcd.setCursor(0,0);
    lcd.print("Playing Song1");
  Serial.println("song1<아리랑>: 시작!!");
   digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(2000);
  tone1(1500); 
  tone2(500);
  tone1(500);
  tone2(500);

  tone3(1500);
  tone4(500);
  tone3(500);
  tone4(500);

  tone5(1000);
  tone4(500);
  tone5(500);
  tone3(500);
  tone2(500);

  tone1(1500);
  tone2(500);
  tone1(1000);

  tone3(1500);
  tone4(500);
  tone3(500);
  tone4(500);

  tone5(500);
  tone4(500);
  tone3(500);
  tone2(500);
  tone1(500);
  tone2(500);

  tone3(1500);
  tone4(500);
  tone3(1000);

  tone3(3000);

  tone6(2000);
  tone6(1000);

  tone6(1000);
  tone5(1000);
  tone4(1000);

  tone5(1000);
  tone4(500);
  tone5(500);
  tone3(500);
  tone2(500);

  tone1(1500);
  tone2(500);
  tone1(1000);

  tone3(1500);
  tone4(500);
  tone3(500);
  tone4(500);

  tone5(500);
  tone4(500);
  tone3(500);
  tone2(500);
  tone1(500);
  tone2(500);

  tone3(1500);
  tone4(500);
  tone3(1000);

  tone3(3000);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    
    Serial.println("song1 clear");
      lcd.clear();
  lcd.print("set");
  delay(2000);
  setup();
}


void song2(){
  
 lcd.clear();
   lcd.setCursor(0,0);
    lcd.print("Playing Song2");
  Serial.println("song2<홀로 아리랑>: 시작!!");
/////////
  digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
     digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(2000);
    tone1(500);
    tone2(500); 
    tone3(1000);
    tone3(1000);

    tone4(500);
    tone5(500); 
    tone5(1000);
    tone4(1000);

    tone3(1000);
    tone4(500);
    tone3(500);
    tone2(250);
    tone1(250);
    tone2(500);

    tone1(2000);
    delay(1000);

    tone5(500);
    tone6(500);
    tone6(1000);
    tone6(1000);
    
    tone5(500);
    tone5(500);
    tone4(1000);
    tone3(1000);
    
    tone5(500);
    tone5(500);
    tone4(1000);
    tone3(500);
    tone4(500);

    tone4(2000);
    delay(1000);

    tone6(1000);
    tone6(1000);
    tone6(1000);
    
    tone5(1000);
    tone4(1000);
    tone3(1000);

    tone5(1000);
    tone4(500);
    tone3(500);
    tone2(250);
    tone1(250);
    tone2(500);

    tone1(2000);
    delay(1000);

    tone3(1000);
    tone3(1000);
    tone4(1000);

    tone5(1000);
    tone4(1000);
    tone3(1000);

    tone2(1500);
    tone1(500);
    tone2(500);
    tone3(500);

    tone3(2000);
    delay(1000);
        
//////////////
  
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    
    Serial.println("song2 clear");
  lcd.clear();
  lcd.print("set");
  delay(2000);
  setup();
}


void ready_song1(){
  lcd.clear();
   lcd.setCursor(0,0);
    lcd.print("Song1");
    
   lcd.setCursor(0,1);
    lcd.print("1)Play");
    step=2;
  }

  void ready_song2(){
  lcd.clear();
   lcd.setCursor(0,0);
    lcd.print("Song2");
    
   lcd.setCursor(0,1);
    lcd.print("1)Play");
    step=2;
  }

void SelectSong(){
  
    lcd.setCursor(0,0);
    lcd.print("Select Song");
    lcd.setCursor(0,1);
    lcd.print("1)SONG1 2)SONG2");
    step=1;

  }
void setup() {
  // put your setup code here, to run once:
  step=0;
   Serial.begin(9600);
   Serial.println("start");
    state1=HIGH;
  state2=HIGH;
     pinMode(btn1,INPUT_PULLUP);
   pinMode(btn2, INPUT_PULLUP);
  

   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   pinMode(led6, OUTPUT);
  
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Game start");
  
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    delay(2000);
 

    
   Serial.println("loopstart");
}

void loop() {
 

   state1=HIGH;
    state2=HIGH;
     
  state1 = digitalRead(btn1);
  state2 = digitalRead(btn2);    
    
  if(state1 ==LOW&&step==0){
    SelectSong();
    
   Serial.println(step);
   state1=HIGH;
    state2=HIGH;
    delay(2000);
  } 
  
   state1 = digitalRead(btn1);
  state2 = digitalRead(btn2);    
  if(state1 ==LOW&&step==1){
   delay(1000);
    ready_song1();
     state1=HIGH;
    state2=HIGH;
    delay(2000);
  }

  else if(state2 ==LOW&&step==1){
    delay(1000);
    ready_song2();
     state1=HIGH;
    state2=HIGH;
    delay(2000);
    }
   state1 = digitalRead(btn1);
  state2 = digitalRead(btn2);    
    

  if(state1 ==LOW&&step==2){
   delay(1000);
  song1();
  }
  else if(state2 ==LOW&&step==2){
   delay(1000);
  song2();
  }

 
  //delay(10000);
// lcd.clear();
  
}