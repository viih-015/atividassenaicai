/*
autor:vitoria costa
discricao:este codigo
nome do arquivo:matematica
data: 23/02/2024
*/


//***************DECLARAÇAO DE VARIAVEIS GLOBAIS*************
int numeroA = 10;
int numeroB = 3;
int resultado = 0;
float resultadoReal = 0;


void setup()
{
  Serial.begin(9600); //baud rete bit por segundo(bps)
 
  //*****SOMA*****
 resultado =numeroA + numeroB;
  Serial.print("A soma do numeroA com o numeroB eh: ");
  Serial.println(resultado);
 
  //****SUBSTRCAO*****
  resultado = numeroB - numeroA;
  Serial.print(" A subtracao do numero B pelo numero A eh:");
  Serial.println(resultado);
 
  //****MULTIPLICACAO****
  resultado= numeroA * numeroB ;
  Serial.print("A multiplicacao do numeroA pelo numeroB eh:");
  Serial.println(resultado);
 
  //***** DIVISAO*****
  resultado = numeroA / numeroB;
  Serial.print(" A divisao de A por b eh ");
  Serial.println(resultado);
  resultado = numeroA % numeroB; // retorna o rsto da divisao
  Serial.print("e sobra");
  Serial.println(resultado);
 
  //divisao com numero decimais
 
  resultadoReal = (float)numeroA / (float)numeroB;
  Serial.println(resultadoReal,3);// esse numero indica as casas decimais pos virgulas
 
  //****POTENCIACAO*****
  resultadoReal = pow(numeroA, numeroB); //numeroA elevado a numeroB
  Serial.print("numero A elevado a numero B: ");
  Serial.println(resultadoReal,0);
 
  //****AO QUADRADO****
  resultado = sq(numeroB);
  Serial.print("numeroB ao quadrado: ");
  Serial.println(resultado);
 
  //****RAIZ QUADRADA****
  resultadoReal = sqrt (numeroA);
  Serial.print("a raiz quadrada de numeroA: ");
  Serial.println(resultadoReal);
 
  //*****MOSULO****
  resultado = abs(numeroA * -1);
  Serial.println(resultado);
 
 
  //****RESTRICAO****
 
  resultado = constrain(numeroA, 4, 8); //estourou o limite superior
  Serial.println(resultado);
  resultado = constrain(numeroB, 4, 8); //estourou o limite inferior
  Serial.println(resultado);
  resultado = constrain(numeroA, 0, 100); //dentro do limite
  Serial.println(resultado);
 
  //****REMAPEAMENTO****
 
  resultado = map(511, 0, 1023, 0, 100);
  //map(valor, deMenor, deMaior, paraMenor, paraMaior) ;
  Serial.println(resultado);
  \
   
  //*****OPEREDORES DE ATRIBUICAO*****
  //incremento (+1)
  //numeroA = numeroA +1;
    numeroA ++; //pos incremento
    ++numeroA; //pre incremento
 
  int valor =
 
   //decremento(-1)
   //numeroA =numeroA -1;
    numeroA--; //pos incremento
    --numeroA; //pre incremento
 
  //numeroA = numeroA + 3;
    numeroA += 3;
 
  //numeroA = numeroA - 3;
    numeroA -= 3;
   
  //numeroA = numeroA * 3
    numeroA *= 3;
 
  //numeroA = numeroA / 5;
    numeroA /= 3;
 
 