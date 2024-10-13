int number, sumGanjil, i;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Angka:");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    sumGanjil = 0;
    i = 1;

    while (i <= number) {
      sumGanjil += i;
      i += 2; // ganjil saja
    }

    Serial.print("Hasil penjumlahan deret bilangan ganjil: ");
    Serial.println(sumGanjil);
    delay(1000);
  }
}
