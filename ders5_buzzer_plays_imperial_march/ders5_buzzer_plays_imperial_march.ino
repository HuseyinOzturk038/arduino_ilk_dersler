

int speakerPin = 11;
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

void setup()
{
pinMode(speakerPin, OUTPUT);
}

void loop() // tekrar tekrar ve tekrar çalması için döngümüzü oluşturalım
{
march();
}
void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds)
{
int x;
long delayAmount = (long)(1000000/frequencyInHertz);
long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
for (x=0;x<loopTime;x++)
{
digitalWrite(speakerPin,HIGH);
delayMicroseconds(delayAmount);
digitalWrite(speakerPin,LOW);
delayMicroseconds(delayAmount);
}
delay(20);
}

void march()
{
//Müziğe buradan ulaşabilirsiniz:
//http://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0016254

beep(speakerPin, a, 500);
beep(speakerPin, a, 500);
beep(speakerPin, a, 500);
beep(speakerPin, f, 350);
beep(speakerPin, cH, 150);

beep(speakerPin, a, 500);
beep(speakerPin, f, 350);
beep(speakerPin, cH, 150);
beep(speakerPin, a, 1000);
//ilk bit

beep(speakerPin, eH, 500);
beep(speakerPin, eH, 500);
beep(speakerPin, eH, 500);
beep(speakerPin, fH, 350);
beep(speakerPin, cH, 150);

beep(speakerPin, gS, 500);
beep(speakerPin, f, 350);
beep(speakerPin, cH, 150);
beep(speakerPin, a, 1000);
//ikinci bit…

beep(speakerPin, aH, 500);
beep(speakerPin, a, 350);
beep(speakerPin, a, 150);
beep(speakerPin, aH, 500);
beep(speakerPin, gSH, 250);
beep(speakerPin, gH, 250);

beep(speakerPin, fSH, 125);
beep(speakerPin, fH, 125);
beep(speakerPin, fSH, 250);
delay(250);
beep(speakerPin, aS, 250);
beep(speakerPin, dSH, 500);
beep(speakerPin, dH, 250);
beep(speakerPin, cSH, 250);
//ilgi çeken bölümün başlangıcı

beep(speakerPin, cH, 125);
beep(speakerPin, b, 125);
beep(speakerPin, cH, 250);
delay(250);
beep(speakerPin, f, 125);
beep(speakerPin, gS, 500);
beep(speakerPin, f, 375);
beep(speakerPin, a, 125);

beep(speakerPin, cH, 500);
beep(speakerPin, a, 375);
beep(speakerPin, cH, 125);
beep(speakerPin, eH, 1000);


beep(speakerPin, aH, 500);
beep(speakerPin, a, 350);
beep(speakerPin, a, 150);
beep(speakerPin, aH, 500);
beep(speakerPin, gSH, 250);
beep(speakerPin, gH, 250);

beep(speakerPin, fSH, 125);
beep(speakerPin, fH, 125);
beep(speakerPin, fSH, 250);
delay(250);
beep(speakerPin, aS, 250);
beep(speakerPin, dSH, 500);
beep(speakerPin, dH, 250);
beep(speakerPin, cSH, 250);
//tekrar… tekrar

beep(speakerPin, cH, 125);
beep(speakerPin, b, 125);
beep(speakerPin, cH, 250);
delay(250);
beep(speakerPin, f, 250);
beep(speakerPin, gS, 500);
beep(speakerPin, f, 375);
beep(speakerPin, cH, 125);

beep(speakerPin, a, 500);
beep(speakerPin, f, 375);
beep(speakerPin, c, 125);
beep(speakerPin, a, 1000);
// ve sahalara çıkmaya hazırız!
}