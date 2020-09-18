// But : Demander à l'utilisateur un entier et de l'afficher à la verticale seulement s'il est de cinq chiffres,
// FR : 		 dans le cas contraire un message mantionnera que l'entier ne contient pas cinq chiffres
// Auteur : Alexis Levert
// Date : 09 Septembre 2020


	// Test  fonctionnels : 12345, 98765, 123, 987


#include <iostream>
#include <string>			// KM : pourquoi string ???
using namespace std;


int main()
{
	setlocale(LC_ALL, ""); 
	
	string nombreEntier1;
	int nombre5chiffres; // Variable de la valeur à comparer
	int nombre5chiffres01;
	// int nombreEntier2;

	nombre5chiffres = 10000; // On entre la valeur qu'il faut utiliser pour comparer
	nombre5chiffres01 = 99999;

	cout << "Veuiller entrer un nombre de 5 chiffres : "; // Le message est affiché à l'utilisateur
	// KM : Pourquoi utiliser un string ??
	cin >> nombreEntier1; // On enregistre la valeur entrée dans un string
	
			
	int nombreEntier2 = stoi(nombreEntier1); // FR : On enregistre la valeur entré dans un int ce qui permet d'en 
											// faire la comparaison pour s'assurer qu'il comporte cinq chiffres
	

	// KM : Excellents tests !!
	if (( nombreEntier2 < nombre5chiffres ))	// Si la veleur entrée n'est pas de cinq chiffres on affiche un message notifiant l'erreur
	{

		cout << "Ce nombre ne contient pas 5 chiffres." << endl;
					
	}
	else if ((nombreEntier2 > nombre5chiffres01))	// Si la veleur entrée n'est pas de cinq chiffres on affiche un message notifiant l'erreur
	{

		cout << "Ce nombre ne contient pas 5 chiffres." << endl;

	}
	else 
		// KM : Non ici tu ne peux pas utiliser deux opérateurs de comparaison dans la même condition, 
		// KM : il faut utiliser un && et ici tu n'en as pas besoin car tu es dans le else des deux premiers if
		if (nombre5chiffres <= nombreEntier2 <= nombre5chiffres01)
	{
		
		// KM : Il faut utiliser les notions vues en classe et nous n'avons pas encore exploré les string
			cout << nombreEntier1[0] << endl;
		cout << nombreEntier1[1] << endl;
		cout << nombreEntier1[2] << endl;
		cout << nombreEntier1[3] << endl; 
		cout << nombreEntier1[4] << endl;
	}
			
	
	return 0;
	
}
/*
		La solution est bien nommée et comporte deux projets 5/ 5
		Les fichiers sources contiennent l'identification complète du programme et de son auteur 5/5
		Le code source est sans erreur de compilation 15/ 15
		Le programme est fonctionnel 20/ 20
		Le programme passe le plan de tests 20/ 20
		Le code source est largement commenté 10/ 20
		La solution est déposée dans LEA et dans GitHub. L'adresse est envoyée via Outlook 15/15
	*/
