// Bike alarm project using an arduino nano. thinking of
// using gprs for communication using text or server.
// still working out the IoT connections.
#include <Sim800l.h>

Sim800l Sim800l;

String lat = "52.6272690";
String lng = "-1.1526180";
//AT+CIPGSMLOC=1, 1 location 
// return 0,121.354848,31.221402,201 1/01/26,02:41:06

float checkFuel() {
  // fuel level might be on a 5v scale from bike. will
  // need to do some more tests to be sure
  // 0 to 100%
}

float checkBatLevel() {
  // use a max scale of 15v, from to 5v for arduino
}

bool inNutral() {
  // not sure if needed, bike will not start in nutral anyway
}
bool isBikeOn() {
  // find way to detect if bike is running
}

void startBike() {
  // with isBikeOn and run positive 12v to starter for 3-5seconds,
  // also run constand 12v to power bike
  // will be hard to start when bike is cold, look into servo for choke.
}
void armBike() {
  // use 3 axis sensor to detect movement
}
void flashLighs() {
  // used to flash turn signels, this function equals one flash for 500ms
}
void honk() {
  // why not toot the horn?
}
void location() {
  // using GPS to get lat and long
}
void iLoveYou(char returnNumber) {
  // because your bike should love you back
  String loveNotes[] = {
    "I love you too",
    "You know how to get my motor revving",
    "bitch please, you know I do too"
  };
  int size = sizeof(loveNotes);
  long randNumber = random(0, size - 1);
  Sim800l.sendSms(returnNumber, "loveNotes[randNumber]");
}
void satatus() {
  //return voltage, fuel, location  
}
void setup() {
  Serial.begin(9600);
}

void loop() {

}
