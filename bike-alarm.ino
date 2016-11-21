// Bike alarm project using an arduino nano. thinking of 
// using gprs for communication using text or server.
// still working out the IoT connections.

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
  // why not tote the horn?  
}
void location() {
  // using GPS to get lat and long  
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
