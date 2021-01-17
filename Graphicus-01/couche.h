/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"
class Couche
{

	//Les attributs:
	
	//Les méthodes:
   public:
   	void stockageForme();
   	bool ajoutForme();
   	int retraitForme();
   	int formeStockee();
   	double AireCouche();
   	bool TranslationCouche(int deltax, int deltay);
   	bool ReinitialisationCouche();
   	bool ChangementEtat(int etat);
   	double ContenuCanevas (float x, float y);
   	
};

#endif
