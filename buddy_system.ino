int led = D6;

void myHandler(const char *event, const char *data);

void setup() {
	pinMode(led,OUTPUT);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}

void loop() {
    
}

void myHandler(const char *event, const char *data)
{
	if (strcmp(data,"wave")==0) {
		digitalWrite(led,HIGH);
    	delay(200);
    	digitalWrite(led,LOW);
    	delay(200);
    	digitalWrite(led,HIGH);
    	delay(200);
    	digitalWrite(led,LOW);
    	delay(200);
    	digitalWrite(led,HIGH);
    	delay(200);
    	digitalWrite(led,LOW);
    	delay(200);
    	}
	else if (strcmp(data,"pat")==0) {
		digitalWrite(led,HIGH);
    	delay(50);
    	digitalWrite(led,LOW);
    	delay(50);
    	digitalWrite(led,HIGH);
    	delay(50);
    	digitalWrite(led,LOW);
    	delay(50);
    	digitalWrite(led,HIGH);
    	delay(50);
    	digitalWrite(led,LOW);
    	delay(50);
	}
	else {

	}
}