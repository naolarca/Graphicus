/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
  // Tests sur les formes geometriques
  
	//TEST DU RECTANGLE
	Rectangle testr;
	Coordonnee c, c1;
	Dimension d, d1;
	
	c = testr.getAncrage();
	d = testr.GetSize();

	testr.afficher(std::cout);
	cout << "Dimension et point d'ancrage modifié" << endl;
	
	c1.x = 20;
	c1.y = 20;
	d1.l = 10;
	d1.h= 15;
	
	testr.setAncrage(c1);
	testr.SetSize(d1);
	c = testr.getAncrage();
	d = testr.GetSize();
	
	testr.afficher(std::cout);
	
	//TEST DU CARRE
	
	Carre testc;
	int cote, x;
	
	c = testc.getAncrage();
	cote = testc.GetSize();
	
	testc.afficher(std::cout);
	cout << "Dimension et point d'ancrage modifié" << endl;
	
	c1.x = 3;
	c1.y = 2;
	testc.SetSize(x = 4);
	testc.setAncrage(c1);
	c = testc.getAncrage();
	cote = testc.GetSize();
	
	testc.afficher(std::cout);
	
	
	//TEST DU CERCLE
	
	int rayon;
	
	cout<<"Cercle défini automatiquement avec les paramêtres suivant :"<<endl;
	c.x = 8;
	c.y = -6;
	rayon = 4;
	Cercle testce(c, rayon);
	testce.afficher(std::cout);
		
}


void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
