int output = 13;
int G3 = 196; // low G
int a3 = 228; // low A
int B3 = 246; // low B
int C4 = 261; // low C
int CC4 = 277; // low d flat = low C sharp
int D4 = 293; // Low d
int E4 = 329; // E
int F4 = 349; // f
int G4 = 392; // middle G
int a4 = 440; // A
int Bb = 466; // B flat
int C5 = 523; // middle C
int CC5 = 554; // C sharp = D flat
int D5 = 587; // D

int sixtyforth = 32;
int thirtysecond = 65;
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

  //measure 4
    tone(output, G4); //G
    delay(third);
    
    noTone(output); //rest
    delay(sixteenth);
  }
//repeat twice

  //measure 5
  tone(output, G4); //G
  delay(quarter);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(quarter);

  
  noTone(output); //rest
  delay(eighth);

  tone(output, G4); //G
  delay(eighth);
//measure 6
  noTone(output); //rest
  delay(eighth);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, CC5); //C sharp = D Flat
  delay(eighth);

  tone(output, C5); //C
  delay(half);
  
  //measure 7
  tone(output, G4); //G
  delay(quarter);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(dotquarter);

  tone(output, Bb); //b flat
  delay(quarter);
  // measure 9 second ending
  tone(output, Bb); // B flat
  delay(eighth);

  tone(output, G4); // G dotted quarter plus half
  delay(third);

  //measure 10
  tone(output, G4); //G
  delay(quarter);

  tone(output,Bb); //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(quarter);

; noTone(output); // eighth rest
  delay(eighth);

  tone(output, G4); //G
  delay(eighth);

