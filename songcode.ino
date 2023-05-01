//
/*Notes chart:
  C     CC     D     Eb   E     F     F#    G     G#    a     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
//bpm 115

 
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
  //Seb


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

  tone(output, Bb);
  delay(quarter);

  //MEASURE 8 ending 1
  tone(output, G4);
  delay(third);


  //back to measure 5
  tone(output, G4); //G
  delay(quarter);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(quarter)

;noTone(output); //rest
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

  //measure 11
;  noTone(output); //rest eighth
  delay(eighth);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, CC5); // D flat = C sharp
  delay(eighth);

  tone(output, C5);
  delay(half);

  //measure 12
  tone(output, G4); //G
  delay(quarter);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, C5); // C 
  delay(dotquarter);

  tone(output, Bb); // B flat
  delay(eighth);

  tone(output, Bb);
  delay(eighth);

  //measure 13 first ending
  tone(output, G4);
  delay(third);

 //back to measure 10
  tone(output, G4); //G
  delay(quarter);

  tone(output,Bb); //B flat
  delay(quarter);

  tone(output, C5); //C
  delay(quarter);

;  noTone(output); // eighth rest
  delay(eighth);

  tone(output, G4); //G
  delay(eighth);

  //measure 11
  noTone(output); //rest eighth
  delay(eighth);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, CC5); // D flat = C sharp
  delay(eighth);

  tone(output, C5); // C
  delay(half);

  //measure 12
  tone(output, G4); //G
  delay(quarter);

  tone(output, Bb); //B flat
  delay(quarter);

  tone(output, C5); // C
  delay(dotquarter);

  tone(output, Bb); // B flat
  delay(quarter); 

  //meausure 14 second ending
  tone(output, Bb); // B flat
  delay(eighth);

  tone(output, G4); //G 
  delay(third);

  tone(output, F4); // F 
  delay(eighth);


for (int i = 0; i < 3 ; i++){

  //measure 15
  tone(output, G4); // G
  delay(quarter);

  tone(output, C4); // low C
  delay(quarter);

  tone(output, F4); // F
  delay(quarter);

  tone(output, D4); // low D
  delay(eighth);

  tone(output, F4); // F 
  delay(eighth);


  //measure 16
  tone(output, F4); // F 
  delay(eighth);

  tone(output, D4); //D
  delay(dotquarter);

  noTone(output); // rest  quarter
  delay(quarter);

  tone(output, C4); // low C
  delay(eighth);

  tone(output, B3); //low b 
  delay(eighth);

  //measure 17
  tone(output, CC4); //low d flat
  delay(eighth);

  tone(output, C4); // low C
  delay(eighth);
  
  tone(output, B3);  // low b 
  delay(eighth);

  tone(output, C4); //low c
  delay(eighth);

  tone(output, C4); // low c
  delay(eighth);

  tone(output, CC4); // Low d sharp
  delay(eighth);

  tone(output, B3); // low b
  delay(eighth);

  //measure 18
  tone(output, G3); // low g
  delay(eighth);

  tone(output, G3);  //low g
  delay(dotquarter);

  tone(output, D4); // low d
  delay(eighth);

  tone(output, C4); //low C
  delay(eighth);

  tone(output, G3); // low g
  delay(dotquarter);

  //measure 19
  noTone(output);
  delay(eighth);

  tone(output, F4); // f
  delay(eighth);

  tone(output, F4); // f
  delay(quarter);

  tone(output, D4);// low d
  delay(eighth);

  tone(output, F4); // f
  delay(eighth);

  tone(output, D4); //d
  delay(eighth);

  //measure 20
  tone(output, G4); //middle G
  delay(quarter);

  tone(output, B3); // low b
  delay(quarter);

  noTone(output); // quarter rest
  delay(quarter);

  tone(output, Bb); // b flat
  delay(quarter);

  //measure 21
  tone(output, Bb); //b flat
  delay(quarter);

  tone(output, Bb); // Bflat
  delay(quarter);

  tone(output, a4); // A
  delay(eighth);

  tone(output, D4); // low D
  delay(eighth);

  tone(output, C4); //low C
  delay(eighth);

  tone(output, B3); // low b 
  delay(eighth);

  //measure 22
  tone(output, D4); // low d
  delay(eighth);

  tone(output, D4); //low d
  delay(quarter);

  tone(output, G3);
  delay(eighth);

  tone(output, G3);
  delay(quarter);

  noTone(output);
  delay(quarter);

  //measure 23
  noTone(output);
  delay(quarter);

  tone(output, G4); // middle g
  delay(quarter);

  tone(output, G4);
  delay(eighth);

  tone(output, F4);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  tone(output, F4);
  delay(eighth);

  //measure 24
  tone(output, G4); // mid G
  delay(quarter);

  tone(output, G4); // mid G
  delay(quarter);

  tone(output, G4); //mid G
  delay(eighth);

  noTone(output); //eighth rest
  delay(eighth);

  noTone(output); // eighth rest
  delay(eighth);
  
  tone(output, B3); // low b
  delay(eighth);

  // measure 25
  tone(output, C4);
  delay(eighth);

  tone(output, B3);
  delay(eighth);

  tone(output, CC4);
  delay(quarter);

  tone(output, C4);
  delay(quarter);

  tone(output, B3);
  delay(eighth);

  tone(output, D4);
  delay(eighth);

  tone(output, CC4);
  delay(eighth);

  //measure 26
  tone(output, D4);
  delay(quarter);

  tone(output, F4);
  delay(quarter);

  tone(output, G4);
  delay(quarter);

  tone(output, D4);
  delay(eighth);

  tone(output, B3);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  //measure 27
  noTone(output);
  delay(eighth);

  tone(output, D4);
  delay(eighth);

  tone(output, F4);
  delay(quarter);

  tone(output, F4);
  delay(eighth);

  tone(output, D4);
  delay(eighth);

  tone(output, F4);
  delay(eighth);

  tone(output, D4);
  delay(eighth);

  //measure 28
  tone(output, F4);
  delay(quarter);

  tone(output, G4);
  delay(quarter);

  noTone(output);
  delay(quarter);

  tone(output, Bb);
  delay(eighth);

  tone(output, D5);
  delay(eighth);
  
  //measure 29
  tone(output, F4);
  delay(eighth);

  tone(output, D4);
  delay(eighth);
  
  tone(output, B3);
  delay(quarter);

  tone(output, C4);
  delay(eighth);
  
  tone(output, D4);
  delay(eighth);

  tone(output, D4);
  delay(eighth);

  tone(output, B3);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  //measure 30
  tone(output, G3);
  delay(quarter);

  noTone(output);
  delay(quarter);

  noTone(output);
  delay(half);

  //measure 31
  tone(output, E4);
  delay(half);

  tone(output, D4);
  delay(eighth);

  tone(output, C4);
  delay(eighth);

  //measure 32
  tone(output, E4);
  delay(half);

  tone(output, C4);
  delay(half);

  //measure 33
  noTone(output);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  tone(output, Bb);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  tone(output, Bb);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  tone(output, F4);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  //measure 34
  noTone(output);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  tone(output, B3);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  tone(output,B3);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  tone(output, G3);
  delay(eighth);

  //measure 35
  tone(output, E4);
  delay(half);

  tone(output, D4);
  delay(eighth);

  tone(output, C4);
  delay(eighth);

  //measure 36
  tone(output, E4);
  delay(half);

  tone(output, C4);
  delay(half);

  //measure 37
  tone(output, G4);
  delay(quarter);

  tone(output, Bb);
  delay(quarter);

  tone(output, C5);
  delay(quarter);

  noTone(output);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  //measure 38
  noTone(output);
  delay(eighth);

  tone(output, Bb);
  delay(quarter);

  tone(output, CC5);
  delay(eighth);

  tone(output, C5);
  delay(half);

  //measure 39
  tone(output, G4);
  delay(quarter);

  tone(output, Bb);
  delay(quarter);

  tone(output, C5);
  delay(dotquarter);

  tone(output, Bb);
  delay(eighth);

  //measure 40
  tone(output, Bb);
  delay(eighth);

  tone(output, G4);
  delay(half);

  //measure 41
  tone(output, G4);
  delay(quarter);

  tone(output, Bb);
  delay(quarter);

  tone(output, C5);
  delay(quarter);

  noTone(output);
  delay(eighth);

  tone(output, G4);
  delay(eighth);

  //measure 42
  noTone(output);
  delay(eighth);

  tone(output, Bb);
  delay(quarter);

  tone(output, CC5);
  delay(eighth);

  tone(output, C5);
  delay(half);

  //measure 43
  tone(output, G4);
  delay(quarter);

  tone(output, Bb);
  delay(quarter);

  tone(output, C5);
  delay(dotquarter);

  tone(output, Bb);
  delay(eighth);

  //measure 44
  tone(output, Bb);
  delay(eighth);

  tone(output, G4);
  delay(half);
}
 //repeats twice then goes to last measure 48 song ends
 tone(output, C5);
 delay(eighth);

 tone(output, Bb);
 delay(eighth);

 tone(output, G4);
 delay(whole);


  // END

  ;
  noTone(output);  // stop
}