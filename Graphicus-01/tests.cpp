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
	cout<<"************************************************************"<<endl;
	//test afficher capacite
	cout<<"La capacite du vecteur est:"<< testVect.AfficherCapacite()<<endl;
	//test afficher taille
	cout<<"La taille du vecteur est:"<<testVect.AfficherTaille()<<endl;
	//test capacite double
	cout<<"La capacite est double:"<<endl;
	testVect.AugmentationCapacite();
	cout<<"capacite:"<<testVect.AfficherCapacite()<<endl;
	//test afficher si vide
	if (testVect.AfficherSiVide()==true){
		cout<<"Le vecteur est vide"<<endl;
   	}
   	else cout<<"Le vecteur n'est pas vide"<<endl;
   	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
   	//test vider vecteur
   	cout<<"On vide le vecteur"<<endl;
   	testVect.Vider();
   	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
   	//test ajout forme
   	cout<<"On ajoute une forme"<<endl;
   	Forme* PtTest1= new Rectangle;
   	if (testVect.AjoutForme(PtTest1)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
   	else cout<<"Forme non ajoutee"<<endl;
   	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
   	
   	cout<<"Et une deuxieme"<<endl;
   	Forme* PtTest2= new Carre;
   	if (testVect.AjoutForme(PtTest2)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
	else cout<<"Forme non ajoutee"<<endl;
	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
	//test retirer forme
	cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testVect.RetraitForme(100)<<endl;
	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testVect.RetraitForme(1)<<endl;
	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
	//test forme a l'index
	cout<<"La forme a la position 0 est:"<<endl;
	cout<<testVect.indexForme(0)<<endl;
 	//test afficher vecteur
 	cout<<"Afficher Vecteur:"<<endl;
 	testVect.AfficherVecteur(std::cout);
 	cout<<endl;
 	cout<<"taille:"<<testVect.AfficherTaille()<<endl;
 	cout<<"capacite:"<<testVect.AfficherCapacite()<<endl;
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
   	Couche testCouche;
   	cout<<"************************************************************"<<endl;
   	testCouche.ConnaitreTaille();
   //test ajout
   	cout<<"On ajoute une forme"<<endl;
   	Forme* PtTest1= new Cercle;
   	if (testCouche.ajoutFormeCouche(PtTest1)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
   	else cout<<"Forme non ajoutee"<<endl;
   	cout<<"taille:"<<testCouche.ConnaitreTaille()<<endl;
   	
   	cout<<"Et une deuxieme"<<endl;
   	Forme* PtTest2= new Carre;
   	if (testCouche.ajoutFormeCouche(PtTest2)==true){
   		cout<<"Forme ajoutee"<<endl;
   	}
   	
	else cout<<"Forme non ajoutee"<<endl;
	cout<<"taille:"<<testCouche.ConnaitreTaille()<<endl;
   //test retrait
   	cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testCouche.retraitFormeCouche(100)<<endl;
	cout<<"taille:"<<testCouche.ConnaitreTaille()<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testCouche.retraitFormeCouche(1)<<endl;
	cout<<"taille:"<<testCouche.ConnaitreTaille()<<endl;
   //test forme stockee
   	cout<<"La forme a la position 0 est:"<<endl;
	cout<<testCouche.formeStockee(0)<<endl;
   	
   //test Aire
   	cout<<"L'aire de la couche est:"<<testCouche.AireCouche()<<endl;
   
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
   	cout<<"taille:"<<testCouche.ConnaitreTaille()<<endl;
   	cout<<"etat:"<<testCouche.ConnaitreEtat()<<endl;
   
   //test changement etat
   	cout<<"active:"<<endl;
   	cout<<"**********"<<endl;
   	if (testCouche.ChangementEtat("active")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	cout<<"etat:"<<testCouche.ConnaitreEtat()<<endl;
   	
   	cout<<"inactive:"<<endl;
   	cout<<"**********"<<endl;
   	if (testCouche.ChangementEtat("inactive")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	cout<<"etat:"<<testCouche.ConnaitreEtat()<<endl;
   	
   	cout<<"initialise:"<<endl;
   	cout<<"**********"<<endl;
   	if (testCouche.ChangementEtat("initialise")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
   	cout<<"etat:"<<testCouche.ConnaitreEtat()<<endl;
   	
   	cout<<"cachee:"<<endl;
   	cout<<"**********"<<endl;
   	if (testCouche.ChangementEtat("cachee")==true){
   		cout<<"changement reussie"<<endl;
   	}
   	else cout<<"changement non reussi"<<endl;
  	cout<<"etat:"<<testCouche.ConnaitreEtat()<<endl;
   	
   //test contenu canevas
   	testCouche.ContenuCanevas(std::cout);

}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
   Canevas testCanevas;
   cout<<"************************************************************"<<endl;
   //test reinitialisation
   if(testCanevas.reinitialiser()==true) cout<<"reinitialisation reussie"<<endl;
   else cout<<"reinitialisation non reussie"<<endl;

   //test activation couche
   cout<<"activation couche a l'index 100"<<endl;
   if (testCanevas.activerCouche(100)==true) cout<<"activation reussie"<<endl;
   else cout<<"activation non reussie"<<endl;
   
   cout<<"activation couche a l'index 1"<<endl;
   if (testCanevas.activerCouche(1)==true) cout<<"activation reussie"<<endl;
   else cout<<"activation non reussie"<<endl;
   
   //test cacher couche
   cout<<"cacher couche a l'index 100"<<endl;
   if (testCanevas.activerCouche(100)==true) cout<<"cache reussie"<<endl;
   else cout<<"cache non reussie"<<endl;
   
   cout<<"cache couche a l'index 1"<<endl;
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
   	
   else cout<<"Forme non ajoutee"<<endl;
   
   //test retirer forme
   cout<<"On retire une forme"<<endl;
	cout<<" si on retire la forme a lindex 100:"<<endl;
	cout<<"La valeur de retour est:"<<testCanevas.retirerForme(100)<<endl;
	
	cout<<" si on retire la forme a lindex 1:"<<endl;
	cout<<"La valeur de retour est:"<<testCanevas.retirerForme(1)<<endl;
	
   //test aire
   cout<<"Laire est:"<< testCanevas.aire()<<endl;
   
   //test translation
   cout<<"translation de 3x et 4y:"<<endl;
   	if (testCanevas.translater(3,4)==true){
   		cout<<"translation reussie"<<endl;
   	}
   	else cout<<"translation echouee"<<endl;
   
   //test afficher
   testCanevas.afficher(std::cout);
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
   cout << ""<< endl;
   cout << "*******************************"<< endl;
   cout << ""<< endl;
   
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   
   Canevas CanValid;
   Coordonnee c;
   Dimension d;
   
   cout<< "***Étape 1 : Activer la couche 1"<<endl;
   CanValid.activerCouche(1);
   
   cout<< "***Étape 2 : Ajouter trois formes géométriques"<<endl;
   cout<< "Les forment ajouté à la couche sont les suivante :"<< endl;
   c.x = 2;
   c.y = 3;
   cout << "Cercle(x = "<< c.x << ", y = " << c.y << ", rayon = 2)"<< endl;
   Forme* cc1 = new Cercle(c, 2);
   CanValid.ajouterForme(cc1);
   
   c.x = 3;
   c.y = 6;
   d.l = 1;
   d.h = 5;
   cout << "Rectangle(x = "<< c.x << ", y = " << c.y << ", l = "<< d.l << ", h = " << d.h << ")" << endl;
   Forme* rc1 = new Rectangle(c, d);
   CanValid.ajouterForme(rc1);
   
   c.x = 0;
   c.y = 1;
   cout << "Carre(x = " << c.x << ", y = " << c.y << ", cote = 3)"<< endl;
   Forme* cac1 = new Carre(c, 3);
   CanValid.ajouterForme(cac1);
   
   cout << "***Étape 3 : Activer la couche 2"<< endl;
   CanValid.activerCouche(2);
   
   cout << "***Étape 4 : Ajouter une forme"<< endl;
   c.x = 5;
   c.y = 0;
   
   cout<< "La forme ajouté à la couche est la suivante :"<< endl;
   cout << "Cercle(x = "<< c.x << ", y = " << c.y << ", rayon = 4)"<< endl;
   Forme* cc2 = new Cercle(c,4);
   CanValid.ajouterForme(cc2);
   
   cout << "***Étape 5 : Afficher le canevas"<< endl;
   CanValid.afficher(std::cout);
   
   cout<< "***Étape 6 : Afficher l'aire du canevas" << endl;
   cout << "L'aire total du caneva est de :" << CanValid.aire() << endl;
   
   cout<< "***Étape 7 : Activer la couche 0"<< endl;
   CanValid.activerCouche(0);
   
   cout << "***Étape 8 : Ajouter trois formes géométrique différentes" << endl;
   cout<< "Les forment ajouté à la couche sont les suivante :"<< endl;
   
   c.x = 5;
   c.y = 5;
   cout << "Cercle(x = "<< c.x << ", y = " << c.y << ", rayon = 5)"<< endl;
   Forme* cc0 = new Cercle(c, 5);
   CanValid.ajouterForme(cc0);
   
   c.x = 4;
   c.y = 4;
   d.l = 4;
   d.h = 4;
   cout << "Rectangle(x = "<< c.x << ", y = " << c.y << ", l = "<< d.l << ", h = " << d.h << ")" << endl;
   Forme* rc0 = new Rectangle(c, d);
   CanValid.ajouterForme(rc0);
   
   c.x = 2;
   c.y = 2;
   cout <<"Carre(x = "<< c.x << ", y = " << c.y << ", cote = 4)"<< endl;
   Forme* cac0 = new Carre(c, 4);
   CanValid.ajouterForme(cac0);
   
   cout << "***Étape 9 : Cacher la couche 2" <<endl;
   CanValid.cacherCouche(2);
   
   cout << "***Étape 10 : Activer la couche 1"<< endl;
   CanValid.activerCouche(1);
   
   cout << "***Étape 11 : Translater la couche avec des valeurs non nulles"<<endl;
   cout << "Les valeurs utilisé sont : (x = 10, y= 10)" << endl;
   CanValid.translater(10,10);
   
   cout << "***Étape 12 : Afficher le canevas" << endl;
   CanValid.afficher(std::cout);
   
   cout << "***Étape 13 : Afficher l'aire du canevas"<<endl;
   cout << "L'aire total du caneva est de :" << CanValid.aire() << endl;
   
   cout << "***Étape 14 : Retirer la première forme de la couche" << endl;
   CanValid.retirerForme(0);
   
   cout << "***Étape 15 : Afficher le canevas"<< endl; 
   CanValid.afficher(std::cout);
   
   cout << "***Étape 16 : Afficher l'aire du canevas" <<endl;
   cout << "L'aire total du caneva est de :" << CanValid.aire() << endl;
   
   cout << "***Étape 17 : Réinitialiser le canevas"<< endl;
   CanValid.reinitialiser();
   
   cout << "***Étape 18 : Afficher le canevas"<< endl; 
   CanValid.afficher(std::cout);
   
   cout << "***Étape 19 : Afficher l'aire du canevas" <<endl;
   cout << "L'aire total du caneva est de :" << CanValid.aire() << endl;
   
   cout << "Fin du test de validation"<< endl;
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
   cout << "PLAN DE TEST" << endl; 
   cout << "" << endl;  
   
   Canevas CanValid;
   Coordonnee c;
   Dimension d;
   
   cout<< "*** TEST 1"<<endl;
   cout<< "Nom de la fonction à tester: Retirer forme a partir du canevas"<<endl;
   cout<< "Entrée: Un index plus grand que la taille"<<endl;
   CanValid.activerCouche(0);
   if (CanValid.retirerForme(3)==true) cout<<"Forme retirée"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 2"<<endl;
   cout<< "Nom de la fonction à tester: Retirer forme a partir du canevas"<<endl;
   cout<< "Entrée: Un index négatif"<<endl;
   if (CanValid.retirerForme(-2)==true) cout<<"forme retirée"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 3"<<endl;
   cout<< "Nom de la fonction à tester: Retirer forme a partir du canevas"<<endl;
   cout<< "Entrée: Un index plus grand que la capacité"<<endl;
   if (CanValid.retirerForme(14)==true) cout<<"Forme retirée"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 4"<<endl;
   cout<< "Nom de la fonction à tester: Réinitialiser le canevas"<<endl;
   cout<< "Entrée: Un canevas vide"<<endl;
   if (CanValid.reinitialiser()==true) cout<<"canevas reinitialisé"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 5"<<endl;
   cout<< "Nom de la fonction à tester: activer une couche a partir du canevas"<<endl;
   cout<< "Entrée: Un index plus grand que le nombre de couches possibles"<<endl;
   if (CanValid.activerCouche(7)==true) cout<<"couche activée"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 6"<<endl;
   cout<< "Nom de la fonction à tester: activer une couche a partir du canevas"<<endl;
   cout<< "Entrée: Un index négatif"<<endl;
   if (CanValid.activerCouche(-3)==true) cout<<"couche activée"<<endl;
   else cout<<"erreur"<<endl;
   
   cout<< "*** TEST 7"<<endl;
   cout<< "Nom de la fonction à tester: calculer l'aire d'un cercle"<<endl;
   cout<< "Entrée: Un rayon négatif"<<endl;
   c.x=0;
   c.y=0;
   Cercle testCercle (c, -5);
   cout<<"L'aire du cercle est:"<<testCercle.aire()<<endl;
   
   cout<< "*** TEST 8"<<endl;
   cout<< "Nom de la fonction à tester: calculer l'aire d'un rectangle"<<endl;
   cout<< "Entrée: Une hauteur négative et une largeur positive"<<endl;
   d.h=-3;
   d.l=3;
   Rectangle testRect (c, d);
   cout<<"L'aire du rectangle est :"<<testRect.aire()<<endl;
   
   cout<< "*** TEST 8"<<endl;
   cout<< "Nom de la fonction à tester: Changer l'état d'une couche"<<endl;
   cout<< "Entrée: Un état qui n'existe pas comme bonjour"<<endl;
   Couche NomCouche;
   if (NomCouche.ChangementEtat("Bonjour")==true) cout<<"Changement d'état réussi"<<endl;
   else cout<<"erreur"<<endl;
};
