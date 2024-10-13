int number, deretKurangGenap;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Angka: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    deretKurangGenap = 0;

    for(int i = number; i > 0; i--){
      if(i % 2 == 0) {
        deretKurangGenap = (deretKurangGenap == 0) ? i : deretKurangGenap - i;
      }
    }

    Serial.print("Hasil pengurangan deret angka genap: ");
    Serial.println(deretKurangGenap);
    delay(1000);
  }
}