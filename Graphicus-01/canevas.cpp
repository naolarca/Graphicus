/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

/*Canevas::Canevas()
{	
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i=0; i<=MAX_COUCHES;i++){
		couches[i].ReinitialisationCouche();
	}
   return true;
}

bool Canevas::activerCouche(int index)
{
	char Activation[]="active";
	char Desactivation[]="inactive";
	if (index<=MAX_COUCHES && index>=0){
		
		couches[index].changementEtat(Activation[]);
		
		for (int i=0; i<index; i++){
			couches[i].changementEtat(Desactivation[]);
		}
		
		for (int i>index; i<=MAX_COUCHES;i++){
			couches[i].changementEtat(Desactivation[]);
		}
		return true;
	}
	
	else return false;
}

bool Canevas::cacherCouche(int index)
{
	char cache[]="cachee";
	if (index<=MAX_COUCHES && index>=0){
		
		couches[index].changementEtat(cache[]);
		return true;
	}
	
	else return false;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	for (int i=0; i<=MAX_COUCHES;i++){
		couches[i].ajoutFormeCouche(p_forme);
	}
	
	return true;

}

bool Canevas::retirerForme(int index)
{
	if (index<=MAX_COUCHES && index>=0){
		couches[index].retraitFormeCouche(index);
		return true;
	}
	
	else return false;
}

double Canevas::aire()
{
	double AireTotale=0;
	
	for (int i=0; i<=MAX_COUCHES;i++){
		AireTotale+=couches[i].AireCouche();
	}
	
	return AireTotale;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	for (int i=0; i<=MAX_COUCHES; i++){
		if (couches[i].etat[]=="active"){
			couches[i].TranslationCouche(deltax, deltay);
			return true;
		}
	
	return false;
}

void Canevas::afficher(ostream & s)
{
	for (int i=0; i<=MAX_COUCHES; i++){
		cout<<"----- Couche "<<i<<endl;
		couches[i].ContenuCanevas(ostream & s);
	}
}*/
