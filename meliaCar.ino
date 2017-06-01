int MOTOR_LA = 1;
int MOTOR_LB = 2;
int MOTOR_RA = 3;
int MOTOR_RB = 4;

String msg;
void motorLeftForward();
void motorRightForward();
void motorLeftBackward();
void motorRightBackward();
void stopLeftMotor();
void stopRightMotor();
void test();

   
void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR_LA, OUTPUT);
  pinMode(MOTOR_LB, OUTPUT);
  pinMode(MOTOR_RA, OUTPUT);
  pinMode(MOTOR_RB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
   msg = Serial.readString();
   if(msg == )
  }
  
}

void test(){
  motorLeftForward();
  delay(3000);
  motorLeftBackward();
  delay(3000);
  stopLeftMotor();
  motorRightForward();
  delay(3000);
  motorRightBackward();
  delay(3000);
  stopRightMotor();
}



void motorLeftForward(){
  digitalWrite(MOTOR_LA, LOW);
  digitalWrite(MOTOR_LB, HIGH);
}


void motorRightForward(){
  digitalWrite(MOTOR_RA, LOW);
  digitalWrite(MOTOR_RB, HIGH);
}


void motorLeftBackward(){
  digitalWrite(MOTOR_LA, HIGH);
  digitalWrite(MOTOR_LB, LOW);
}


void motorRightBackward(){
  digitalWrite(MOTOR_RA, HIGH);
  digitalWrite(MOTOR_RB, LOW);
}


void stopLeftMotor(){
  digitalWrite(MOTOR_LA, LOW);
  digitalWrite(MOTOR_LB, LOW);
}

void stopRightMotor(){
  digitalWrite(MOTOR_RA, LOW);
  digitalWrite(MOTOR_RB, LOW);
}

