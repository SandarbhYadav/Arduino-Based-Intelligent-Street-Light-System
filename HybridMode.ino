int led3=9;
int led2=6;
int led1 =5;
int led4=10;
int ldr=A0;
int led5=11;
void setup() {
Serial.begin (9600);
//pinMode (led3,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led1,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (led4,OUTPUT);
pinMode (led5,OUTPUT);
pinMode (ldr,INPUT);
}

void loop() {
int det=500;
static int a=0,b=0,c=0,d=0,a1=0,b1=0,flag=0,flag1=0,flag2=0,flag3=0,flag4=0,e=0,f=0,c1,d1,d3;
b=0;
if(analogRead(ldr)<300){
  digitalWrite(led5,HIGH);
if(analogRead(A1)<det && flag==0)
{digitalWrite(led1,HIGH);
  a++;
  if(a<1)
{a=1;
  }
flag=1;
a1=1000;
}
else{
  if(analogRead(A1)>=det)
  {
    flag=0;
    a1--;
    if(a1==0||a<=0)
    {a=0;
      digitalWrite(led1,LOW);
    }
    }
}
if(analogRead(A2)<det && flag1==0)
{ c++;
if(c<1)
{c=1;
}
  digitalWrite(led2,HIGH);
 a--;
 flag1=1;
  b1=1000;
  }
  else
  {
  if(analogRead(A2)>=det)
{flag1=0;
      b1--;
      if(b1==0||c<=0)
      {c=0;
        digitalWrite(led2,LOW);
      }
    }
  }
if(analogRead(A3)<det && flag2==0)
{ d++;
if(d<1)  
{d=1;
}
  digitalWrite(led3,HIGH);
 c--;
 flag2=1;
  c1=1000;
  }
  else
  {
  if(analogRead(A3)>=det)
{flag2=0;
      c1--;
      if(c1==0||d<=0)
      {d=0;
        digitalWrite(led3,LOW);
      }
    }
  }
if(analogRead(A4)<det && flag3==0)
{ e++;
if(e<1)
{e=1;
}
  digitalWrite(led4,HIGH);
 d--;
 flag3=1;
  d1=1000;
  }
  else
  {
  if(analogRead(A4)>=det)
{flag3=0;
      d1--;
      if(d1==0||e<=0)
      {e=0;
        digitalWrite(led4,LOW);
      }
    }
  }
  if(analogRead(A5)<det&&flag4==0)
  {
    e--;
    flag4=1;
    }
    else{
      if(analogRead(A5)>=det)
      {flag4=0;
       }
      }    
}
else{
   digitalWrite(led5,LOW);
     
      digitalWrite(led4,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led1,LOW);
}
    Serial.print("a=");
    Serial.println(analogRead(ldr));
    Serial.print("b=");
    Serial.println(c);
delay(10);
} 
