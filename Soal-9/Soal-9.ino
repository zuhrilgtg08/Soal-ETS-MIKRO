int number, sum;
float akar;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Angka: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    sum = 0;

    for(int i = 1; i <= number; i++){
      sum += i;
    }

    akar = sqrt(sum);
    Serial.print("Nilai akar dari penjumlahan deret: ");
    Serial.println(akar);
    delay(1000);
  }
}
