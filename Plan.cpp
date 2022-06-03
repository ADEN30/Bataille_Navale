#include "Plan.h"




//joueur
//place les bateaux
vector <Coordonnees> Localisation_Port_Avion(vector <Coordonnees> vecteur){
    int X; //déclaration d'une variable x qui sera initialisé par le joueur
    string Y, orientation; // déclaration d'une variable y que le joueur devra initialisé et une variable orientation qui nous servira au joueur pour choisir l'orienation du bateau

    do{                                 
        cout << "Entrer x et y: ";
        cin >> X >> Y;;
        
    }
    while (X<1 || X>10 || Y[0]<'A' || Y[0]>'J');// boucle qui vérifit que le joueur entre des nombre et des lettrees dans la plage autorisée

    if (X >=5 && X <=6 && Y[0] >= 'E' && Y[0] <= 'F'){  // première condition pour savoir si la case demandé se trouve à un endroit ou toutes les orientations sont possibles
        cout <<"Verticalement vers la Haut (Presse H) " << endl;
        cout <<"Verticalement vers la Bas (Presse D) " << endl;
        cout <<"Horizontalement vers la Gauche (Presse L) " << endl;
        cout <<"Horizontalement vers la Droite (Presse R) " << endl;
        cin >> orientation;
        switch(orientation[0]){      // le switch permet de sélectionner une case dans laquelle des actions sont définis, comme ici en focntion de la lettre rentré on cherche la case correspondante et on exécute puis on sort du switch avec le break
            case 'H':{
                haut(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur; // facultatif 
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;                
            }
        }
    }

    else if (X<5 && Y[0] < 'E'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }


            }
    }
    else if (X<5 && Y[0]>'F'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalment vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R': {
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>6 && Y[0]>'F'){
            cout << "Horizontalement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'L': {
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>6 && Y[0]<'E'){
        cout << "Horizontalement vers la Gauche (Presse L)" << endl;
        cout << "Verticalment vers le Bas (Presse D)" << endl;
        cin >> orientation;
        switch(orientation[0]){
            case 'L':{
                gauche(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
            case 'D':{
                bas(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
        }
    }
    else if (X<5 && Y[0]>='E' && Y[0]<='F'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Droite (Presse R)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>6 && Y[0]>'E' && Y[0]<='F'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Gauche (Presse L)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'E' && X>=5 && X<=6){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Bas(Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'F' && X>=5 && X<=6){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Croiseur(vector <Coordonnees>vecteur){
int X; //déclaration d'une variable x qui sera initialisé par le joueur
    string Y, orientation; // déclaration d'une variable y que le joueur devra initialisé et une variable orientation qui nous servira au joueur pour choisir l'orienation du bateau

    do{                                 
        cout << "Entrer x et y: ";
        cin >> X >> Y;;
        
    }
    while (X<1 || X>10 || Y[0]<'A' || Y[0]>'J');// boucle qui vérifit que le joueur entre des nombre et des lettrees dans la plage autorisée

    if (X >=4 && X <=7 && Y[0] >= 'D' && Y[0] <= 'G'){  // première condition pour savoir si la case demandé se trouve à un endroit ou toutes les orientations sont possibles
        cout <<"Verticalement vers la Haut (Presse H) " << endl;
        cout <<"Verticalement vers la Bas (Presse D) " << endl;
        cout <<"Horizontalement vers la Gauche (Presse L) " << endl;
        cout <<"Horizontalement vers la Droite (Presse R) " << endl;
        cin >> orientation;
        switch(orientation[0]){      // le switch permet de sélectionner une case dans laquelle des actions sont définis, comme ici en focntion de la lettre rentré on cherche la case correspondante et on exécute puis on sort du switch avec le break
            case 'H':{
                haut(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur; // facultatif 
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;                
            }
        }
    }

    else if (X<4 && Y[0] < 'D'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }


            }
    }
    else if (X<4 && Y[0]>'G'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalment vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R': {
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>7 && Y[0]>'G'){
            cout << "Horizontalement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'L': {
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>7 && Y[0]<'D'){
        cout << "Horizontalement vers la Gauche (Presse L)" << endl;
        cout << "Verticalment vers le Bas (Presse D)" << endl;
        cin >> orientation;
        switch(orientation[0]){
            case 'L':{
                gauche(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
            case 'D':{
                bas(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
        }
    }
    else if (X<4 && Y[0]>='D' && Y[0]<='G'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Droite (Presse R)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>7 && Y[0]>='D' && Y[0]<='G'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Gauche (Presse L)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'D' && X>=4 && X<=7){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Bas(Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'G' && X>=4 && X<=7){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Contre_Torpilleur(vector<Coordonnees> vecteur){
int X; //déclaration d'une variable x qui sera initialisé par le joueur
    string Y, orientation; // déclaration d'une variable y que le joueur devra initialisé et une variable orientation qui nous servira au joueur pour choisir l'orienation du bateau

    do{                                 
        cout << "Entrer x et y: ";
        cin >> X >> Y;;
        
    }
    while (X<1 || X>10 || Y[0]<'A' || Y[0]>'J');// boucle qui vérifit que le joueur entre des nombre et des lettrees dans la plage autorisée

    if (X >=3 && X <=8 && Y[0] >= 'C' && Y[0] <= 'H'){  // première condition pour savoir si la case demandé se trouve à un endroit ou toutes les orientations sont possibles
        cout <<"Verticalement vers la Haut (Presse H) " << endl;
        cout <<"Verticalement vers la Bas (Presse D) " << endl;
        cout <<"Horizontalement vers la Gauche (Presse L) " << endl;
        cout <<"Horizontalement vers la Droite (Presse R) " << endl;
        cin >> orientation;
        switch(orientation[0]){      // le switch permet de sélectionner une case dans laquelle des actions sont définis, comme ici en focntion de la lettre rentré on cherche la case correspondante et on exécute puis on sort du switch avec le break
            case 'H':{
                haut(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur; // facultatif 
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;                
            }
        }
    }

    else if (X<3 && Y[0] < 'C'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }


            }
    }
    else if (X<3 && Y[0]>'H'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalment vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R': {
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]>'H'){
            cout << "Horizontalement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'L': {
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]<'C'){
        cout << "Horizontalement vers la Gauche (Presse L)" << endl;
        cout << "Verticalment vers le Bas (Presse D)" << endl;
        cin >> orientation;
        switch(orientation[0]){
            case 'L':{
                gauche(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
            case 'D':{
                bas(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
        }
    }
    else if (X<3 && Y[0]>='C' && Y[0]<='H'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Droite (Presse R)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>8 && Y[0]>='C' && Y[0]<='H'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Gauche (Presse L)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'C' && X>=3 && X<=8){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Bas(Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'H' && X>=3 && X<=8){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Sous_marins(vector <Coordonnees> vecteur){
int X; //déclaration d'une variable x qui sera initialisé par le joueur
    string Y, orientation; // déclaration d'une variable y que le joueur devra initialisé et une variable orientation qui nous servira au joueur pour choisir l'orienation du bateau

    do{                                 
        cout << "Entrer x et y: ";
        cin >> X >> Y;;
        
    }
    while (X<1 || X>10 || Y[0]<'A' || Y[0]>'J');// boucle qui vérifit que le joueur entre des nombre et des lettrees dans la plage autorisée

    if (X >=3 && X <=8 && Y[0] >= 'C' && Y[0] <= 'H'){  // première condition pour savoir si la case demandé se trouve à un endroit ou toutes les orientations sont possibles
        cout <<"Verticalement vers la Haut (Presse H) " << endl;
        cout <<"Verticalement vers la Bas (Presse D) " << endl;
        cout <<"Horizontalement vers la Gauche (Presse L) " << endl;
        cout <<"Horizontalement vers la Droite (Presse R) " << endl;
        cin >> orientation;
        switch(orientation[0]){      // le switch permet de sélectionner une case dans laquelle des actions sont définis, comme ici en focntion de la lettre rentré on cherche la case correspondante et on exécute puis on sort du switch avec le break
            case 'H':{
                haut(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur; // facultatif 
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;                
            }
        }
    }

    else if (X<3 && Y[0] < 'C'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }


            }
    }
    else if (X<3 && Y[0]>'H'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalment vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R': {
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]>'H'){
            cout << "Horizontalement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'L': {
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]<'C'){
        cout << "Horizontalement vers la Gauche (Presse L)" << endl;
        cout << "Verticalment vers le Bas (Presse D)" << endl;
        cin >> orientation;
        switch(orientation[0]){
            case 'L':{
                gauche(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
            case 'D':{
                bas(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
        }
    }
    else if (X<3 && Y[0]>='C' && Y[0]<='H'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Droite (Presse R)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>8 && Y[0]>='C' && Y[0]<='H'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Gauche (Presse L)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'C' && X>=3 && X<=8){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Bas(Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'H' && X>=3 && X<=8){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Torpilleur(vector <Coordonnees> vecteur){
   int X; //déclaration d'une variable x qui sera initialisé par le joueur
    string Y, orientation; // déclaration d'une variable y que le joueur devra initialisé et une variable orientation qui nous servira au joueur pour choisir l'orienation du bateau

    do{                                 
        cout << "Entrer x et y: ";
        cin >> X >> Y;;
        
    }
    while (X<1 || X>10 || Y[0]<'A' || Y[0]>'J');// boucle qui vérifit que le joueur entre des nombre et des lettrees dans la plage autorisée

    if (X >=2 && X <=9 && Y[0] >= 'B' && Y[0] <= 'I'){  // première condition pour savoir si la case demandé se trouve à un endroit ou toutes les orientations sont possibles
        cout <<"Verticalement vers la Haut (Presse H) " << endl;
        cout <<"Verticalement vers la Bas (Presse D) " << endl;
        cout <<"Horizontalement vers la Gauche (Presse L) " << endl;
        cout <<"Horizontalement vers la Droite (Presse R) " << endl;
        cin >> orientation;
        switch(orientation[0]){      // le switch permet de sélectionner une case dans laquelle des actions sont définis, comme ici en focntion de la lettre rentré on cherche la case correspondante et on exécute puis on sort du switch avec le break
            case 'H':{
                haut(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur; // facultatif 
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;                
            }
        }
    }

    else if (X<2 && Y[0] < 'B'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                        return vecteur;
                        break;
                }


            }
    }
    else if (X<2 && Y[0]>'I'){
            cout << "Horizontalement vers la Droite (Presse R)" << endl;
            cout << "Verticalment vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'R': {
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>9 && Y[0]>'I'){
            cout << "Horizontalement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'L': {
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'H': {
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>9 && Y[0]<'B'){
        cout << "Horizontalement vers la Gauche (Presse L)" << endl;
        cout << "Verticalment vers le Bas (Presse D)" << endl;
        cin >> orientation;
        switch(orientation[0]){
            case 'L':{
                gauche(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
            case 'D':{
                bas(vecteur, Y[0], X);
                cout << vecteur;
                return vecteur;
                break;
            }
        }
    }
    else if (X<2 && Y[0]>='B' && Y[0]<='I'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Droite (Presse R)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'R':{
                    droite(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>9 && Y[0]>='B' && Y[0]<='I'){
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cout << "Verticalement vers le Bas (Presse D)" << endl;
            cout << "Horizontalemnt vers la Gauche (Presse L)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                case 'H':{
                    haut(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'D':{
                    bas(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
                case 'L':{
                    gauche(vecteur, Y[0], X);
                    cout << vecteur;
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'B' && X>=2 && X<=9){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Bas(Presse D)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'I' && X>=2 && X<=9){
            cout << "Horizontatelement vers la Droite (Presse R)" << endl;
            cout << "Horizontatelement vers la Gauche (Presse L)" << endl;
            cout << "Verticalement vers le Haut (Presse H)" << endl;
            cin >> orientation;
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                        cout << vecteur;
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}


//génère un nombre aléatoire
int AleatoireX(){
        return rand()%10 + 1;

}

// génère un lettre aléatoire
string AleatoireY(){
    int aleatoire= rand()%10 +1;
    string lettre;
    switch(aleatoire){
        case 1:{
            return lettre='A';
            break;
        }
        case 2:{
            return lettre='B';
            break;
        }
        case 3:{
            return lettre='C';
            break;

        }
        case 4:{
            return lettre='D';
            break;

        }
        case 5:{
            return lettre='E';
            break;

        }
        case 6:{
            return lettre='F';
            break;

        }
        case 7:{
            return lettre='G';
            break;

        }
        case 8:{
            return lettre='H';
            break;

        }
        case 9:{
            return lettre='I';
            break;

        }
        case 10:{
            return lettre='J';
            break;

        }
    }
return lettre;
}
string Orientation(int nb){
    srand(time(0));
    string Orientation;
    switch(nb){
        case 1:{
            int b = rand()%4+1;
            switch(b){

                case 1:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
                case 3:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
                case 4:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 2:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 3:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 4:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 5:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 6:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 7:{
            int b = rand()%2+1;
            switch(b){

                case 1:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 8:{
            int b = rand()%3+1;
            switch(b){

                case 1:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
                case 3:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 9:{
            int b = rand()%3+1;
            switch(b){
                case 1:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
                case 3:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 10:{
            int b = rand()%3+1;
            switch(b){
                case 1:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
                case 3:{
                    Orientation = "D";
                    return Orientation;
                    break;
                }
            }
            break;
        }
        case 11:{
            int b = rand()%3+1;
            switch(b){
                case 1:{
                    Orientation = "R";
                    return Orientation;
                    break;
                }
                case 2:{
                    Orientation = "L";
                    return Orientation;
                    break;
                }
                case 3:{
                    Orientation = "H";
                    return Orientation;
                    break;
                }
            }
            break;
        }
    }
    return Orientation;
}

//Ordinateur
//Permet de placer les bateaux aléatoirement
vector <Coordonnees> Localisation_Port_Avion(vector <Coordonnees> vecteur, int X, string Y){
    string orientation;

    if (X >=5 && X <=6 && Y[0] >= 'E' && Y[0] <= 'F'){
         orientation = Orientation(1);
        switch(orientation[0]){ //Le switch choisi en focntion de l'orientation donnée aléatoirement précédement.
            case 'H':{
                    haut(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'D':{ 
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'L':{
                    gauche(vecteur,Y[0], X);
                return vecteur;
                break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                return vecteur;
                break;                
            }
        }
    }

    else if (X<5 && Y[0] < 'E'){
            orientation = Orientation(2);
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }


            }
    }
    else if (X<5 && Y[0]>'F'){
            orientation = Orientation(3);
            switch(orientation[0]){
                case 'R': {
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>6 && Y[0]>'F'){
            orientation = Orientation(7);
            switch(orientation[0]){
                case 'L': {
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>6 && Y[0]<'E'){
        orientation = Orientation(6);
        switch(orientation[0]){
            case 'L':{
                    gauche(vecteur, Y[0], X);
                return vecteur;
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;
            }
        }
    }
    else if (X<5 && Y[0]>='E' && Y[0]<='F'){
            orientation = Orientation(8);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>6 && Y[0]>='E' && Y[0]<='F'){
            orientation = Orientation(9);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'L':{
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'E' && X>=5 && X<=6){
            orientation = Orientation(10);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'F' && X>=5 && X<=6){
            orientation = Orientation(11);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Croiseur(vector <Coordonnees> vecteur, int X, string Y){
    string orientation;

    if (X >=4 && X <=7 && Y[0] >= 'D' && Y[0] <= 'G'){
        orientation = Orientation(1);
        switch(orientation[0]){ //Le switch choisi en focntion de l'orientation donnée aléatoirement précédement.
            case 'H':{
                    haut(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'D':{ 
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'L':{
                    gauche(vecteur,Y[0], X);
                return vecteur;
                break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                return vecteur;
                break;                
            }
        }
    }


    else if (X<4 && Y[0] < 'D'){
            orientation = Orientation(2);
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }


            }
    }
            
    else if (X<4 && Y[0]>'G'){
            orientation = Orientation(3);
            switch(orientation[0]){
                case 'R': {
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>7 && Y[0]>'G'){
            orientation = Orientation(7);
            switch(orientation[0]){
                case 'L': {
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>7 && Y[0]<'D'){
        orientation = Orientation(6);
        switch(orientation[0]){
            case 'L':{
                    gauche(vecteur, Y[0], X);
                return vecteur;
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;
            }
        }
    }
    else if (X<4 && Y[0]>='D' && Y[0]<='G'){
            orientation = Orientation(8);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>7 && Y[0]>='D' && Y[0]<='G'){
            orientation = Orientation(9);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'L':{
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'D' && X>=4 && X<=7){
            orientation = Orientation(10);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'G' && X>=4 && X<=7){
            orientation = Orientation(11);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Contre_Torpilleur(vector<Coordonnees> vecteur, int X, string Y){
    string orientation;

    if (X >=3 && X <=8 && Y[0] >= 'C' && Y[0] <= 'H'){
        orientation = Orientation(1);
        switch(orientation[0]){ //Le switch choisi en focntion de l'orientation donnée aléatoirement précédement.
            case 'H':{
                    haut(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'D':{ 
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'L':{
                    gauche(vecteur,Y[0], X);
                return vecteur;
                break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                return vecteur;
                break;                
            }
        }
    }

    else if (X<3 && Y[0] < 'C'){
            orientation = Orientation(2);
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }


            }
    }
    else if (X<3 && Y[0]>'H'){
            orientation = Orientation(3);
            switch(orientation[0]){
                case 'R': {
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]>'H'){
            orientation = Orientation(7);
            switch(orientation[0]){
                case 'L': {
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]<'C'){
        orientation = Orientation(6);
        switch(orientation[0]){
            case 'L':{
                    gauche(vecteur, Y[0], X);
                return vecteur;
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;
            }
        }
    }
    else if (X<3 && Y[0]>='C' && Y[0]<='H'){
            orientation = Orientation(8);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>8 && Y[0]>'C' && Y[0]<='H'){
            orientation = Orientation(9);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'L':{
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'C' && X>=3 && X<=8){
            orientation = Orientation(10);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'H' && X>=3 && X<=8){
            orientation = Orientation(11);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Sous_marins(vector <Coordonnees> vecteur, int X, string Y){
    string  orientation;

    if (X >=3 && X <=8 && Y[0] >= 'C' && Y[0] <= 'H'){
        orientation = Orientation(1);
        switch(orientation[0]){ //Le switch choisi en focntion de l'orientation donnée aléatoirement précédement.
            case 'H':{
                    haut(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'D':{ 
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'L':{
                    gauche(vecteur,Y[0], X);
                return vecteur;
                break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                return vecteur;
                break;                
            }
        }
    }

    else if (X<3 && Y[0] < 'C'){
            orientation = Orientation(2);
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }


            }
    }
    else if (X<3 && Y[0]>'H'){
            orientation = Orientation(3);
            switch(orientation[0]){
                case 'R': {
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>8 && Y[0]>'H'){
            orientation = Orientation(7);
            switch(orientation[0]){
                case 'L': {
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>8 && Y[0]<'C'){
        orientation = Orientation(6);
        switch(orientation[0]){
            case 'L':{
                    gauche(vecteur, Y[0], X);
                return vecteur;
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;
            }
        }
    }
    else if (X<3 && Y[0]>='C' && Y[0]<='H'){
            orientation = Orientation(8);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>8 && Y[0]>='C' && Y[0]<='H'){
            orientation = Orientation(9);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'L':{
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'C' && X>=3 && X<=8){
            orientation = Orientation(10);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'H' && X>=3 && X<=8){
            orientation = Orientation(11);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}
vector <Coordonnees> Localisation_Torpilleur(vector <Coordonnees> vecteur, int X, string Y){
    string  orientation;

    if (X >=2 && X <=9 && Y[0] >= 'B' && Y[0] <= 'I'){
        orientation = Orientation(1);
        switch(orientation[0]){ //Le switch choisi en focntion de l'orientation donnée aléatoirement précédement.
            case 'H':{
                    haut(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'D':{ 
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;

            }
            case 'L':{
                    gauche(vecteur,Y[0], X);
                return vecteur;
                break;
            }
            case 'R':{
                    droite(vecteur, Y[0], X);
                return vecteur;
                break;                
            }
        }
    }

    else if (X<2 && Y[0] < 'B'){
            orientation = Orientation(2);
            switch(orientation[0]){
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }


            }
    }
    else if (X<2 && Y[0]>'I'){
            orientation = Orientation(3);
            switch(orientation[0]){
                case 'R': {
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>9 && Y[0]>'I'){
            orientation = Orientation(7);
            switch(orientation[0]){
                case 'L': {
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'H': {
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }

    else if (X>9 && Y[0]<'B'){
        orientation = Orientation(6);
        switch(orientation[0]){
            case 'L':{
                    gauche(vecteur, Y[0], X);
                return vecteur;
                break;
            }
            case 'D':{
                    bas(vecteur, Y[0], X);
                return vecteur;
                break;
            }
        }
    }
    else if (X<2 && Y[0]>='B' && Y[0]<='I'){
            orientation = Orientation(8);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'R':{
                        droite(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            }
    }
    else if (X>9 && Y[0]>='B' && Y[0]<='I'){
            orientation = Orientation(9);
            switch(orientation[0]){
                case 'H':{
                        haut(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'D':{
                        bas(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
                case 'L':{
                        gauche(vecteur, Y[0], X);
                    return vecteur;
                    break;
                }
            } 
    }

    else if (Y[0]<'B' && X>=2 && X<=9){
            orientation = Orientation(10);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'D': {
                        bas(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }

    else if (Y[0]>'I' && X>=2 && X<=9){
            orientation = Orientation(11);
            switch(orientation[0]){
                    case 'R': {
                        droite(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'L': {
                        gauche(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
                    case 'H': {
                        haut(vecteur, Y[0], X);
                         return vecteur;
                         break;
                    }
            }
    }
    return vecteur;
}


//Pour les deux modes, une fonction qui permet de présenter le plan, une second qui permet d'indiquer les bateaux a plcer et celle qui sont en cours de placement, une troisème qui permet de choisir le mode de jeux
void Plan(){
for (int i = 1; i <=10 ; i++)
{
    cout << "\t" << i;
}
cout << "\n\n";
    for (char i='A'; i <= 'J' ; i++)
    {
        cout << i << "\t";
        for (int j=1; j<=10 ; j++)
        cout << j << i << "\t";
        cout <<"\n\n";
    }
}
vector <Coordonnees> Choixdubateau(int &compteurBateau, const Joueur &J){

    vector <Coordonnees> navire;
    int i = compteurBateau;
    switch (i){
        case 1 :{
            if(J.nom != "Ordinateur"){
            cout << "\n 1. Porte Avion sur 5 cases" << endl;
            cout << "\n Placement du Porte Avion : "<<endl;}
            vector <Coordonnees> Porte_Avion(5);
            navire = Porte_Avion;
            return navire;
            break;
        }
        case 2 :{
            if(J.nom != "Ordinateur"){
            cout << "\n 2. Croiseur placer sur 4 cases" << endl;
            cout << "\n PLacement du Croiseur : " << endl;}
            vector <Coordonnees> Croiseur(4);
            navire = Croiseur;
            return navire;
            break;
        }
        case 3 :{
            if(J.nom != "Ordinateur"){
            cout << "\n 3. Contre Torpilleur placer sur 3 cases" << endl;
            cout << "\n Placement du Contre Torpilleur : "<< endl;}
            vector <Coordonnees> Contre_Torpilleur(3);
            navire = Contre_Torpilleur;
            return navire;
            break;
        }
        case 4 :{
            if(J.nom != "Ordinateur"){
            cout << "\n 4. Sous-Marins placer sur 3 cases" << endl;
            cout << "\n Placement du sous-marins : "<< endl;}
            vector <Coordonnees> Sous_marins(3);
            navire = Sous_marins;
            return navire;
            break;
        }
        case 5 :{ 
            if(J.nom != "Ordinateur"){
            cout << "\n 5. Torptilleur placer sur 2 cases" << endl;
            cout << "\n Placement du Torpilleur : " << endl;}
            vector <Coordonnees> Torpilleur(2);            
            navire = Torpilleur;
            return navire;
            break;
        }
    }
    
return navire;
}
int Mode(){
    int mode;
    
    do{
        cout << "Choisir le mode de jeu :" << endl;
        cout << "1. Joueur vs Joueur" << endl;
        cout << "2. Joueur vs Ordinateur" << endl;
        cout << "0. Quitter le jeu" << endl;
        cin >> mode;
    }while (mode != 0 && mode != 1 && mode != 2);

    return mode;
}
void Grille(const Joueur& Player )
{
    if(Player.nom != "Ordinateur"){
    cout << "\n\n";
    cout << Player.nom;
    cout << "\n\n";
    for (int i = 1; i <=10 ; i++)
{
    cout << "\t" << i;
}
cout << "\n\n";
    for (char ind1= 'A'; ind1 <= 'J' ; ind1++)
    {
        cout << ind1 << "\t";
        for (int ind2=1; ind2<=10 ; ind2++){
            for(int ind3 =0; ind3<Player.Porte_Avion.size(); ind3++){
            if (ind2== Player.Porte_Avion[ind3].x && ind1== Player.Porte_Avion[0].y[0]){
                        cout << "P-A" << "\t";
                        ind2++;
                }
            else if (ind2== Player.Porte_Avion[0].x && ind1==Player.Porte_Avion[ind3].y[0])
            {
                cout << "P-A" << "\t";
                ind2++;
            }
            }
            for(int ind3 =0; ind3<Player.Croiseur.size(); ind3++){
            if (ind2== Player.Croiseur[ind3].x && ind1== Player.Croiseur[0].y[0]){
                        cout << "C" << "\t";
                        ind2++;
                }
            else if (ind2== Player.Croiseur[0].x && ind1==Player.Croiseur[ind3].y[0])
            {
                cout << "C" << "\t";
                ind2++;
            }
            }
            for(int ind3 =0; ind3<Player.Contre_Torpilleur.size(); ind3++){
            if (ind2== Player.Contre_Torpilleur[ind3].x && ind1== Player.Contre_Torpilleur[0].y[0]){
                        cout << "C-T" << "\t";
                        ind2++;
                }
            else if (ind2== Player.Contre_Torpilleur[0].x && ind1==Player.Contre_Torpilleur[ind3].y[0])
            {
                cout << "C-T" << "\t";
                ind2++;
            }
            }
            for(int ind3 =0; ind3<Player.Sous_marins.size(); ind3++){
            if (ind2== Player.Sous_marins[ind3].x && ind1== Player.Sous_marins[0].y[0]){
                        cout << "S-M" << "\t";
                        ind2++;
                }
            else if (ind2== Player.Sous_marins[0].x && ind1==Player.Sous_marins[ind3].y[0])
            {
                cout << "S-M" << "\t";
                ind2++;
            }
            }
            for(int ind3 =0; ind3<Player.Torpilleur.size(); ind3++){
            if (ind2== Player.Torpilleur[ind3].x && ind1== Player.Torpilleur[0].y[0]){
                        cout << "T" << "\t";
                        ind2++;
                }
            else if (ind2== Player.Torpilleur[0].x && ind1==Player.Torpilleur[ind3].y[0])
            {
                cout << "T" << "\t";
                ind2++;
            }
            }
            if(ind2<=10 && ind2>=1 && ind1>='A' && ind1<='J')
                cout << ind2 << ind1 << "\t";
            }
            
        
         cout <<"\n\n";   
        }
        cout << "\n";
    if (Player.Memmoire.empty()==false){
        cout << "Cases touchees chez l'adversaire " << Player.Memmoire.size()<< " : " << endl;
        for (int i = 0; i <Player.Memmoire.size(); i++){
            cout << Player.Memmoire[i].x << Player.Memmoire[i].y << "\t"; }
            cout << "\n\n";
            }
    if(Player.Memmoire_tir_louper.empty()==false){
        cout << "Tir dans l'eau : " <<  endl;
            for(int i = 0; i<Player.Memmoire_tir_louper.size(); i++){
                cout << Player.Memmoire_tir_louper[i].x << Player.Memmoire_tir_louper[i].y << "\t";
        }   
        cout << "\n\n";
    }

    
    }
    /*else if (Player.nom=="Ordinateur"){
        if(Player.Toute_Memmoire.empty() == false){
            cout << "Toute la memmoire : " << endl;
            for(int i = 0; i <Player.Toute_Memmoire.size(); i++){
                cout << Player.Toute_Memmoire[i].x << Player.Toute_Memmoire[i].y << "\t";
            }
            cout << "\n\n";
        }
    }
    */
    
        
}

//Vérifications pour savoir si une case est libre ou non dans le plan afin de placer le bateau et une fonction qui vérifie si un bateau a coulé
vector <bool> emplacementlibre(const vector<Coordonnees> &vecteur1 , vector<Coordonnees> &vecteur2){
    vector <bool> libre;
    for (int ind1=0; ind1<vecteur1.size(); ind1++){

        for (int ind2 = 0; ind2<vecteur2.size(); ind2++){

            if(vecteur1[ind1].x == vecteur2[ind2].x  ){

                if(vecteur1[ind1].y != vecteur2[ind2].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur1[ind1].x != vecteur2[ind2].x){
                if(vecteur1[ind1].y == vecteur2[ind2].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }            
    }
    return libre;
    libre.clear();
}
vector <bool> emplacementlibre(const vector<Coordonnees> &vecteur1, const vector<Coordonnees> &vecteur2, vector<Coordonnees> &vecteur3)
{
vector <bool> libre;
    for (int ind3=0; ind3<vecteur3.size(); ind3++){

        for (int ind1 = 0; ind1<vecteur1.size(); ind1++){
            if(vecteur3[ind3].x == vecteur1[ind1].x  ){

                if(vecteur3[ind3].y != vecteur1[ind1].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur3[ind3].x != vecteur1[ind1].x){
                if(vecteur3[ind3].y == vecteur1[ind1].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }  
        for (int ind2 = 0; ind2<vecteur2.size(); ind2++){

            if(vecteur3[ind3].x == vecteur2[ind2].x  ){

                if(vecteur3[ind3].y != vecteur2[ind2].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur3[ind3].x != vecteur2[ind2].x){
                if(vecteur3[ind3].y == vecteur2[ind2].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }

    }

    return libre;
    libre.clear();


}
vector <bool> emplacementlibre(const vector<Coordonnees> &vecteur1, const vector<Coordonnees> &vecteur2, const vector<Coordonnees> &vecteur3,vector<Coordonnees> &vecteur4)
{
vector <bool> libre;
    for (int ind4=0; ind4<vecteur4.size(); ind4++){

        for (int ind1 = 0; ind1<vecteur1.size(); ind1++){

            if(vecteur4[ind4].x == vecteur1[ind1].x  ){

                if(vecteur4[ind4].y != vecteur1[ind1].y)
                    libre.push_back(true);

                else {
                    libre.push_back(false);
                }
        }
            
            else if (vecteur4[ind4].x != vecteur1[ind1].x){
                if(vecteur4[ind4].y == vecteur1[ind1].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }  
        for (int ind2 = 0; ind2<vecteur2.size(); ind2++){

            if(vecteur4[ind4].x == vecteur2[ind2].x){

                if(vecteur4[ind4].y != vecteur2[ind2].y)
                    libre.push_back(true);

                else {
                    libre.push_back(false);
                }
        }
            
            else if (vecteur4[ind4].x != vecteur2[ind2].x){
                if(vecteur4[ind4].y == vecteur2[ind2].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }
         for (int ind3 = 0; ind3<vecteur3.size(); ind3++){

            if(vecteur4[ind4].x == vecteur3[ind3].x  ){

                if(vecteur4[ind4].y != vecteur3[ind3].y)
                    libre.push_back(true);

                else {
                    libre.push_back(false);
                }
            }
            
            else if (vecteur4[ind4].x != vecteur3[ind3].x){
                if(vecteur4[ind4].y == vecteur3[ind3].y  ){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }

    }

    return libre;
    libre.clear();


}
vector <bool> emplacementlibre(const vector<Coordonnees> &vecteur1, const vector<Coordonnees> &vecteur2,const vector<Coordonnees> &vecteur3, const vector<Coordonnees> &vecteur4, vector<Coordonnees> &vecteur5)
{
vector <bool> libre;
    for (int ind5=0; ind5<vecteur5.size(); ind5++){

        for (int ind1 = 0; ind1<vecteur1.size(); ind1++){

            if(vecteur5[ind5].x == vecteur1[ind1].x){

                if(vecteur5[ind5].y != vecteur1[ind1].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur5[ind5].x != vecteur1[ind1].x){
                if(vecteur5[ind5].y == vecteur1[ind1].y){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }  
        for (int ind2 = 0; ind2<vecteur2.size(); ind2++){

            if(vecteur5[ind5].x == vecteur2[ind2].x){

                if(vecteur5[ind5].y != vecteur2[ind2].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
            }
            
            else if (vecteur5[ind5].x != vecteur2[ind2].x){
                if(vecteur5[ind5].y == vecteur2[ind2].y){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }
         for (int ind3 = 0; ind3<vecteur3.size(); ind3++){

            if(vecteur5[ind5].x == vecteur3[ind3].x){

                if(vecteur5[ind5].y != vecteur3[ind3].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur5[ind5].x != vecteur3[ind3].x){
                if(vecteur5[ind5].y == vecteur3[ind3].y){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }

         for (int ind4 = 0; ind4<vecteur4.size(); ind4++){

            if(vecteur5[ind5].x == vecteur4[ind4].x){

                if(vecteur5[ind5].y != vecteur4[ind4].y)
                    libre.push_back(true);

                else 
                    libre.push_back(false);
            
        }
            
            else if (vecteur5[ind5].x != vecteur4[ind4].x){
                if(vecteur5[ind5].y == vecteur4[ind4].y){
                    libre.push_back(true); 
                    
                }
                else 
                    libre.push_back(true);  
                
            }
        }

    }

    return libre;
    libre.clear();


}

void bateau(const Joueur& User){
    cout << "Composition de la flotte enemie : ";
    if(User.Porte_Avion.empty()== false)
    {
        cout << "Porte-Avion\t";
    }
    else cout << "";

    if(User.Croiseur.empty()== false)
    {
        cout << "Croiseur\t";
    }
    else cout << "";
    if(User.Contre_Torpilleur.empty()== false)
    {
        cout << "Contre-Torpilleur\t";
    }
    else cout << "";
    if(User.Sous_marins.empty()== false)
    {
        cout << "Sous-marins\t";
    }
    else cout << "";
    if(User.Torpilleur.empty()== false)
    {
        cout << "Torpilleur";
    }
    else cout << "";

    cout << "\n\n";

}

bool Action1(Joueur &Player1,Joueur &Player2)
{     
    bool end1=false;
    int J =  1;
    do{

        if (Player1.Porte_Avion.empty()==true && Player1.Croiseur.empty()==true && Player1.Contre_Torpilleur.empty()==true && Player1.Sous_marins.empty()==true && Player1.Torpilleur.empty()==true)
                {
                    end1 = true;
                    cout << "Victoire de " << Player2.nom << ". Je pense que " << Player1.nom << " est encore trop faible." << endl;
                     end1== true;
                    break;
                }

        else if(Player2.Porte_Avion.empty()==true && Player2.Croiseur.empty()==true && Player2.Contre_Torpilleur.empty()==true && Player2.Sous_marins.empty()==true && Player2.Torpilleur.empty()==true)
            { 
                cout << "Victoire de " << Player1.nom << ". Je pense que " << Player2.nom << " est encore trop faible." << endl;
                end1=true;
                break;
            }

        else 
        end1= false;

        if (J==1){
                Clear();
                cout <<"Tour numeros : "<< Player2.Nombre_de_tour++ << "\n" << endl;
                Grille(Player2);
                if(Player2.nom!="Ordinateur"){
                    bateau(Player1);
                }
                cout << "Attaquant : " << Player2.nom << "\t" <<"Defense : " << Player1.nom  << endl;
                cout << "Case a cibler sur " << Player1.nom << " : ";
                bataille(Player1, Player2);
                J++;
                
            }
        
         else if (J==2){
                Clear();
                cout <<"Tour numeros : "<< Player1.Nombre_de_tour++ << "\n" << endl;
                Grille(Player1);
                bateau(Player2);
                cout << "Attaquant : " << Player1.nom << "\t" <<"Defense : " << Player2.nom << endl;
                cout << "Case a cibler sur " << Player2.nom << " : ";
                bataille(Player2, Player1);
                J--;
        }
        Pause();
    } while(end1 != true);
    return true;
}
void bataille(Joueur &P, Joueur &D)
{
    vector <bool> eau;
    vector <bool> missed;
    Coordonnees Defend, Louper;
    Louper.x = 0;
    
    bool toucher = false;
    bool different = false;
    bool identique = false;

    eau.clear();
    missed.clear();
    
    if(D.nom != "Ordinateur"){
        do{
        cin >> Defend.x >>Defend.y;
        }while(Defend.x>10 || Defend.x<1 || Defend.y[0] >'J' || Defend.y[0]<'A');
    }
    
    else if(D.nom=="Ordinateur"){
        do{
         if(D.niveau_IA==2 ){
                if(D.Memmoire.empty()==true){
                    Defend.x = AleatoireX(); 
                    Defend.y = AleatoireY();
                }
                else
                {
                    for(int i =0; i<D.Memmoire.size(); i++){
                        if(D.Memmoire[i].x!=0){
                            switch(D.tour){
                                case 0:{
                                    if(D.Memmoire[i].x < 10){
                                            Defend.x = D.Memmoire[i].x+D.Pas;
                                            Defend.y = D.Memmoire[i].y;
                                            D.tour++;
                                            D.Pas++;
                                    }
                                    else if(D.Memmoire[i].x == 10){
                                            Defend.x = D.Memmoire[i].x-D.Pas;
                                            Defend.y = D.Memmoire[i].y;
                                            D.tour= D.tour+2;
                                            D.Pas++;
                                    }
                                    break;
                                }
                                case 1:{
                                    if(D.Memmoire[D.Memmoire.size()-1].x!=0 && D.Memmoire[D.Memmoire.size()-1].x < 10){
                                        Defend.x = D.Memmoire[i].x+D.Pas;
                                        Defend.y = D.Memmoire[i].y;
                                        D.Pas++;
                                        break;
                                    }
                                    else if (D.Memmoire[D.Memmoire.size()-1].x ==0 || D.Memmoire[D.Memmoire.size()-1].x >=10 ){
                                            D.Pas=1;
                                            if(D.Memmoire[i].x > 1){
                                                Defend.x = D.Memmoire[i].x-D.Pas;
                                                Defend.y = D.Memmoire[i].y;
                                                D.tour++;
                                                D.Pas++;
                                            }
                                            else if(D.Memmoire[i].y[0] < 'J'){
                                                Defend.x = D.Memmoire[i].x;
                                                Defend.y = D.Memmoire[i].y[0]+D.Pas;
                                                D.tour = D.tour +2;
                                                D.Pas++;
                                            }
                                            else if(D.Memmoire[i].y[0] > 'A'){
                                                Defend.x = D.Memmoire[i].x;
                                                Defend.y = D.Memmoire[i].y[0]-D.Pas;
                                                D.tour = D.tour +3;
                                                D.Pas++;
                                            }
                                        break;
                                    }
                                }
                                case 2:{
                                    if(D.Memmoire[D.Memmoire.size()-1].x!=0 && D.Memmoire[D.Memmoire.size()-1].x > 1){
                                        Defend.x = D.Memmoire[i].x-D.Pas;
                                        Defend.y = D.Memmoire[i].y;
                                        D.Pas++;
                                        break;
                                    }
                                    else if (D.Memmoire[D.Memmoire.size()-1].x ==0 || D.Memmoire[D.Memmoire.size()-1].x <= 1){
                                            D.Pas=1;
                                            if(D.Memmoire[i].y[0] < 'J'){
                                                Defend.x = D.Memmoire[i].x;
                                                Defend.y = D.Memmoire[i].y[0]+D.Pas;
                                                D.tour++;
                                                D.Pas++;
                                            }
                                            else if(D.Memmoire[i].y[0] > 'A'){
                                                Defend.x = D.Memmoire[i].x;
                                                Defend.y = D.Memmoire[i].y[0]-D.Pas;
                                                D.tour = D.tour +2;
                                                D.Pas++;
                                            }
                                        break;
                                    }
                                }
                                case 3:{
                                    if(D.Memmoire[D.Memmoire.size()-1].x!=0 && D.Memmoire[D.Memmoire.size()-1].y[0] < 'J'){
                                        Defend.x = D.Memmoire[i].x;
                                        Defend.y = D.Memmoire[i].y[0]+D.Pas;
                                        D.Pas++;
                                        break;
                                    }
                                    else if (D.Memmoire[D.Memmoire.size()-1].x ==0 || D.Memmoire[D.Memmoire.size()-1].y[0] >= 'J'){
                                            D.Pas=1;
                                            if(D.Memmoire[i].y[0] > 'A'){
                                            Defend.x = D.Memmoire[i].x;
                                            Defend.y = D.Memmoire[i].y[0]-D.Pas;
                                            D.tour++;
                                            D.Pas++;
                                            }
                                            else if(D.Memmoire[i].y[0] <= 'A'){
                                                D.Memmoire.clear();
                                                D.Pas=1;
                                                Defend.x = AleatoireX(); 
                                                Defend.y = AleatoireY();
                                                D.tour++;
                                                D.Pas++;
                                            }
                                        break;
                                    }
                                }
                                case 4:{
                                    if(D.Memmoire[D.Memmoire.size()-1].x!=0 && D.Memmoire[D.Memmoire.size()-1].y[0] > 'A'){
                                        Defend.x = D.Memmoire[i].x;
                                        Defend.y = D.Memmoire[i].y[0]-D.Pas;
                                        D.Pas++;
                                        break;
                                    }
                                    else if (D.Memmoire[D.Memmoire.size()-1].x ==0 || D.Memmoire[D.Memmoire.size()-1].y[0] <= 'A'){
                                            D.Memmoire.clear();
                                            D.Pas=1;
                                            Defend.x = AleatoireX(); 
                                            Defend.y = AleatoireY();
                                            D.tour=0;
                                            break;
                                    }
                                }
                            }
                            break;
                        }
                        else if (D.Memmoire[i].x ==0 && i == D.Memmoire.size()-1){
                            Defend.x = AleatoireX(); 
                            Defend.y = AleatoireY();
                            break;
                        }
                    }
                }
            }
    else {
        Defend.x = AleatoireX(); 
        Defend.y = AleatoireY();
    }
    if(D.Toute_Memmoire.empty()==false){
                for(int i2 =0; i2< D.Toute_Memmoire.size(); i2++){
                    if(D.Toute_Memmoire[i2].x == Defend.x && Defend.y == D.Toute_Memmoire[i2].y){
                        different = false;
                        break;
                    }
                    else{
                        different = true;
                    }
                }
            }
            else different = true;

        }while(different == false);

        cout << Defend.x << Defend.y << endl;
    }
            
            
        
             for(int i=0; i<P.Porte_Avion.size(); i++){
                    if(Defend.x == P.Porte_Avion[i].x && Defend.y == P.Porte_Avion[i].y ){
                        P.Porte_Avion.erase(P.Porte_Avion.begin() +i);
                        cout << "\nTouche" << endl;
                        D.Toute_Memmoire.push_back(Defend);
                        D.Memmoire.push_back(Defend);
                        eau.push_back(false);
                         break;
                    }  
                    else eau.push_back(true);  
                }

                for(int i=0; i<P.Croiseur.size(); i++){
                    if(Defend.x == P.Croiseur[i].x && Defend.y == P.Croiseur[i].y ){
                        P.Croiseur.erase(P.Croiseur.begin()+i);
                        toucher = true;
                        cout << "\nTouche" << endl;
                        D.Memmoire.push_back(Defend);
                        D.Toute_Memmoire.push_back(Defend);
                         eau.push_back(false);
                        break;

                    }
                    else eau.push_back(true);
                }

                for(int i=0; i<P.Contre_Torpilleur.size(); i++){
                    if(Defend.x == P.Contre_Torpilleur[i].x && Defend.y == P.Contre_Torpilleur[i].y ){
                        P.Contre_Torpilleur.erase(P.Contre_Torpilleur.begin()+i);
                        toucher = true;
                        cout << "\nTouche" << endl;
                        D.Memmoire.push_back(Defend);
                        D.Toute_Memmoire.push_back(Defend);
                         eau.push_back(false);
                        break;
                    }
                    else eau.push_back(true);
                }

                for(int i=0; i<P.Sous_marins.size(); i++){
                    if(Defend.x == P.Sous_marins[i].x && Defend.y == P.Sous_marins[i].y ){
                        P.Sous_marins.erase(P.Sous_marins.begin()+i);
                        toucher = true;
                        cout << "\nTouche" << endl;
                        D.Memmoire.push_back(Defend);
                        D.Toute_Memmoire.push_back(Defend);
                         eau.push_back(false);
                        break;
                    }
                    else eau.push_back(true);
                }

                for(int i=0; i<P.Torpilleur.size(); i++){
                    if(Defend.x == P.Torpilleur[i].x && Defend.y == P.Torpilleur[i].y ){
                        P.Torpilleur.erase(P.Torpilleur.begin()+i);
                        toucher = true;
                        cout << "\nTouche" << endl;
                        D.Memmoire.push_back(Defend);
                        D.Toute_Memmoire.push_back(Defend);
                        eau.push_back(false);
                        break;
                    }
                    else eau.push_back(true);
                }

                for(int i = 0; i<eau.size(); i ++){
                    missed.push_back(true);
                }
                if(missed == eau){
                cout << "\nPlouf dans l'eau, c'est rate" << endl;
                if (D.nom=="Ordinateur" ){
                    D.Memmoire.push_back(Louper);
                    for(int i =0; i<D.Toute_Memmoire.size(); i++)
                    {
                        if(D.Toute_Memmoire[i].x==Defend.x && D.Toute_Memmoire[i].y == Defend.y)
                        {
                            identique = true;
                            break;
                        }
                        else 
                        {
                            identique = false;
                        }
                    }
                    if(identique == false){
                        D.Toute_Memmoire.push_back(Defend);
                    }
                }
                else if (D.nom!="Ordinateur"){
                    bool autre_liste = false;
                    for(int i = 0; i<D.Memmoire_tir_louper.size(); i++){
                        if(D.Memmoire_tir_louper[i].x == Defend.x && D.Memmoire_tir_louper[i].y == Defend.y){
                            identique = true;
                            break;
                        }
                        else identique = false;
                    }
                    for(int i = 0; i<D.Memmoire.size(); i++){
                        if(D.Memmoire[i].x == Defend.x && D.Memmoire[i].y == Defend.y){
                            autre_liste = true;
                            break;
                        }
                        else autre_liste = false;
                    }
                    if (identique==false && autre_liste==false)
                    D.Memmoire_tir_louper.push_back(Defend);
                }
                
                }
                
            }
   
//surcharge d'operateur
ostream &operator<<(ostream &flux, const Joueur &ini)
{
    cout << "Coordonnees du Porte-Avion" << endl;
    for (int i=0; i< ini.Porte_Avion.size(); i ++)
    {
        flux <<  ini.Porte_Avion[i].x<< ini.Porte_Avion[i].y << endl; ;
        
    }
    cout<< "Coordonnees du Croiseur" << endl;
    for (int i = 0; i< ini.Croiseur.size(); i++)
        flux<< ini.Croiseur[i].x<< ini.Croiseur[i].y << endl;
    cout<< "Coordonnees du Contre-Torpilleur" << endl;
    for (int i = 0; i < ini.Contre_Torpilleur.size(); i++)
    {
        flux << ini.Contre_Torpilleur [i].x<< ini.Contre_Torpilleur[i].y << endl;
    }
    cout<< "Coordonnees du Sous-marins" << endl;
    for (int i = 0; i < ini.Sous_marins.size(); i++)
    {
        flux << ini.Sous_marins[i].x<< ini.Sous_marins[i].y << endl;
    }
    cout<< "Coordonnees du Torpilleur"<< endl;
    for (int i = 0; i < ini.Torpilleur.size(); i++)
    {
        flux << ini.Torpilleur[i].x<< ini.Torpilleur[i].y << endl;
    }
    if (ini.Memmoire.empty()==false){
        cout << "Cases touchee : \n" << endl;
        for (int i = 0; i <ini.Memmoire.size(); i++){
            cout << ini.Memmoire[i].x << ini.Memmoire[i].y << endl;        }
    }
    return flux;

}
ostream &operator<<(ostream& flux, const vector<Coordonnees> &ini)
{

    cout << "\n";
    for(int i =0; i<ini.size(); i++)
    {
        flux << ini[i].x << ini[i].y << "\t";
    }
    cout << "\n\n";

    return flux;
}
istream &operator>>(istream &flux, Joueur& Player)
{
    int compteurBateau = 1;
    vector <bool> caselibre;
    vector <bool> T ;
    string Configuration;
    
    if(Player.nom!= "Ordinateur"){
    do{
            cout << "\nEntrez le nom du joueur : ";
            flux >> Player.nom;
        }while(Player.nom=="" || Player.nom=="Ordinateur");
        while(compteurBateau<=5){
                        switch(compteurBateau){
                            case 1:{
                                Player.Porte_Avion.clear();
                                    Grille(Player);
                                    Player.Porte_Avion = Localisation_Port_Avion(Choixdubateau(compteurBateau, Player));
                                    compteurBateau++;
                                    Pause();
                                    Clear();
                                    break;
                                }
                            case 2:{
                               do{  Player.Croiseur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Grille(Player);
                                    Player.Croiseur = Localisation_Croiseur(Choixdubateau(compteurBateau, Player));  
                                    Pause();
                                    Clear();                       
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur);
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true);
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 3:{
                                do{
                                    Player.Contre_Torpilleur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Grille(Player);
                                    Player.Contre_Torpilleur = Localisation_Contre_Torpilleur(Choixdubateau(compteurBateau, Player));
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur, Player.Contre_Torpilleur);
                                    Pause();
                                    Clear();
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true);
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 4:{
                                do{
                                    Player.Sous_marins.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Grille(Player);
                                    Player.Sous_marins = Localisation_Sous_marins(Choixdubateau(compteurBateau, Player));
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur, Player.Contre_Torpilleur, Player.Sous_marins);
                                    Pause();
                                    Clear();
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true); 
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 5:{
                                do{
                                    Player.Torpilleur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Grille(Player);
                                    Player.Torpilleur = Localisation_Torpilleur(Choixdubateau(compteurBateau, Player));
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur, Player.Contre_Torpilleur, Player.Sous_marins, Player.Torpilleur);
                                    Pause();
                                    Clear();
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true); 
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                        }
                    }
    }
    else{
        cout << "Entrez le niveau de l'ordinateur : \t1 (Facile)\t/\t2 (difficile)\nReponse : ";
        flux >> Player.niveau_IA;
        cout << "L'ordinateur place ses bateaux..."<< endl;
         while(compteurBateau<=5){
                        switch(compteurBateau){                
                            case 1:{
                                Player.Porte_Avion = Localisation_Port_Avion(Choixdubateau(compteurBateau, Player), AleatoireX(), AleatoireY());
                                compteurBateau++;
                                break;
                            }
                            case 2:{
                               do{
                                   Player.Croiseur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Player.Croiseur = Localisation_Croiseur(Choixdubateau(compteurBateau, Player), AleatoireX(), AleatoireY());                         
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur);
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true);
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 3:{
                                do{
                                    Player.Contre_Torpilleur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Player.Contre_Torpilleur = Localisation_Contre_Torpilleur(Choixdubateau(compteurBateau, Player), AleatoireX(), AleatoireY());
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur, Player.Contre_Torpilleur);
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true);
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 4:{
                                do{
                                    Player.Sous_marins.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Player.Sous_marins = Localisation_Sous_marins(Choixdubateau(compteurBateau, Player), AleatoireX(), AleatoireY());
                                    caselibre = emplacementlibre(Player.Porte_Avion,Player.Croiseur, Player.Contre_Torpilleur, Player.Sous_marins);
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true); 
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                            case 5:{
                                do{
                                    Player.Torpilleur.clear();
                                    caselibre.clear();
                                    T.clear();
                                    Player.Torpilleur = Localisation_Torpilleur(Choixdubateau(compteurBateau, Player), AleatoireX(), AleatoireY());
                                    caselibre = emplacementlibre(Player.Porte_Avion, Player.Croiseur, Player.Contre_Torpilleur, Player.Sous_marins, Player.Torpilleur);
                                    for (int i= 0; i <caselibre.size(); i++){
                                    T.push_back(true); 
                                    }
                                }
                                while (caselibre != T);
                                compteurBateau++;
                                break;
                            }
                        }
         }
         cout << "Les bateaux de l'ordinateur sont places." << endl;
         Pause();
         Clear();
    }
return flux;
}
void operatorpush_back(vector <Coordonnees>& ini , Coordonnees &valeur){
    for(int i =ini.size(); i < ini.size()+1; i++){
        ini[i].x = valeur.x;
        ini[i].y = valeur.y;
    }
}


//clear/pause terminal
void Clear()
{
    cout << "\x1B[1J\x1B[H";
}
void Pause()
{
    system("sleep 1.5s");
}


//direction des bateaux
void droite( vector <Coordonnees> &ini, char Y, int X)
{
    for (int i=0; i<ini.size() ;i++)
    {
        ini[i].x = X+i;
        ini[i].y = Y;
    }
}

void gauche(vector<Coordonnees>&ini, char Y, int X)
{
    for(int i = 0; i<ini.size(); i++)
    {
        ini[i].x = X-ini.size()+1+i;
        ini[i].y = Y;
    }
}

void bas(vector<Coordonnees>& ini, char Y, int X)
{
    for (int i=0; i<ini.size() ;i++)
    {
        ini[i].x = X;
        ini[i].y = Y+i;

    }
}

void haut(vector<Coordonnees>& ini, char Y, int X)
{
    for (int i=0; i<ini.size() ;i++)
    {
        ini[i].x = X;
        ini[i].y = Y-ini.size()+1+i;

    }
}

