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

	if (taille>0||taille<0)
	{
		taille=0;
	}

}

 Vecteur::AfficherSiVide(){

 	if (taille==0) return true;
 	else return false;
 }
Vecteur::AjoutForme(int forme){

	if (taille>=capacite){
		capacite=AugmentationCapacite();
	}
	
	Forme *newTableau= new Forme [capacite];
	for (int i=0; i<capacite; i++){
		newTableau[i]=tableau[i];
		}
	delete []tableau;
	tableau=newTableau;
	
	tableau[taille]=forme;
	taille++;
	return true;
}
Vecteur::RetraitForme(int index){
	
	if (index<=taille){
		for (int i=index; i<=taille;i++){
			if (i+1<capacite){
				tableau[i]=tableau[i+1];
			}
		}
			taille--;
			
			return tableau;
	}
	
	if (index>taille) {
		tableau=NULL;
		return tableau;
	}
}
Vecteur::Forme(int index){
	
	if (index<=taille){
		for (int i=0; i<=taille;i++){
			
			if (i==index)
			{
				return tableau[i];
			}
		}
	}
	
	if (index>taille){	
		tableau=NULL;
		return tableau;
	}
}

Vecteur::AfficherVecteur(){

	for (int i=0; i<=taille; i++){
		cout<<tableau[i];
	}
}
