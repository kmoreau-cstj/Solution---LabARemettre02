// FR : But : Demander a l'utilisateur un entier et dire si l'entier est pair ou impair
// Auteur : Alexis Levert
// Date : 09 Septembre 2020


#include <iostream>
using namespace std;

int main()
{

	int nombreEntier1;

	cout << "Veuiller entrer un nombre entier : ";
		cin >> nombreEntier1;

	// KM : Il faut expliquer ici pourquoi tu utilises le % et 2 et 0 pour déterminer que le nombre est pai
	if (nombreEntier1 % 2 == 0) // FR : On vérifie si la valeure est paire, si non on continue
	{
		cout << nombreEntier1 <<" est un nombre Pair "; // KM : Commentaire à relire  : Message envoyé si le message est pair
	}
	else // FR : Si la valeure est impaire on entre dans cette boucle
	{
		cout << nombreEntier1 <<  " est un nombre impair";
	}


	return 0;


	/*Les tests
	// KM : Excellent plan de tests

		 23  = impair			0 = pair

		-75 = impair			1234567 = impair
	*/

	
	// FR : Cet outils peut être utiliser pour définir si un nombre est pair ou impair
	

}



