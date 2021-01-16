/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration des classes de formes geometriques. La
 *    classe Forme ne doit pas etre modifiee. Ce fichier fait partie de
 *    la distribution de Graphicus.
********/

#ifndef FORME_H
#define FORME_H

#include <iostream>
#include "coordonnee.h"

using namespace std;

class Forme
{
public:
  Forme(int x = 0, int y = 0);
  virtual ~Forme();
  void translater(int deltaX, int deltaY);
  Coordonnee getAncrage();
  void setAncrage(Coordonnee c);
  virtual double aire() = 0;
  virtual void afficher(ostream & s) = 0;
protected:
	Coordonnee ancrage;
};

class Rectangle::public Forme
{
public:
	double hauteur;
	double largeur;

  	Coordonnee getAncrage();
  	void setAncrage(Coordonnee c);
  	virtual double aire();
  	virtual void afficher(ostream & s);
protected:
	Coordonnee ancrage;
}

class Carre::public Forme
{
public:
	double longueurCote;
	
  	Coordonnee getAncrage();
  	void setAncrage(Coordonnee c);
  	virtual double aire();
  	virtual void afficher(ostream & s);
protected:
	Coordonnee ancrage;
	
}

class Cercle::public Forme
{
public:
	double rayon;	
	
  	Coordonnee getAncrage();
  	void setAncrage(Coordonnee c);
  	virtual double aire();
  	virtual void afficher(ostream & s);
protected:
	Coordonnee ancrage;
}
#endif
