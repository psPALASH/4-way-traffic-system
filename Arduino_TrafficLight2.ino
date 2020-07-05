const int greenpin1 = 20;
const int yellowpin1 = 21;
const int redpin1 =22;
const int greenpin2 = 23;
const int yellowpin2 = 24;
const int redpin2 = 25;
const int greenpin3 = 26;
const int yellowpin3 = 27;
const int redpin3 = 28;
const int greenpin4 = 29;
const int yellowpin4 = 30;
const int redpin4 =31;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenpin1,OUTPUT);
  pinMode(yellowpin1,OUTPUT);
  pinMode(redpin1,OUTPUT);
  pinMode(greenpin2,OUTPUT);
  pinMode(yellowpin2,OUTPUT);
  pinMode(redpin2,OUTPUT);
  pinMode(greenpin3,OUTPUT);
  pinMode(yellowpin3,OUTPUT);
  pinMode(redpin3,OUTPUT);
  pinMode(greenpin4,OUTPUT);
  pinMode(yellowpin4,OUTPUT);
  pinMode(redpin4,OUTPUT);

  digitalWrite(redpin1,LOW);
  delay(100);
  digitalWrite(redpin2,LOW);
  delay(100);
  digitalWrite(redpin3,LOW);
  delay(100);
  digitalWrite(redpin4,LOW);
  delay(100);
  digitalWrite(yellowpin1,LOW);
  delay(100);
  digitalWrite(yellowpin2,LOW);
  delay(100);
  digitalWrite(yellowpin3,LOW);
  delay(100);
  digitalWrite(yellowpin4,LOW);
  delay(100);
  digitalWrite(greenpin1,LOW);
  delay(100);
  digitalWrite(greenpin2,LOW);
  delay(100);
  digitalWrite(greenpin3,LOW);
  delay(100);
  digitalWrite(greenpin4,LOW);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
lane1();
lane2();
lane3();
lane4();
}

void lane1()
{
  digitalWrite(redpin1, LOW);
  digitalWrite(greenpin1,HIGH);
  delay(5000);
  digitalWrite(greenpin1,LOW);
  digitalWrite(yellowpin1, HIGH);
  delay(1000);
  digitalWrite(yellowpin1, LOW);
  digitalWrite(redpin1, HIGH);
}

void lane2()
{
  digitalWrite(redpin2, LOW);
  digitalWrite(greenpin2,HIGH);
  delay(5000);
  digitalWrite(greenpin2,LOW);
  digitalWrite(yellowpin2, HIGH);
  delay(1000);
  digitalWrite(yellowpin2, LOW);
  digitalWrite(redpin2, HIGH);
}

void lane3()
{
  digitalWrite(redpin3, LOW);
  digitalWrite(greenpin3,HIGH);
  delay(5000);
  digitalWrite(greenpin3,LOW);
  digitalWrite(yellowpin3, HIGH);
  delay(1000);
  digitalWrite(yellowpin3, LOW);
  digitalWrite(redpin3, HIGH);
}

void lane4()
{
  digitalWrite(redpin4, LOW);
  digitalWrite(greenpin4,HIGH);
  delay(5000);
  digitalWrite(greenpin4,LOW);
  digitalWrite(yellowpin4, HIGH);
  delay(1000);
  digitalWrite(yellowpin4, LOW);
  digitalWrite(redpin4, HIGH);
}
