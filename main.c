#define led_pin 2
#define temp_pin A5

int temp_adc;
float temp_volt,temp,x,y;

void setup()
{
pinMode(led_pin, OUTPUT);
Serial.begin(9600);
}

void loop()
{
temp_adc=analogRead(A5);
x = (5 * temp_adc)/(1024.-1);

Serial.println(x);

y = ((x - 0.1) * 100) +(-40);

Serial.println(y);

  if(y > 50){
   digitalWrite(led_pin , HIGH);
   delay(200);
   digitalWrite(led_pin , LOW);
   delay(200)
  }else{
   digitalWrite(led_pin , LOW);
  }
}
