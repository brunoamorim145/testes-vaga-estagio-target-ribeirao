//Bruno Amorim
/*Quest�o - 3) Observe o trecho de c�digo abaixo: int INDICE = 12, SOMA = 0, K = 1;
enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
Ao final do processamento, qual ser� o valor da vari�vel SOMA?*/
//Resposta: O valor da vari�vel SOMA ser� 77, conforme o codigo abaixo. 

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
