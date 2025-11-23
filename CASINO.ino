#include <LiquidCrystalRus.h>
long cash;
float k = 0;




constexpr uint8_t PIN_RS = 6;
constexpr uint8_t PIN_EN = 7;
constexpr uint8_t PIN_DB4 = 8;
constexpr uint8_t PIN_DB5 = 9;
constexpr uint8_t PIN_DB6 = 10;
constexpr uint8_t PIN_DB7 = 11;
 

unsigned int number = 0;

int x1;
int x2;
int x3;
int x4;
int x5;
int x6;
int x7;
int x8;
long win;
long stavka;

LiquidCrystalRus lcd(PIN_RS, PIN_EN, PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7);




void polo(){
  k=0;
  win=0;
  if (x1==x2==x3==x4==x5==x6==x7==x8){//8
    k = 500;
    
  }else{
    if(x1==x2==x3==x4==x5==x6==x7){//7
      if(k<500){
        k=100;
      }
    }else{
      if(x2==x3==x4==x5==x6==x7==x8){//7
        if(k<500){
          k=100;
        }
      }else{
        if(x1==x2==x3==x4==x5==x6){//6
        if(k<100){
          k=50;
        }
        }else{
        if(x2==x3==x4==x5==x6==x7){//6
          if(k<100){}
          k=50;
          }else{
          if(x3==x4==x5==x6==x7==x8){//6
            if(k<100){
              k=50;
            }
            }else{
            if(x1==x2==x3==x4==x5){//5
              if(k<50){
                k=20;
              }
              }else{
                {if(x2==x3==x4==x5==x6){//5
                  if(k<50){
                    k=20;
                  }
                }else{
                  if(x3==x4==x5==x6==x7){//5
                    if(k<50){
                      k=20;
                    }
                  }else{
                    if(x4==x5==x6==x7==x8){//5
                      if(k<50){
                        k=20;
                      }
                    }else{
                      if(x1==x2==x3==x4){//4
                        if(k<20){
                          k=10;
                        }
                      }else{
                        if(x2==x3==x4==x5){//4
                          if(k<20){
                            k=10;
                          }
                        }else{
                          if(x3==x4==x5==x6){//4
                            if(k<20){
                              k=10;
                            }
                          }else{
                            if(x4==x5==x6==x7){//4
                              if(k<20){
                                k=10;
                              }
                            }else{
                              if(x5==x6==x7==x8){//4
                                if(k<20){
                                  k=10;
                                }
                              }else{
                                if(x1==x2==x3){//3
                                  if(k<10){
                                    k = 2.5;
                                  }
                                }else{
                                  if(x2==x3==x4){//3
                                    if(k<10){
                                      k=2.5;
                                    }
                                  }else{
                                    {if(x3==x4==x5){//3
                                      if(k<10){
                                        k=2.5;
                                      }
                                    }else{
                                      if(x4==x5==x6){//3
                                        if(k<10){
                                          k=2.5;
                                        }
                                      }else{
                                        if(x5==x6==x7){//3
                                          if(k<10){
                                            k=2.5;
                                            Serial.println(k);
                                          }
                                        }else{
                                          if(x6==x7==x8){//3
                                            if(k<10){
                                              k=2.5;
                                            }
                                          }else{
                                            if(x1==x2){
                                              if(k<2){
                                                k=k+1.2;
                                              }
                                            }else{
                                              if(x2==x3){
                                                if(k<2){
                                                  k=k+1.2;
                                                };
                                              }else{
                                                if(x3==x4){
                                                  if(k<2){
                                                    k=k+1.2;
                                                    Serial.println(k);
                                                  }
                                                }else{
                                                  if(x4==x5){
                                                    if(k<2){
                                                      k=k+1.2;
                                                    }
                                                  }else{
                                                    if(x5==x6){
                                                      if(k<2){
                                                        k=k+1.2;
                                                        Serial.println(k);
                                                      }
                                                    
                                                    }else{
                                                      if(x6==x7){
                                                        if(k<2){
                                                          k=k+1.2;
                                                        }
                                                      }else{
                                                        if(x7==x8){
                                                          if(k<2){
                                                            k=k+1.2;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}  
    }
  Serial.println(k);
  win = stavka * k;
  cash= cash + win;

  lcd.setCursor(9, 0);
  if(win>0){
    lcd.print("+");
    lcd.print(win);
  }
  
}





void randomizer(){
  lcd.setCursor(9, 0);
  lcd.print("       ");
  
  
  
  cash = cash - stavka;
  lcd.setCursor(0, 0);
  
  lcd.print(cash);
  lcd.print("  ");
  
  lcd.setCursor(0, 1);
  lcd.print("########");
  delay(500);
  x1 = random(1, 10);
  x2 = random(1, 10);
  x3 = random(1, 10);
  x4 = random(1, 10);
  x5 = random(1, 10);
  x6 = random(1, 10);
  x7 = random(1, 10);
  x8 = random(1, 10);
  
  lcd.setCursor(0, 1);
  
  lcd.print(x1);
  delay(500);
  lcd.print(x2);
  delay(500);
  lcd.print(x3);
  delay(500);
  lcd.print(x4);
  delay(500);
  lcd.print(x5);
  delay(500);
  lcd.print(x6);
  delay(500);
  lcd.print(x7);
  delay(500);
  lcd.print(x8);
  number = number +1;
  polo();
}

void lose(){
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Вы проиграли");
  lcd.setCursor(0, 1);
  lcd.print(number);
  delay(3000);
  setup();
}



 
void setup() {
  pinMode(5, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  
Serial.begin(9600);

  randomSeed(analogRead(0));
  stavka = 100;
  cash=1000;
  bool nach = false;

lcd.begin(16, 2);
lcd.setCursor(0, 0);
lcd.print("Рулетка 777");
lcd.setCursor(0, 1);
lcd.print("Cтавка ");
  
  while(nach == false){
    
    lcd.setCursor(7, 1);
    lcd.print(cash);
    lcd.print("  ");

    if (digitalRead(12)== 1){
      cash -= 50;
    }
    delay (40);
    if (digitalRead(13)== 1){
      cash += 50;
    }
    delay (40);


    
    if (digitalRead(5)== 1){
      nach = true;
      lcd.clear();


      lcd.setCursor(0, 0);
      lcd.print(cash);
      lcd.setCursor(0, 1);
      randomizer();

      
    }
    delay (40);
  }
  
}
 
void loop() {
  lcd.setCursor(0, 0);
  
  lcd.print(cash);
  lcd.print(" ");
  
  
  if(cash<=0){
    lose();
  }
  
  if (digitalRead(12)== 1){
      stavka -= 1;
    }
    delay (40);

  if (digitalRead(13)== 1){
      stavka += 1;
    }
    delay (40);

  lcd.setCursor(9, 1);
  lcd.print("С:");
  lcd.print(stavka);
  lcd.print(" ");

  
  if(digitalRead(5)== 1){
    randomizer();
    
  }
  
  
}
