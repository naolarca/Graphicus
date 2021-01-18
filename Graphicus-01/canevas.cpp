/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas(){	
}

Canevas::~Canevas(){
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
	string Activation="active";
	string Desactivation="inactive";
	if (index<=MAX_COUCHES && index>=0){
		
		for (int i=0; i<=MAX_COUCHES; i++){
			if (couches[i].ConnaitreEtat()=="active"){
				couches[i].ChangementEtat(Desactivation);
			}
		}
		couches[index].ChangementEtat(Activation);
		return true;
	}
	
	else return false;
}

bool Canevas::cacherCouche(int index)
{
	string cache="cachee";
	if (index<=MAX_COUCHES && index>=0){
		couches[index].ChangementEtat(cache);
		return true;
	}
	
	else return false;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	for (int i=0; i<=MAX_COUCHES; i++){
		activerCouche(i);
		couches[i].ajoutFormeCouche(p_forme);
	}
	
	return true;

}

bool Canevas::retirerForme(int index)
{
	if (index<=MAX_COUCHES && index>=0){
		activerCouche(index);
		couches[index].retraitFormeCouche(index);
		return true;
	}
	
	else return false;
}

/*double Canevas::aire()
{
	double AireTotale=0;
	
	for (int i=0; i<=MAX_COUCHES;i++){
		AireTotale+=couches[i].AireCouche();
	}
	
	return AireTotale;
}*/

bool Canevas::translater(int deltaX, int deltaY)
{
	for (int i=0; i<=MAX_COUCHES; i++){
		if (couches[i].ConnaitreEtat()=="active"){
			couches[i].TranslationCouche(deltaX, deltaY);
			return true;
		}
	}
	
	return false;
}

void Canevas::afficher()
{
	for (int i=0; i<=MAX_COUCHES; i++){
		cout<<"----- Couche "<<i<<endl;
		couches[i].ContenuCanevas();
	}
}
