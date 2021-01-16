/********
 * Fichier: vecteur.h
 * Auteurs: Naomie L'Archevêque-Carrière
 * Date: 16 janvier 2021 (creation)
 * Description: Declaration de la classe vecteur
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "forme.h"

using namespace std;

class Vecteur
{
public:
	Vecteur(int laCapacite);
	~Vecteur();
 	int AfficherCapacite();
 	int AfficherTaille();
 	void AugmentationCapacite();
 	void Vider();
 	bool AfficherSiVide();
 	bool AjoutForme();
 	int RetraitForme();
 	int Forme();
 	void AfficherVecteur();
 private:
 	int taille;
 	int capacite;
 	int *tableau;
 	
};

