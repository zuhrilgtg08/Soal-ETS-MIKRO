int number, deretKurangGanjil;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Angka: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    deretKurangGanjil = (number % 2 == 1) ? number : number - 1;

    for(int i = deretKurangGanjil - 2; i > 0; i-=2) {
      deretKurangGanjil -= i;
    }

    // Opsi Cara ke 2
    // int i = deretKurangGanjil - 2;
    // do {
    //   deretKurangGanjil -= i;
    //   i -= 2;
    // } while (i > 0);
    
    Serial.print("Hasil pengurangan deret bilangan ganjil: ");
    Serial.println(deretKurangGanjil);
    delay(1000);
  }
}
