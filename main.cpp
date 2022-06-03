#include "Plan.h"
// j'explique quelque consigne au début car je n'ai pas mis des sécurité par tout dans le code pour évité qu'il plante (tourne en boucle si vous mettez une lettre à la place d'un chiffre pour x)

int main(){

  
    srand(time(0));
    string terminer;
   Joueur joueur1, joueur2, Ordinateur;

   Ordinateur.nom = "Ordinateur";
    cout << "\n\nRegles pour le bon deroulement du jeu : " <<endl;
    cout << "- Toujours ecrire en premier les coodronnees en x compris entre 1 et 10 " << endl;
    cout << "- Toujours ecrire en deuxieme les coordonees en y compris entre A et J (en majuscule)" << endl;
    cout << "- Si vous n'avez pas de pave numerique pour ecrire les chiffre, utilisez la touche maj et non la touche verouille maj(celle avec le cadena)\n " << endl;
    
switch(Mode()){
    case 1 :{
        Pause();
        Clear();
        do{
            cin >> joueur1;
            cout << "Joueur suivant : " << endl;
            cin >> joueur2;
            do{
                cout << "\nAvez-vous termine de placer les bateaux pour les deux joueurs ?\noui  /  non" << endl;
                cin >> terminer;
            }while(terminer != "Non" && terminer !="non" && terminer !="oui" && terminer!="Oui");

        }while (terminer == "non");
        bool act;
            do{
                act = Action1(joueur1, joueur2);
            }while (act == false);

cout << "Merci d'avoir jouer ! " << endl;
    break;
    }
    case 2:{
        Pause();
        Clear();
        do{
            cin >> joueur1;
            cin >> Ordinateur;
            do{
                cout << "\nAvez-vous termine de placer les bateaux pour les deux joueurs ?\noui  /  non" << endl;
                cin >> terminer;
            }while(terminer != "Non" && terminer !="non" && terminer !="oui" && terminer!="Oui");
        }while (terminer == "non");
        bool act;
        do{

            act = Action1(joueur1, Ordinateur);
        }while (act == false);
        cout << "\nMerci d'avoir joue !"<<endl;
    }

    case 0:{
        break;
    }
}
    return 0;
}
