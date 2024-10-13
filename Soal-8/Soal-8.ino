int angka, result;
float rata;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Jumlah Angka yg ingin dirata-rata: ");
}

void loop() {
  if(Serial.available() > 1) {
    angka = Serial.parseInt();
    result = 0;

    for(int i = 1; i <= angka; i++) {
      result += i;
    }

    rata = (double)result / angka;
    Serial.print("Rata-rata dari penjumlahan deret: ");
    Serial.println(rata);
    delay(1000);
  }
}
