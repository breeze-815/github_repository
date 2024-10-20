int L1_IN1 = 4;int L1_IN2 = 2;int L1_ENA = 6;//左前轮
int R1_IN1 = 7;int R1_IN2 = 5;int R1_ENA = 3;//右前轮
int L2_IN1 = 12;int L2_IN2 = 13;int L2_ENA = 11;//左后轮
int R2_IN1 = 8;int R2_IN2 = 9;int R2_ENA = 10;//右后轮

void setup() {
  // put your setup code here, to run once:
  pinMode(L1_IN1, OUTPUT);pinMode(L1_IN2, OUTPUT);pinMode(L1_ENA, OUTPUT);
  pinMode(R1_IN1, OUTPUT);pinMode(R1_IN2, OUTPUT);pinMode(R1_ENA, OUTPUT);
  pinMode(L2_IN1, OUTPUT);pinMode(L2_IN2, OUTPUT);pinMode(L2_ENA, OUTPUT);
  pinMode(R2_IN1, OUTPUT);pinMode(R2_IN2, OUTPUT);pinMode(R2_ENA, OUTPUT);
}

void L1_forward(int sp)//左前轮前进
{
  digitalWrite(L1_IN1,LOW);
  digitalWrite(L1_IN2,HIGH);
  analogWrite(L1_ENA,sp);
}
void R1_forward(int sp)//右前轮前进
{
  digitalWrite(R1_IN1,HIGH);
  digitalWrite(R1_IN2,LOW);
  analogWrite(R1_ENA,sp);
}
void L2_forward(int sp)//左后轮前进
{
  digitalWrite(L2_IN1,HIGH);
  digitalWrite(L2_IN2,LOW);
  analogWrite(L2_ENA,sp);
}
void R2_forward(int sp)//右后轮前进
{
  digitalWrite(R2_IN1,LOW);
  digitalWrite(R2_IN2,HIGH);
  analogWrite(R2_ENA,sp);
}
void allstop()
{
  digitalWrite(L1_IN1,LOW);
  digitalWrite(L1_IN2,LOW);  
  digitalWrite(R1_IN1,LOW);
  digitalWrite(R1_IN2,LOW);
  digitalWrite(L2_IN1,LOW);
  digitalWrite(L2_IN2,LOW);
  digitalWrite(R2_IN1,LOW);
  digitalWrite(R2_IN2,LOW);
}
void L1_backward(int sp)//左前轮后退
{
  digitalWrite(L1_IN1,HIGH);
  digitalWrite(L1_IN2,LOW);
  analogWrite(L1_ENA,sp);
}
void R1_backward(int sp)//右前轮后退
{
  digitalWrite(R1_IN1,LOW);
  digitalWrite(R1_IN2,HIGH);
  analogWrite(R1_ENA,sp);
}
void L2_backward(int sp)//左后轮后退
{
  digitalWrite(L2_IN1,LOW);
  digitalWrite(L2_IN2,HIGH);
  analogWrite(L2_ENA,sp);
}
void R2_backward(int sp)//右后轮后退
{
  digitalWrite(R2_IN1,HIGH);
  digitalWrite(R2_IN2,LOW);
  analogWrite(R2_ENA,sp);
}

void loop() {
  // /*前进*/
  L1_forward(10);
  R1_forward(10);
  L2_forward(10);
  R2_forward(10);
  delay(1500);
  allstop();
  delay(1500);

//    /*后退*/
  L1_backward(10);
  R1_backward(10);
  L2_backward(10);
  R2_backward(10);
  delay(1500);
  allstop();
  delay(1500);
  
//   /*顺时针原地旋转*/
  L1_forward(200);
  R1_backward(200);
  L2_forward(200);
  R2_backward(200);
  delay(1500);
  allstop();
  delay(1500);

//   /*逆时针原地旋转*/
  L1_backward(200);
  R1_forward(200);
  L2_backward(200);
  R2_forward(200);
  delay(1500);
  allstop();
  delay(1500);

//   /*左边平移*/
  L1_backward(15);
  R1_forward(15);
  L2_forward(15);
  R2_backward(15);
  delay(1500);
  allstop();
  delay(1500);

//   /*右边平移*/
  L1_forward(15);
  R1_backward(15);
  L2_backward(15);
  R2_forward(15);
  delay(1500);
  allstop();
  delay(1500);
  
//   /*斜向左上方*/
  R1_forward(15);
  L2_forward(15);
  delay(1500);
  allstop();
  delay(1500);
  
//   /*斜向右上方*/
  L1_forward(15);
  R2_forward(15);
  delay(1500);
  allstop();
  delay(1500);
  
//   /*斜向左下方*/
  L1_backward(15);
  R2_backward(15);
  delay(1500);
  allstop();
  delay(1500);
  
//   /*斜向右下方*/
  R1_backward(15);
  L2_backward(15);
  delay(1500);
  allstop();
  delay(1500);
}