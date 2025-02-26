
//Operadores de Comparação
// "=" atribução, salvar valor na variável
// "==" verifica se dois valores são iguais
// "!=" verifica se dois valores são diferentes
// "<" verifica se é menor
// ">" verifica se é maior
// "<=" verifica se é menor ou igual
// ">=" verifica se é maior ou igual
// "&&" Adicionar condições dentro de uam decisão

void setup()
{
  Serial.begin(9600);
 
  int temperatura = 24;
 
  //Se a temperatura for maior que 25
/*  if(temperatura >= 25){
  Serial.println("muito quente!");
     
  }else{//Se não
  Serial.println("tranquilo!");
  }
*/
 
  if(temperatura > 30){
     Serial.println("Muito quente");
 
  }else if(temperatura <= 30 && temperatura > 24){
     Serial.println("Calor bom");
  }else if(temperatura <= 24 && temperatura > 18){
     Serial.println("clima bom");
  }else if(temperatura <= 18 && temperatura > 8){
     Serial.println("Frio");
 
  }else{
     Serial.println("Muito frio");
  }
 
}

void loop()
{

}
