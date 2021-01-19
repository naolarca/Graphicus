/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche(){
	etat="initialise";
}

Couche::~Couche(){
}

string Couche::ConnaitreEtat(){
	return etat;
}

int Couche::ConnaitreTaille(){
	int taille=NomCouche.AfficherTaille();
	return taille;
}

bool Couche::ajoutFormeCouche(Forme* NouvelleForme){
	if (etat=="active"){
		NomCouche.AjoutForme(NouvelleForme);
		return true;
	}
	
	return false;
}

Forme* Couche::retraitFormeCouche(int index){
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	Forme* resultat;
	if (etat=="active"){
		if (index<taille && index>=0){
			resultat=NomCouche.RetraitForme(index);
			return resultat;
		}
	}
	
	resultat=NULL;
	return resultat;
}

Forme* Couche::formeStockee(int index)
{
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	Forme* valeurRetour;
	if (index<taille && index>=0){
		valeurRetour=NomCouche.indexForme(index);
		return valeurRetour;
	}
	
	valeurRetour=NULL;
	return valeurRetour;
	
}

double Couche::AireCouche()
{
	double AireTotale=0.0;
	
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (etat!="cachee" && etat!="initialise"){
		for(int i=0; i<taille;i++){
			Forme* retour= NomCouche.indexForme(i);
			AireTotale+=retour->aire();
		}
	}
	return AireTotale;
}

bool Couche::TranslationCouche(int deltax, int deltay)
{	
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (etat=="active"){
		for (int i=0; i<taille; i++){
		
			(NomCouche.indexForme(i))->translater(deltax, deltay);
		}
		return true;
	}
	
	return false;
}

bool Couche::ReinitialisationCouche()
{
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (taille!=0){
		NomCouche.Vider();
		etat="initialise";	
		return true;
	}
	
	return false;
}

bool Couche::ChangementEtat(string nouvelEtat)
{
	
	if (nouvelEtat=="initialise"){
		return false;
	}
	if (nouvelEtat=="active"){
		etat="active";
		return true;
	}
	
	if (nouvelEtat=="inactive"){
		etat="inactive";
		return true;
	}
	
	if (nouvelEtat=="cachee"){
		etat="cachee";
		return true;
	}
	return false;
	
}

void Couche::ContenuCanevas (ostream & s)
{		
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (etat=="initialise"){
		cout<<"Couche initialisee"<<endl;
	}
	
	if (etat=="cachee"){
		cout<<"Couche cachee"<<endl;
	}
	
	if (etat=="inactive"){
		for (int j=0; j<taille; j++){
			(NomCouche.indexForme(j))->afficher(std::cout);
		}
	}
	
	if (etat=="active"){
		if (taille==0) cout<<"Couche vide"<<endl;
		else for (int j=0; j<taille; j++){
			(NomCouche.indexForme(j))->afficher(std::cout);
		}
	}
}	

