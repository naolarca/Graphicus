/********
 * Fichier: vecteur.cpp
 * Auteurs: Naomie L'Archevêque-Carrière
 * Date: 16 janvier 2021 (creation)
 * Description: Implementation des methodes de la classe decrite dans
 *    vecteur.h.
********/

#include "vecteur.h"

Vecteur::Vecteur(){
	
	taille=0;
	capacite=10;
	tableau= new Forme* [capacite];
}

Vecteur::~Vecteur(){
}

int Vecteur::AfficherCapacite(){
	return capacite;
}

int Vecteur::AfficherTaille(){
	return taille;
}

void Vecteur::AugmentationCapacite(){
	capacite*=2;
}

void Vecteur::Vider(){

	if (taille!=0)
	{
		taille=0;
	}
	delete [] tableau;

}

bool Vecteur::AfficherSiVide(){

 	if (taille==0) return true;
 	return false;
 }
 
bool Vecteur::AjoutForme(Forme* newforme){
	
	if (taille>=capacite){
		AugmentationCapacite();
	}
	
	tableau[taille]=newforme;
	taille++;
	return true;
}

Forme* Vecteur::RetraitForme(int index){
	
	Forme* CopieTableau= tableau[index];
	
	if (index<=taille){
		for (int i=index; i<=taille;i++){
			if (i+1<capacite){
				tableau[i]=tableau[i+1];
			}
		}
			taille--;
			
			return CopieTableau;
	}
	
	
	CopieTableau=NULL;
	return CopieTableau;
}

Forme* Vecteur::indexForme(int index){
	
	Forme* CopieTableau= tableau[index];
	
	if (index<=taille){
		return CopieTableau;
	}

	CopieTableau=NULL;
	return CopieTableau;
}
void Vecteur::AfficherVecteur(ostream & s){

	for (int i=0; i<=taille; i++){
		cout<<tableau[i];
	}
}
 	
