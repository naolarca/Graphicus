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

#include <string>
#include "vecteur.h"
class Couche
{
   public:
   	Couche();
   	~Couche();
   	
   	string ConnaitreEtat();
   	int ConnaitreTaille();
   	bool ajoutFormeCouche(Forme* NouvelleForme);
   	Forme* retraitFormeCouche(int index);
   	Forme* formeStockee(int index);
   	double AireCouche();
   	bool TranslationCouche(int deltax, int deltay);
   	bool ReinitialisationCouche();
   	bool ChangementEtat(string nouvelEtat);
   	void ContenuCanevas (ostream & s);

   private:
   	Vecteur NomCouche;
   	string etat;
   	
};

#endif
