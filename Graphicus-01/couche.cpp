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
	ConnaitreEtat=etat;
}

Couche::~Couche(){
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

float Couche::AireCouche()
{
	float AireTotale=0;
	
	//pour avoir la taille
	int taille=NomCouche.AfficherTaille();
	
	for(int i=0; i<=taille;i++){
		
		AireTotale+=(NomCouche.indexForme(i))->aire();	
	}
	
	return AireTotale;
}

bool Couche::TranslationCouche(int deltax, int deltay)
{	
	//pour avoir la taille
	int taille=NomCouche.AfficherTaille();
	
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
	int taille=NomCouche.AfficherTaille();
	
	if (taille!=0){
		NomCouche.Vider();	
		return true;
	}
	
	else return false;
}

bool Couche::ChangementEtat(string nouvelEtat)
{
	//pour avoir la taille
	int taille=NomCouche.AfficherTaille();
	
	if (nouvelEtat=="initialise"){
		return false;
	}
	if (nouvelEtat=="active"){
		
		if(taille==0){
			taille==1;
			etat="active";
			return true;
		}
		if (taille<0){
			return false;
		}
		else {
			etat="active";
			return true;
		}
	}
	
	if (nouvelEtat=="inactive"){
		etat="inactive";
		return true;
	}
	
	else{
		for(int i=0; i<=taille;i++){
			(NomCouche.indexForme(i))->aire();	
		}
		etat="cachee";
		return true;
	}
	
}

/*void Couche::ContenuCanevas ()
{
	//pour avoir la taille
	int taille=NomCouche.AfficherTaille();
	
	//pour avoir ancrage
	Coordonnee donneAncrage=getAncrage();
	
	//pour avoir l et h
	Dimension size=GetSize();

	
	
	if (etat=="active"||etat=="inactive"){
		for (int j=0; j<=taille; j++){
			
			//Pour rectangle
			if (NomCouche.indexForme(j)== Rectangle*){
				Rectangle* NomForme=NomCouche.indexForme(j);
			
				cout<<"Rectangle";
				cout<<"( x="<<(NomForme)->donneeAncrage.x;
				cout<<", y="<<(NomForme)->donneeAncrage.y;
				cout<<", l="<<(NomForme)->size.x;
				cout<<", h="<<(NomForme)->size.y;				
				cout<<", aire="<<(NomForme)->aire();
				cout<<")"<<endl;	
			}
			
			//Pour carre
			if (NomCouche.indexForme(j)== Carre*){
				Carre* NomForme=NomCouche.indexForme(j);
				
				cout<<"Carre";
				cout<<"( x="<<(NomForme)->donneeAncrage.x;
				cout<<", y="<<(NomForme)->donneeAncrage.y;
				cout<<", c="<<(NomForme)->GetSize();
				cout<<", aire="<<(NomForme)->aire();
				cout<<")"<<endl;
			}
			
			//Pour cercle
			if (NomCouche.indexForme(j)== Cercle*){
				Cercle* NomForme=NomCouche.indexForme(j);
				
				cout<<"Cercle";
				cout<<"( x="<<(NomForme)->donneeAncrage.x;
				cout<<", y="<<(NomForme)->donneeAncrage.y;
				cout<<", r="<<(NomForme)->GetSize();
				cout<<", aire="<<(NomForme)->aire();
				cout<<")"<<endl;
			}
		}
	}
	
	if (etat=="initialise"){
		cout<<"Couche initialisee"<<endl;
	}
	
	if (etat=="cachee"){
		cout<<"Couche cachee"<<endl;
	}
} */	

