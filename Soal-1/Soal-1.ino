int total, number;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan angka:");
}

void loop() {
  if (Serial.available() > 1) {
    number = Serial.parseInt();
    total = 0;
    for (int i = 1; i <= number; i++) {
      total += i;
    }
    Serial.print("Hasil penjumlahan deret angka : ");
    Serial.println(total);
    delay(1000);
  }
}
