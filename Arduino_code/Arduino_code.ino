const int in_1 =  30;
const int in_2 =  31;
const int in_3 =  33;
const int in_4 =  32;
const int in_5 =  34;
const int in_6 =  35;
const int in_7 =  37;
const int in_8 =  36;



//For providing logic to L298 IC to choose the direction of the DC motor 

void setup()
{
pinMode(in_1,OUTPUT) ;  //Logic pins are also set as output
pinMode(in_2,OUTPUT) ;
pinMode(in_3,OUTPUT) ;
pinMode(in_4,OUTPUT) ;
pinMode(in_5,OUTPUT) ;
pinMode(in_6,OUTPUT) ;
pinMode(in_7,OUTPUT) ;
pinMode(in_8,OUTPUT) ;





// Write a high or low value to a specific digital pin

// Left folding pad
digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,LOW) ;
delay(550) ;     


digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,HIGH) ;
delay(100) ;


digitalWrite(in_1,LOW) ;
digitalWrite(in_2,HIGH) ;
delay(435) ;


digitalWrite(in_1,HIGH) ;
digitalWrite(in_2,HIGH) ;
delay(100) ;


//_______________________________________

// Right folding pad
digitalWrite(in_3,HIGH) ;
digitalWrite(in_4,LOW) ;
delay(525) ;     


digitalWrite(in_3,HIGH) ;
digitalWrite(in_4,HIGH) ;
delay(100) ;


digitalWrite(in_3,LOW) ;
digitalWrite(in_4,HIGH) ;
delay(435) ;


digitalWrite(in_3,HIGH) ;
digitalWrite(in_4,HIGH) ;
delay(100) ;

//_________________________________________

// Back flap
digitalWrite(in_5,HIGH) ;
digitalWrite(in_6,LOW) ;
delay(450) ;     


digitalWrite(in_5,HIGH) ;
digitalWrite(in_6,HIGH) ;
delay(100) ;


digitalWrite(in_5,LOW) ;
digitalWrite(in_6,HIGH) ;
delay(435) ;


digitalWrite(in_5,HIGH) ;
digitalWrite(in_6,HIGH) ;
delay(100) ;


//__________________________________

// Opening for clothes to fall through
digitalWrite(in_7,HIGH) ;
digitalWrite(in_8,LOW) ;
delay(850) ;     


digitalWrite(in_7,HIGH) ;
digitalWrite(in_8,HIGH) ;
delay(200) ;


digitalWrite(in_7,LOW) ;
digitalWrite(in_8,HIGH) ;
delay(790) ;


digitalWrite(in_7,HIGH) ;
digitalWrite(in_8,HIGH) ;
delay(20000) ;




}

void loop()
{


}

