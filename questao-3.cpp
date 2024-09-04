//Bruno Amorim
/*Questão - 3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1;
enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
Ao final do processamento, qual será o valor da variável SOMA?*/
//Resposta: O valor da variável SOMA será 77, conforme o codigo abaixo. 

#include<iostream>
using namespace std;
int main (){
	int indice = 12, soma = 0, k = 1;
	
	do{
		k = k + 1;
		soma = soma + k;
	} while (k < indice);
	
	cout << "Soma = " << soma << "\n\n\n";
	
	return 0;
}
