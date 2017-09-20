#include <iostream>
using namespace std;

int main(){

	int firstNumber(0) ;
	int secondNumber(0) ;
	int op(0);
	int loop(1) ;
	int result(0) ;

	cout << "Bienvenue dans mon UAL :D " << endl ;

	cout << "Entrez votre premier nombre svp :" << endl ;
	cin >> firstNumber ;

	cout << "Entrez votre second nombre svp :" << endl ;
	cin >> secondNumber ;

	cout << "Vous avez entrés : " << firstNumber << " & " << secondNumber << endl << "Nous allons maintenant effectuer des opérations." << endl << "Selectionner une opération svp." << endl ;	

	//cout << loop << endl ;
	//loop = 0 ;
	//cout << loop << endl ;

	while(loop){

		cin >> op ;

		switch(op){
			case 1 :
			cout << "Vous avez choisis l'addition !!" << endl;
			result = firstNumber + secondNumber ;
			//cout << "Voici le resultat : " << result << endl ;
			break ;

			case 2 :
			cout << "Vous avez choisis la soustraction !!" << endl;
			result = firstNumber - secondNumber ;
			//cout << "Voici le resultat : " << result << endl ;
			break ;

			case 3 :
			cout << "Vous avez choisis la multiplication !!" << endl;
			result = firstNumber * secondNumber ;
			//cout << "Voici le resultat : " << result << endl ;
			break ;

			case 4 :
			cout << "Vous avez choisis la division !!" << endl;
			result = firstNumber / secondNumber ;
			//cout << "Voici le resultat : " << result << endl ;
			break ;

			case 0 :
			loop = 0 ;
			break ;

			default :
			cout << "Aucune opération sélectionner ou opération non reconnue." << endl;
			cout << "1 - addition" << endl << "2 - soustraction" << endl << "3 - multiplication" << endl << "4 - division" << endl << "0 - Quitter" << endl ;
			//loop = 0 ;
			break ;
		}

		cout << "Voici le resultat : " << result << endl ;

	}

	

	cout << "fin de l'UAL." << endl ;

	return 0 ;
}