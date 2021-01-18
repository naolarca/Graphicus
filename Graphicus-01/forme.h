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
#include "dimension.h"

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

class Rectangle : public Forme
{
public:
	Rectangle();
	Rectangle(Coordonnee c, Dimension recd);
	~Rectangle();
	Dimension GetSize();
	double aire() override;
	void SetSize(Dimension recd);
	void afficher(ostream & s) override;

	
private:
	Dimension d;
};


class Carre : public Forme
{
public:
	Carre();
	Carre(Coordonnee c, int x);
	~Carre();
	int GetSize();
	double aire() override;
	void SetSize(int x);
	void afficher(ostream & s) override;
	
private:
	int cote;
};

class Cercle : public Forme
{
public:
	Cercle();
	Cercle(Coordonnee c, int x);
	~Cercle();
	int GetSize();
	double aire() override;
	void SetSize(int x);
	void afficher(ostream & s) override;

	
private:
	int rayon;
};
#endif
