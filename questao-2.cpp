//Bruno Amorim
/*Questao - 2) Escreva um programa que verifique, em uma string, a existência da 
letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em 
que ela ocorre. 
IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua 
preferência ou pode ser previamente definida no código;*/

#include<iostream>
using namespace std;
int main() {
	string palavra;
	bool lAparece;
	int qtdLetra;
	qtdLetra = 0;
	lAparece = false;
	
	cout << "\nDigite uma palavra: ";
	cin >> palavra;
	
	for(int i=0; i<palavra.length(); i++){
		if((*(palavra.c_str()+i) == 'A') || (*(palavra.c_str()+i) == 'a')){
			qtdLetra++;
			lAparece = true;
		}
	}
	if(lAparece){
		cout << "Na palavra, " << palavra << ", aparece a letra 'a'/'A' " << qtdLetra << " vezes" << endl;
	}
	else{
		cout << "Na palavra, " << palavra << ", nao aparece a letra 'a'/'A'" << endl;
	}
	
	return 0;
}
