 int pin_Dig_in= 2;
  int pin_Dig_fin= 9;
  int pin_Anl_in= 1;
  int pin_Anl_fin= 8;

void setup() {
  Serial.begin(9600);


  
  pinMode(2, OUTPUT);    // set the switch pin to be an input
  pinMode(3, OUTPUT);    // set the switch pin to be an input
  pinMode(4, OUTPUT);    // set the switch pin to be an input
  pinMode(5, OUTPUT);    // set the switch pin to be an input
  pinMode(6, OUTPUT);    // set the switch pin to be an input
  pinMode(7, OUTPUT);    // set the switch pin to be an input
  pinMode(8, OUTPUT);    // set the switch pin to be an input
  pinMode(9, OUTPUT);    // set the switch pin to be an input
  pinMode(A1, INPUT);   // set the red LED pin to be an output
  pinMode(A2, INPUT);   // set the red LED pin to be an output
  pinMode(A3, INPUT);   // set the red LED pin to be an output
  pinMode(A4, INPUT);   // set the red LED pin to be an output
  pinMode(A5, INPUT);   // set the red LED pin to be an output
  pinMode(A6, INPUT);   // set the red LED pin to be an output
  pinMode(A7, INPUT);   // set the red LED pin to be an output
  pinMode(A8, INPUT);   // set the red LED pin to be an output
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}

void loop() {
  Serial.println("Holi");
 
  for (int a=pin_Dig_in; a<=pin_Dig_fin; a++){
      digitalWrite(a, HIGH);
      delay(100);
      for (int b=pin_Anl_in; b<=pin_Anl_fin; b++){
         int A  = analogRead(b);
         if (A>895){
            //Serial.print("("); Serial.print(b); Serial.print(",1) ");
            //Serial.print(1);
            Serial.print(A); Serial.print(" ");
            }
         else{
            //Serial.print(0);
            Serial.print(A); Serial.print(" ");
            }
      }
      Serial.println(" ");
      digitalWrite(a, LOW);
      delay(100);
    }
  delay(700);
 }
     
