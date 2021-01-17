/********
 * Fichier: vecteur.h
 * Auteurs: Naomie L'Archevêque-Carrière
 * Date: 16 janvier 2021 (creation)
 * Description: Declaration de la classe vecteur
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>


using namespace std;

class Vecteur
{
public:
	Vecteur();
	~Vecteur();
 	int AfficherCapacite();
 	int AfficherTaille();
 	void AugmentationCapacite();
 	void Vider();
 	bool AfficherSiVide();
 	bool AjoutForme(Forme* newForme);
	Forme* RetraitForme(int index);
 	Forme* indexForme(int index);
 	void AfficherVecteur();
 private:
 	int taille=0;
 	int capacite=10;
 	Forme **tableau;
 	
};
#endif
