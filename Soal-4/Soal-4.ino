int number = 0;
bool cekBilPrima = true;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Bilangan: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();

    if(number <= 1) {
      Serial.print(number);
      Serial.println(" Bukan bilangan prima");
    } else {
      cekBilPrima = true;
      for(int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
          cekBilPrima = false;
          break;
        }
      }

      if(cekBilPrima) {
        Serial.print(number);
        Serial.println(" Termasuk bilangan prima");
      } else {
        Serial.print(number);
        Serial.println(" Bukan bilangan prima");
      }
    }

    delay(1000);
    Serial.println("Input bilangan lain untuk dicek: ");
  }
}