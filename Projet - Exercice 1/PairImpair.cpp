// But : Demander a l'utilisateur un entier et dire si l'entier est pair ou impair
// Auteur : Alexis Levert
// Date : 09 Septembre 2020


#include <iostream>
using namespace std;

int main()
{

	int nombreEntier1;

	cout << "Veuiller entrer un nombre entier : ";
		cin >> nombreEntier1;

	if (nombreEntier1 % 2 == 0) // On v�rifie si la valeure est paire, si non on continue
	{
		cout << nombreEntier1 <<" est un nombre Pair "; // Message envoy� si le message est pair
	}
	else // Si la valeure est impaire on entre dans cette boucle
	{
		cout << nombreEntier1 <<  " est un nombre impair";
	}


	return 0;


	/*Les tests

		 23  = impair			0 = pair

		-75 = impair			1234567 = impair
	*/

	
	// Cet outils peut �tre utiliser pour d�finir si un nombre est pair ou impair
	

}



