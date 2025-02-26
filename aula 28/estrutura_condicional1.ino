// C++ code
//
float peso = 82;
float altura = 1.56;
float resultado = 0;
void setup()
{
 Serial.begin(9600);
  resultado = peso/sq(altura); 
  Serial.print("o imc eh ");
  Serial.print(resultado);
  

 
  if(resultado < 18.5){
     Serial.println("abaixo do peso normal");
 
  }else if(resultado >= 18.5 && resultado < 24.9){
     Serial.println("peso normal");
  }else if(resultado >= 25,0 && resultado < 29.9){
     Serial.println("exesso de peso");
  }else if(resultado >= 30.0 && resultado < 34.9){
     Serial.println("obesidade classe I");
 
  }else if(resultado > 35.0 && resultado < 39.9){
     Serial.println("obessidade classe II");
  }else {
  Serial.println("obessidade classe III");
  }
}
void loop()
{
}