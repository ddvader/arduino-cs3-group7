int output = 13;
int D5 = 587;
int F5 = 698;
int G4 = 392;
int Bb = 466;
int C5 = 523;
int CC5 = 554;


int sixteenth = 130;
int eighth = 261;
int quarter = 552;
int dotquarter = 828;
int half = 1104;
int third = 1656;
int whole = 2208;


void setup() {

for (int i = 0; i < 2 ; i++){
    //measure 1
  tone(output, G4);  // tone(outputPin,frequency)
  delay(quarter);    //G

  tone(output, Bb);  //B flat
  delay(quarter);

  tone(output, C5);  //C
  delay(quarter);

  noTone(output);  //rest
  delay(eighth);

  tone(output, G4);  //G
  delay(quarter);
  
  //measure 2
  noTone(output);  //rest
  delay(eighth);
  
  tone(output, Bb);  //B flat
  delay(quarter);

  tone(output, CC5);  // C sharp
  delay(eighth);

  tone(output, C5);  //C
  delay(half);

  //measure 3
  tone(output, G4);  //G
  delay(quarter);

  tone(output, Bb);  //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(dotquarter);

  tone(output, Bb); //B flat
  delay(quarter);
