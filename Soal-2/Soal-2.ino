int number, sumGenap;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan angka:");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    sumGenap = 0;

    for(int i = 0; i <= number; i += 2) {
      sumGenap += i;
    }

    Serial.print("Hasil penjumlahan deret bilangan genap: ");
    Serial.println(sumGenap);
    delay(1000);
  }
}