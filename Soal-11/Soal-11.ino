int number = 0;
int sum;

//membuat fungsi untut memeriksa bilangan prima/bukan
bool isBilanganPrima(int n) {
  if(n < 2) {
    return false; //cek jika bilangan 1 dan bilangan minus bukan bilangan prima
  }
  for(int j = 2; j <= n/2; j++) {
    // jika n habis dibagi faktor dari bil j maka bukan bil prima
    if(n % j == 0) {
      return false;
    }
  }
  return true; //jika tidak ada pembagi maka n adlh bil prima
}

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan bilangan: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();
    sum = 0;
    String bukanAngkaPrima = ""; //Menampung data bukan bilprima menjadi string lalu di tampilkan ke serial monitor

    Serial.print("Yang bukan bilangan prima dari 1 sampai ");
    Serial.print(number);
    Serial.print(" adalah: ");

    // loop mencari bukan bilprima lalu di sum
    for(int i = 1; i <= number; i++) {
      //panggil fungsi isBilanganPrima yg sudah dibuat diatas tadi
      if(!isBilanganPrima(i)) {
        sum += i;
        bukanAngkaPrima += String(i) + " + ";
      }
    }

    if(bukanAngkaPrima.length() > 0) {
      bukanAngkaPrima.remove(bukanAngkaPrima.length() - 3);
    }

    Serial.print(bukanAngkaPrima);
    Serial.print(" = ");
    Serial.println(sum);

    delay(1000);
  }
}