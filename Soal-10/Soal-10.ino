int number, sum;
bool bilPrima;

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan bilangan: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    sum = 0;
    String numberPrima = ""; //Untuk menampung string yg akan dikeluarkan pada serial monitor

    Serial.print("Bilangan prima dari 1 sampai ");
    Serial.print(number);
    Serial.print(" adalah ");

    // loop untuk mencari bilangan prima kemudian di jumlah
    for(int i = 2; i <= number; i++) {
      bilPrima = true;

      // cek apakah i = bilPrima ?
      for(int j = 2; j <= i/2; j++) {
        if(i % j == 0) {
          bilPrima = false; // Jika i habis dibagi j, bukan bilangan prima
          break;
        }
      }

      // cek jika i adalah bilangan prima
      if(bilPrima == true) {
        sum += i;
        numberPrima += String(i) + " + "; //ubah tipe data i dan masukkan ke string
      }
    }

    // cek string yang akan ditampilkan 
    if(numberPrima.length() > 0) {
      numberPrima.remove(numberPrima.length() - 3); //hapus tanda " + " terakhir
    }

    Serial.print(numberPrima);
    Serial.print(" = ");
    Serial.println(sum);

    delay(1000);
  }
}
