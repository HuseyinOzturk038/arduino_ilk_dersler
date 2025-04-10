0const int trigPin = 9; // HC-SR04 sensörünün trig ve echo pinlerini tanımla
const int echoPin = 10;

void setup() 
{
  Serial.begin(9600); // Seri haberleşme başlatılıyor
  pinMode(trigPin, OUTPUT); // trig pinini çıkış olarak ayarla
  pinMode(echoPin, INPUT);  // echo pinini giriş olarak ayarla
}

void loop() 
{
  int mesafe = okuMesafe();  // HC-SR04 sensöründen mesafe okuma fonksiyonunu çağır
  
  Serial.print("Mesafe: ");  // Mesafeyi seri porta yazdır
  Serial.print(mesafe);
  Serial.println(" cm");
  
  delay(1000);   // 1 saniye bekle
}


int okuMesafe() // HC-SR04 sensöründen mesafe okuma fonksiyonu
{ 
  digitalWrite(trigPin, HIGH); // Trig pini 10 mikrosaniye boyunca yüksek olacak şekilde ayarla
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long sure = pulseIn(echoPin, HIGH); // Echo pini yüksek olana kadar bekle
  
  int mesafe = sure / 58;
  // Süreyi mesafeye dönüştür (süre / 2) * (sesin hızı) formülü kullanılır (sesin hızı saniyede 343m/sn'dir.)

  return mesafe; // Mesafeyi döndür
}