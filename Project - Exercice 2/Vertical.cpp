// But : Demander � l'utilisateur un entier et de l'afficher � la verticale seulement s'il est de cinq chiffres,
//		 dans le cas contraire un message mantionnera que l'entier ne contient pas cinq chiffres
// Auteur : Alexis Levert
// Date : 09 Septembre 2020


	// Test  fonctionnels : 12345, 98765, 123, 987


#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, ""); 
	
	string nombreEntier1;
	int nombre5chiffres; // Variable de la valeur � comparer
	// int nombreEntier2;

	nombre5chiffres = 10000; // On entre la valeur qu'il faut utiliser pour comparer

	cout << "Veuiller entrer un nombre de 5 chiffres : "; // Le message est affich� � l'utilisateur
	cin >> nombreEntier1; // On enregistre la valeur entr�e dans un string
	
			
	int nombreEntier2 = stoi(nombreEntier1); // On enregistre la valeur entr� dans un int ce qui permet d'en 
											// faire la comparaison pour s'assurer qu'il comporte cinq chiffres
	

	if (( nombreEntier2 < nombre5chiffres))	// Si la veleur entr�e n'est pas de cinq chiffres on affiche un message notifiant l'erreur
	{

		cout << "Ce nombre ne contient pas 5 chiffres." << endl;
					
	}

	else
	{
		
		cout << nombreEntier1[0] << endl;
		cout << nombreEntier1[1] << endl;
		cout << nombreEntier1[2] << endl;
		cout << nombreEntier1[3] << endl;
		cout << nombreEntier1[4] << endl;
	}
			
	
	return 0;
	
}
/*
		La solution est bien nomm�e et comporte deux projets / 5
		Les fichiers sources contiennent l'identification compl�te du programme et de son auteur /5
		Le code source est sans erreur de compilation / 15
		Le programme est fonctionnel / 20
		Le programme passe le plan de tests / 20
		Le code source est largement comment� / 20
		La solution est d�pos�e dans LEA et dans GitHub. L'adresse est envoy�e via Outlook /15
	*/