#define SWITCHES A2 //switches/locked in
#define Y A1 // input y
#define X A0 // input x
#define PIN 1
#define STRATEGYS 4
#include "GameMechanics.h"
#include "Coop.h"
#include "Defect.h"
#include "Grudge.h"
#include "Random.h"
#include "TitForTat.h"
#include "stdlib.h"
#include <Wire.h>
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int get_analog_input(int pin)
{ 
  //float digital_output= float(analogRead(pin)) / 5*(1024);
  float analog_voltage = analogRead(pin);
  //return analog_voltage;
  if (analog_voltage > 400)
  {
    return 1;
  }
  else
  {
    return 0;
  }
 
}

void print_array(int arr[], int arr_size){
    for(int i = 0; i < arr_size; i++){
      Serial.print(arr[i]); Serial.print(" ");
    }
  }

int inputs_to_code(int d1, int d0){
  int num = 2*d1 + 1*d0;
  return num; 
  }
  
void setup() 
{
  /*int rand= random(STRATEGYS);
  if (rand == 0){
    Coop machine = Coop(PIN);
  }
  else if (rand == 1){
    Defect machine = Defect(PIN);
  }
  else if (rand == 2){
    Grudge machine = Grudge(PIN);
  }
  else if (rand == 3){
    Random machine = Random(PIN);
  }
  else{
    TitForTat machine = TitForTat(PIN);
  }*/
  
  Serial.begin(9600);
 
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("PROGRAMMER'S DILEMMA");
  for (int positionCounter = 0; positionCounter < 5; positionCounter++) {
    // scroll one position right:
    delay(1000);
    lcd.scrollDisplayLeft();
    // wait a bit
  }
  delay(2000);
  lcd.clear();

}

int timer = 10; 
int num_rounds = 1;
int A_score = 0;
int C_score = 0;
int array_A[8];
int array_C[8];
bool user_input;

void gameplay(){
   
}

void loop() 
{
 lcd.clear();
 delay(2000);
 lcd.print("Round "); lcd.print(num_rounds); 
 timer  = 10;
 while(num_rounds <= 8){
   lcd.setCursor(1, 2);
   lcd.print(timer);
   lcd.print("  ");
   int A= get_analog_input(A0);
   int C= get_analog_input(A1);
   int Push1= get_analog_input(A2);
   int Push2= get_analog_input(A3);
   
   if((Push1 && Push2)||(timer == 0)){
      int case_code = inputs_to_code(C, A);
      switch(case_code){
        case 0:
          lcd.clear();
          delay(500);
          lcd.print("Both defect.");
          delay(3000);
          A_score += 1;
          C_score += 1;
          array_A[num_rounds] = 0;
          array_C[num_rounds] = 0;
          break;
        case 1:
          lcd.clear();
          delay(500);
          lcd.print("Clarence defects.");
          delay(3000);
          A_score += 0;
          C_score += 5;
          array_A[num_rounds] = 1;
          array_C[num_rounds] = 0;
          break;
        case 2:
          lcd.clear();
          delay(500);
          lcd.print("Aldron defects.");
          delay(3000);
          A_score += 5;
          C_score += 0;
          array_A[num_rounds] = 0;
          array_C[num_rounds] = 1;
          break;
        case 3:
          lcd.clear();
          delay(500);
          lcd.print("Both co-operate.");
          delay(3000);
          A_score += 3;
          C_score += 3;
          array_A[num_rounds] = 1;
          array_C[num_rounds] = 1;
          break; 
      }
      Serial.print("Aldron Score: "); Serial.println(A_score); 
      Serial.print("Clarence Score: "); Serial.println(C_score);
      delay(100);
      break;
    }
    delay(1000);
    timer--;
  } 
 num_rounds++;

 if(num_rounds == 9){
     lcd.clear();
     Serial.print("Aldron's history: ");
     print_array(array_A, 8);
     Serial.print("Clarence's history: ");
     print_array(array_C, 8);
     if(A_score > C_score){
      lcd.print("Aldron wins!"); 
      delay(1000);
      exit(1);
     }
     else if(A_score < C_score){
      lcd.print("Clarence wins!");
      delay(1000);
      exit(1);
     }
     else{
      lcd.print("It's a tie!");
      delay(1000);
      exit(1);
     }

  }

  delay(5000); // delay 5 seconds to allow user to make choice
  //user_input=get_analog_input(x);

  


  


}
