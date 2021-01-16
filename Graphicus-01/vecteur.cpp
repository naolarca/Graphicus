/********
 * Fichier: vecteur.cpp
 * Auteurs: Naomie L'Archevêque-Carrière
 * Date: 16 janvier 2021 (creation)
 * Description: Implementation des methodes de la classe decrite dans
 *    vecteur.h.
********/

#include "vecteur.h"

Vecteur::Vecteur(laCapacite=1){
	
	tableau= new int [laCapacite];
	taille=0;
	capacite=laCapacite;
}

Vecteur::~Vecteur(){
}

Vecteur::AfficherCapacite(){
	return capacite;
}

Vecteur::AfficherTaille(){
	return taille;
}

Vecteur::AugmentationCapacite(){
	capacite*=2;
	return capacite;
}

Vecteur::Vider(){

	if (taille>0)
	{
		taille=0;
		delete [] tableau;
	}

}
 Vecteur::AfficherSiVide(){

 	if (taille==0) return true;
 	else return false;
 }
Vecteur::AjoutForme(int forme){

	if (taille==capacite){
		capacite=AugmentationCapacite();
	
		int *newArrPt= new int [capacite];
		for (int i=0; i<capacite; i++){
			newArrPt[i]=tableau[i];
		}
		delete []tableau;
		tableau=newArrPt;
	}
	
	tableau[taille]=forme;
	taille++;
}
Vecteur::RetraitForme(int index){
	for (int i=0; i<=taille;i++){
		if (i==index)
		{
			return tableau[i];
		}
	}
	
	return tableau;
}
Vecteur::Forme(int index){
	
	for (int i=0; i<=taille;i++){
		if (i==index)
		{
			return tableau[i];
		}
	}
	
	tableau=0;
	return tableau;
}
Vecteur::AfficherVecteur(){

	for (int i=0; i<=taille; i++){
		cout<<tableau[i];
	}
}
 	
