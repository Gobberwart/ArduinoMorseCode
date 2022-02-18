int ledPin = 13;
int buzzerPin = 9;
int buzzerFrequency = 800;
int durationOfDot = 75;
int durationOfDash = durationOfDot * 3;
int delayBetweenDotDash = durationOfDot;
int delayBetweenCharacters = durationOfDot * 3;
int delayBetweenWords = durationOfDot * 7;

String outputString = "morse code is fun!";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  // Initialise pins
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  outputString.toUpperCase();
  for (int i = 0; i < outputString.length(); i++) {
    morseForChar(outputString[i]);
    delay(delayBetweenCharacters);
  }
  delay(1000);
}

void dot() {
  tone(buzzerPin,buzzerFrequency);
  digitalWrite(ledPin,HIGH);
  delay(durationOfDot);
  noTone(buzzerPin);
  digitalWrite(ledPin,LOW);
  delay(delayBetweenDotDash);
}

void dash() {
  tone(buzzerPin,buzzerFrequency);
  digitalWrite(ledPin,HIGH);
  delay(durationOfDash);
  noTone(buzzerPin);
  digitalWrite(ledPin,LOW);
  delay(delayBetweenDotDash);
}

void morseForChar(char thisChar) {
  Serial.println(thisChar);
  switch(thisChar) {
    case 'A':
      dot();
      dash();
      break;
    case 'B':
      dash();
      dot();
      dot();
      dot();
      break;
    case 'C':
      dash();
      dot();
      dash();
      dot();
      break;
    case 'D':
      dash();
      dot();
      dot();
      break;
    case 'E':
      dot();
      break;
    case 'F':
      dot();
      dot();
      dash();
      dot();
      break;
    case 'G':
      dash();
      dash();
      dot();
      break;
    case 'H':
      dot();
      dot();
      dot();
      dot();
      break;
    case 'I':
      dot();
      dot();
      break;
    case 'J':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'K':
      dash();
      dot();
      dash();
      break;
    case 'L':
      dot();
      dash();
      dot();
      dot();
      break;
    case 'M':
      dash();
      dash();
      break;
    case 'N':
      dash();
      dot();
      break;
    case 'O':
      dash();
      dash();
      dash();
      break;
    case 'P':
      dot();
      dash();
      dash();
      dot();
      break;
    case 'Q':
      dash();
      dash();
      dot();
      dash();
      break;
    case 'R':
      dot();
      dash();
      dot();
      break;
    case 'S':
      dot();
      dot();
      dot();
      break;
    case 'T':
      dash();
      break;
    case 'U':
      dot();
      dot();
      dash();
      break;
    case 'V':
      dot();
      dot();
      dot();
      dash();
      break;
    case 'W':
      dot();
      dash();
      dash();
      break;
    case 'X':
      dash();
      dot();
      dot();
      dash();
      break;
    case 'Y':
      dash();
      dot();
      dash();
      dash();
      break;
    case 'Z':
      dash();
      dash();
      dot();
      dot();
      break;
    case '0':
      dash();
      dash();
      dash();
      dash();
      dash();
      break;
    case '1':
      dot();
      dash();
      dash();
      dash();
      dash();
      break;
    case '2':
      dot();
      dot();
      dash();
      dash();
      dash();
      break;
    case '3':
      dot();
      dot();
      dot();
      dash();
      dash();
      break;
    case '4':
      dot();
      dot();
      dot();
      dot();
      dash();
      break;
    case '5':
      dot();
      dot();
      dot();
      dot();
      dot();
      break;
    case '6':
      dash();
      dot();
      dot();
      dot();
      dot();
      break;
    case '7':
      dash();
      dash();
      dot();
      dot();
      dot();
      break;
    case '8':
      dash();
      dash();
      dash();
      dot();
      dot();
      break;
    case '9':
      dash();
      dash();
      dash();
      dash();
      dot();
      break;
    case '&':
      dot();
      dash();
      dot();
      dot();
      dot();
      break;
    case '@':
      dot();
      dash();
      dash();
      dot();
      dash();
      dot();
      break;
    case ',':
      dash();
      dash();
      dot();
      dot();
      dash();
      dash();
      break;
    case '!':
      dash();
      dot();
      dash();
      dot();
      dash();
      dash();
      break;
    case '.':
      dot();
      dash();
      dot();
      dash();
      dot();
      dash();
      break;
    case '-':
      dash();
      dot();
      dot();
      dot();
      dot();
      dash();
      break;
    case '?':
      dot();
      dot();
      dash();
      dash();
      dot();
      dot();
      break;
    case ' ':
      delay(delayBetweenWords);
      break;
  }
}
