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
	Vecteur testVect;
	cout<<"La capacite du vecteur est:"<< testVect.AfficherCapacite()<<endl;
	cout<<"La taille du vecteur est:"<<testVect.AfficherTaille()<<endl;
	cout<<"La capacite est double:"<<endl;
	testVect.AugmentationCapacite();
	if (testVect.AfficherSiVide()==true){
		cout<<"Le vecteur est vide"<<endl;
   	}
   	else cout<<"Le vecteur n'est pas vide"<<endl;
   	cout<<"On vide le vecteur"<<endl;
   	testVect.Vider();
   	
   	cout<<"On ajoute une forme"<<endl;
   	Forme* PtTest1= new Rectangle;
   	if (testVect.AjoutForme(PtTest1)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
   	else cout<<"Forme non ajoutee"<<endl;
   	
   	cout<<"Et une deuxieme"<<endl;
   	Forme* PtTest2= new Carre;
   	if (testVect.AjoutForme(PtTest2)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
	else cout<<"Forme non ajoutee"<<endl;
	
	cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testVect.RetraitForme(100)<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testVect.RetraitForme(1)<<endl;
	
	cout<<"La forme a la position 0 est:"<<endl;
	cout<<testVect.indexForme(0)<<endl;
 	
 	cout<<"Afficher Vecteur:"<<endl;
 	testVect.AfficherVecteur();
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
   	Couche testCouche;
   	
   //test ajout
   	cout<<"On ajoute une forme"<<endl;
   	Forme* PtTest1= new Cercle;
   	if (testCouche.ajoutFormeCouche(PtTest1)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
   	else cout<<"Forme non ajoutee"<<endl;
   	
   	cout<<"Et une deuxieme"<<endl;
   	Forme* PtTest2= new Carre;
   	if (testCouche.ajoutFormeCouche(PtTest2)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
	else cout<<"Forme non ajoutee"<<endl;
	
   //test retrait
   	cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testCouche.retraitFormeCouche(100)<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testCouche.retraitFormeCouche(1)<<endl;
   //test forme stockee
   	cout<<"La forme a la position 0 est:"<<endl;
	cout<<testCouche.formeStockee(0)<<endl;
   	
   //test Aire
   	//cout<<"L'aire de la couche est:"<<testCouche.AireCouche()<<endl;
   
   //test translation
   	cout<<"translation de 3x et 4y:"<<endl;
   	if (testCouche.TranslationCouche(3,4)==true){
   		cout<<"translation reussie"<<endl;
   	}
   	else cout<<"translation echouee"<<endl;

   //test mise a 0
   	if (testCouche.ReinitialisationCouche()==true){
   		cout<<"reinitialisation de la couche"<<endl;
   	}
   	else cout<<"reinitialisation echouee"<<endl;
   
   //test changement etat
   	cout<<"active:"<<endl;
   	if (testCouche.ChangementEtat("active")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	
   	cout<<"inactive:"<<endl;
   	if (testCouche.ChangementEtat("inactive")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	
   	cout<<"initialise:"<<endl;
   	if (testCouche.ChangementEtat("initialise")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	
   	cout<<"cachee:"<<endl;
   	if (testCouche.ChangementEtat("cachee")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
  
   	
   //test contenu canevas
   	testCouche.ContenuCanevas();

}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
   Canevas testCanevas;
   
   //test reinitialisation
   /*if(testCanevas.reinitialiser()==true) cout<<"reinitialisation reussie"<<endl;
   else cout<<"reinitialisation non reussie"<<endl;*/

   //test activation couche
   cout<<"activation couche a l'index 100"<<endl;
   if (testCanevas.activerCouche(100)==true) cout<<"activation reussie"<<endl;
   else cout<<"activation non reussie"<<endl;
   
   /*cout<<"activation couche a l'index 1"<<endl;
   if (testCanevas.activerCouche(1)==true) cout<<"activation reussie"<<endl;
   else cout<<"activation non reussie"<<endl;*/
   
   //test cacher couche
   cout<<"cacher couche a l'index 100"<<endl;
   if (testCanevas.activerCouche(100)==true) cout<<"cache reussie"<<endl;
   else cout<<"cache non reussie"<<endl;
   
   /*cout<<"cache couche a l'index 1"<<endl;
   if (testCanevas.activerCouche(1)==true) cout<<"cache reussie"<<endl;
   else cout<<"cache non reussie"<<endl;
   
   //test ajouter forme
   cout<<"On ajoute une forme"<<endl;
   Forme* PtTest1= new Cercle;
   if (testCanevas.ajouterForme(PtTest1)==true){
   	cout<<"Forme ajoutee"<<endl;
   }
   	
   else cout<<"Forme non ajoutee"<<endl;
   	
   cout<<"Et une deuxieme"<<endl;
   Forme* PtTest2= new Carre;
   if (testCanevas.ajouterForme(PtTest2)==true){
   	cout<<"Forme ajoutee"<<endl;
   }
   	
   else cout<<"Forme non ajoutee"<<endl;*/
   
   //test retirer forme
   cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testCanevas.retirerForme(100)<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testCanevas.retirerForme(1)<<endl;
	
   //test aire
   //cout<<"Laire est:"<< testCanevas.aire()<<endl;
   
   //test translation
   /*cout<<"translation de 3x et 4y:"<<endl;
   	if (testCanevas.translater(3,4)==true){
   		cout<<"translation reussie"<<endl;
   	}
   	else cout<<"translation echouee"<<endl;*/
   
   //test afficher
   testCanevas.afficher();
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
