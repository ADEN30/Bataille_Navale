#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//coordonnees pour chaque bateau
struct Coordonnees{
    int x ;
    string y ; 

};



//permet d'avoir plusieurs joueurs
struct Joueur{
    string nom;
    int niveau_IA, tour=0, Pas=1, Nombre_de_tour=0;
vector <Coordonnees> Porte_Avion;
vector <Coordonnees> Croiseur;
vector <Coordonnees> Contre_Torpilleur;
vector <Coordonnees> Sous_marins;
vector <Coordonnees> Torpilleur;
vector <Coordonnees> Memmoire;
vector <Coordonnees> Memmoire_tir_louper;
vector <Coordonnees> Toute_Memmoire;



};

//joueur
vector <Coordonnees> Localisation_Port_Avion(vector <Coordonnees>);
vector <Coordonnees> Localisation_Croiseur(vector <Coordonnees>);  
vector <Coordonnees> Localisation_Contre_Torpilleur(vector <Coordonnees>) ;
vector <Coordonnees> Localisation_Sous_marins(vector <Coordonnees> );
vector <Coordonnees> Localisation_Torpilleur(vector <Coordonnees>);

//Ordinateur
string Orientation(int);
int AleatoireX();
string AleatoireY();
vector <Coordonnees> Localisation_Port_Avion(vector <Coordonnees> , int, char);
vector <Coordonnees> Localisation_Croiseur(vector <Coordonnees>, int, char);  
vector <Coordonnees> Localisation_Contre_Torpilleur(vector <Coordonnees>, int , char) ;
vector <Coordonnees> Localisation_Sous_marins(vector <Coordonnees> , int, char);
vector <Coordonnees> Localisation_Torpilleur(vector <Coordonnees>, int, char);

//Pour les deux modes;
vector <Coordonnees> Choixdubateau(int&, const Joueur&);
void Plan();
int Mode();
void Grille(const Joueur&);

//vérification pour savoir si une case est déjà occupée par un bateau
vector <bool> emplacementlibre(const vector<Coordonnees>& , vector<Coordonnees>&);
vector <bool> emplacementlibre( const vector<Coordonnees>&, const vector<Coordonnees>&, vector<Coordonnees>&);
vector <bool> emplacementlibre(const vector<Coordonnees>&, const vector<Coordonnees>&, const vector<Coordonnees>&, vector<Coordonnees>& );
vector <bool> emplacementlibre( const vector<Coordonnees>&, const vector<Coordonnees>&,const vector<Coordonnees>&, const vector<Coordonnees>&, vector<Coordonnees>&);

//les deux fonctions permettent le bon déroulment du jeux
bool Action1(Joueur &Player1,Joueur &Player2);
bool Action2(Joueur &Player1,Joueur &Player2);
void bataille(Joueur &, Joueur &);
void bateau(const Joueur&);



//surcharge d'opérateur
ostream &operator<<(ostream &, const Joueur &);
ostream &operator<<(ostream& , const vector<Coordonnees> &);
istream &operator>>(istream&, Joueur&);
void operatorpush_back(vector <Coordonnees>& , Coordonnees&);

//clear terminal
void Clear();
void Pause();

//direction des bateaux
void droite(vector<Coordonnees>&, char, int);
void gauche(vector<Coordonnees>&, char, int);
void bas(vector<Coordonnees>&, char, int);
void haut(vector<Coordonnees>&, char, int);