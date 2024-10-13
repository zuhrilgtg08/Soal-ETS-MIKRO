int number, deretKurang;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan angka: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    deretKurang = number;
    for(int i = number - 1; i > 0; i--){
      deretKurang -= i;
    }
    Serial.print("Hasil pengurangan deret: ");
    Serial.println(deretKurang);
    delay(1000);
  }
}
