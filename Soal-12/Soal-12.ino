int number, result, count;

// Fungsi untuk memeriksa apakah suatu angka adalah bilangan prima
bool bilanganPrima(int n) {
  if(n < 2) return false;
  for(int j = 2; j <= n/2; j++) {
    if(n % j == 0) return false;
  }
  return true;
}

// Void untuk mengurutkan array dari besar ke kecil
void sortirDescending(int arr[], int size) {
  for(int i = 0; i < size - 1; i++) {
    for(int j = i+1; j < size; j++) {
      if(arr[i] < arr[j]) {
        // Tukar posisi elemen jika urutannya salah
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Masukkan Deret Bilangan: ");
}

void loop() {
  if(Serial.available() > 1) {
    number = Serial.parseInt();

    // Array untuk menyimpan bilangan prima
    int angkaPrima[number];
    // Set counter 0
    count = 0;

    // Mencari bilangan prima dari input Number
    for(int i = number; i >= 2; i--){
      if(bilanganPrima(i)){
        angkaPrima[count] = i;
        count++;
      }
    }

    // Mengurutkan array bilangan prima dari besar ke kecil
    sortirDescending(angkaPrima, count);

    // Menampilkan array bilangan prima yang sudah terurut
    Serial.print("Bilangan prima yang ada: ");
    for(int i = 0; i < count; i++) {
      Serial.print(angkaPrima[i]);
      if(i < count - 1) Serial.print(" - ");
    }
    Serial.println();

    // Menghitung hasil pengurangan
    result = angkaPrima[0];
    for(int i = 1; i < count; i++) {
      result -= angkaPrima[i];
    }

    // Menampilkan hasil akhir
    Serial.print("Hasil Pengurangan: ");
    Serial.println(result);
    delay(1000);
  }
}