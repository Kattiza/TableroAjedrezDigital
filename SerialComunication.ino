
  int pin_Dig_in= 2;
  int pin_Dig_fin= 9;
  int pin_Anl_in= 1;
  int pin_Anl_fin= 8;

  int m[8][8];

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

  m[0][0]= 1; m[0][1]= 1; m[0][2]= 1; m[0][3]= 1; m[0][4]= 1; m[0][5]= 1; m[0][6]= 1; m[0][7]= 1; 
  m[1][0]= 1; m[1][1]= 1; m[1][2]= 1; m[1][3]= 1; m[1][4]= 1; m[1][5]= 1; m[1][6]= 1; m[1][7]= 1;
  m[2][0]= 0; m[2][1]= 0; m[2][2]= 0; m[2][3]= 0; m[2][4]= 0; m[2][5]= 0; m[2][6]= 0; m[2][7]= 0;
  m[3][0]= 0; m[3][1]= 0; m[3][2]= 0; m[3][3]= 0; m[3][4]= 0; m[3][5]= 0; m[3][6]= 0; m[3][7]= 0;
  m[4][0]= 0; m[4][1]= 0; m[4][2]= 0; m[4][3]= 0; m[4][4]= 0; m[4][5]= 0; m[4][6]= 0; m[4][7]= 0;
  m[5][0]= 0; m[5][1]= 0; m[5][2]= 0; m[5][3]= 0; m[5][4]= 0; m[5][5]= 0; m[5][6]= 0; m[5][7]= 0;
  m[6][0]= 1; m[6][1]= 1; m[6][2]= 1; m[6][3]= 1; m[6][4]= 1; m[6][5]= 1; m[6][6]= 1; m[6][7]= 1;
  m[7][0]= 1; m[7][1]= 1; m[7][2]= 1; m[7][3]= 1; m[7][4]= 1; m[7][5]= 1; m[7][6]= 1; m[7][7]= 1;

 }
  

void loop() {
  //Serial.println("Holi");
 
  for (int a=pin_Dig_in; a<=pin_Dig_fin; a++){
      digitalWrite(a, HIGH);
      delay(80);
      for (int b=pin_Anl_in; b<=pin_Anl_fin; b++){
         int A  = analogRead(b);
         if (A>895 && m[a-2][b-1]==0){
            Serial.print(a-1); Serial.print(","); Serial.println(b);
            m[a-2][b-1]=1;
            }
            
         else if (A<=895 && m[a-2][b-1]==1){
            Serial.print(a-1); Serial.print(","); Serial.println(b);
            m[a-2][b-1]=0;
            }
         //else{
            //Serial.print(0);
           // }
      }
      //Serial.println(" ");
      digitalWrite(a, LOW);
      delay(80);
    }
  delay(700);
 }  

