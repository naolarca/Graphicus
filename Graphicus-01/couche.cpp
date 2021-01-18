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
	if (etat!="inactive"){
		NomCouche.AjoutForme(NouvelleForme);
		return true;
	}
	
	else {
		return false;
	}
}

Forme* Couche::retraitFormeCouche(int index){
	
	Forme* resultat;
	if (etat!="inactive"){
		resultat=NomCouche.RetraitForme(index);
		return resultat;
	}
	
	else{
		resultat=NULL;
		return resultat;
	}
}

Forme* Couche::formeStockee(int index)
{
	Forme* valeurRetour;
	valeurRetour=NomCouche.indexForme(index);
	return valeurRetour;
}

double Couche::AireCouche()
{
	double AireTotale=0.0;
	
	//pour avoir la taille
	int taille=NomCouche.AfficherTaille();
	
	for(int i=0; i<=taille;i++){
		Forme* retour= NomCouche.indexForme(i);
		AireTotale+=retour->aire();	
	}
	
	return AireTotale;
}

bool Couche::TranslationCouche(int deltax, int deltay)
{	
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (etat!="inactive"){
		for (int i=0; i<=taille; i++){
		
			(NomCouche.indexForme(i))->translater(deltax, deltay);
			return true;
		}
	}
	
	else return false;
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
	
	else return false;
}

bool Couche::ChangementEtat(string nouvelEtat)
{
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
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
	
	else{
		/*for(int i=0; i<=taille;i++){
			Forme* retour= NomCouche.IndexForme(i);
			
		}*/
		etat="cachee";
		return true;
	}
	
}

void Couche::ContenuCanevas ()
{		
	//pour avoir la taille
	int taille=ConnaitreTaille();
	
	if (etat=="active"||etat=="inactive"){
		for (int j=0; j<=taille; j++){
			(NomCouche.indexForme(j))->afficher(std::cout);
		}
	}
	
	if (etat=="initialise"){
		cout<<"Couche initialisee"<<endl;
	}
	
	if (etat=="cachee"){
		cout<<"Couche cachee"<<endl;
	}
}	

