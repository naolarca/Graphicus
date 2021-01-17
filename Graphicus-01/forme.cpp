/********
 * Fichier: forme.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    forme.h. Les methodes de la classe Forme ne doivent pas etre
 *    modifiees. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "forme.h"
const double PI=3.14;

Forme::Forme(int x1, int y1)
{
  ancrage.x = x1;
  ancrage.y = y1;
}

Forme::~Forme()
{
}

void Forme::translater(int deltaX, int deltaY)
{
   ancrage.x += deltaX;
   ancrage.y += deltaY;
}

Coordonnee Forme::getAncrage()
{
   return ancrage;
}

void Forme::setAncrage(Coordonnee c)
{
   ancrage = c;
}
///Rectangle
Rectangle::Rectangle()
{
	ancrage.x = 0;
	ancrage.y = 0;
	d.x = 1;
	d.y =1;
}

Rectangle::Rectangle(Coordonnee c, Dimension recd)
{
	ancrage = c;
	d = recd;
}

Rectangle::~Rectangle()
{
}

Dimension Rectangle::GetSize()
{
return d;
}

void Rectangle::SetSize(Dimension recd)
{
	d = recd;
}

double Rectangle::aire()
{
	double Aire=d.x*d.y;
	return Aire;
}

void Rectangle::afficher(ostream & s)
{
}

///Carre

Carre::Carre()
{
	ancrage.x = 0;
	ancrage.y = 0;
	cote = 1;
}

Carre::Carre(Coordonnee c, int x)
{
	ancrage = c;
	cote = x;
}

Carre::~Carre()
{
}

int Carre::GetSize()
{
return cote;
}

void Carre::SetSize(int x)
{
	cote = x;
}

double Carre::aire()
{
	double Aire=cote*cote;
	return Aire;
}

void Carre::afficher(ostream & s)
{
}
///Cercle

Cercle::Cercle()
{
	ancrage.x = 0;
	ancrage.y = 0;
	rayon = 1;
}

Cercle::Cercle(Coordonnee c, int x)
{
	ancrage = c;
	rayon = x;
}

Cercle::~Cercle()
{
}

int Cercle::GetSize()
{
return rayon;
}

void Cercle::SetSize(int x)
{
	rayon = x;
};

double Cercle::aire()
{
	double Aire=PI*rayon*rayon;
	return Aire;
}

void Cercle::afficher(ostream & s)
{
};
