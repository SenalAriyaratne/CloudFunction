int led = D2;

void setup() 
{
    pinMode(led,OUTPUT);
    digitalWrite(led,LOW);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy",myhandler,ALL_DEVICES);

}

void myhandler(String event,String data)
{
    if ( data == "wave")
    {
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
        delay(500);
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
        delay(500);
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
    }
    else {
        digitalWrite(led,LOW);
    }
}
void loop() {

}
