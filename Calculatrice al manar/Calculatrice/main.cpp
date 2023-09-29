#include <iostream>
#include <string>

#include <cmath>
#include <stdlib.h>

using namespace std;

float sum(float x, float y) {
    return(x + y);
};
float sous(float x, float y) {
    return(x - y);
};
float mult(float x, float y) {
    return(x * y);
};
float divis(float x, float y) {
    return(x / y);
};
int factorial(int x){

}
int normal_calculator(){

    float a,b;
    string operation;
    cout << "   Vous avez choisi la calculatrice normale!!" << endl;

    cout << "   Dans cette calculatrice vous auriez acces aux operations de bases, + - * / " << endl;

    printf("    Ecrivez le premier nombre de cette operation: ");
    cin >> a;

    printf("    Ecrivez le premier nombre de cette operation: ");
    cin >> b;

    printf("    Choisissez l'operateur + - * /: ");
    cin >> operation;
    if(operation == "+"){

        printf("   le resultat est: ");
        printf("%f", sum(a,b));
        printf(" ");
    }else if(operation == "-"){

        printf("   le resultat est: ");
        printf("%f", sous(a,b));
        printf(" ");
    }
    else if(operation == "*"){

        printf("   le resultat est: ");
        printf("%f", mult(a,b));
        printf(" ");
    }
    else if(operation == "/"){

        printf("   le resultat est: ");
        printf("%f", divis(a,b));
        printf(" ");
    }else{

        system("cls");
        cout << "   c'est quoi cela?" << endl;
        normal_calculator();
    }

    printf("\n Voulez vous refaire une operation ? o pour oui n pour non: ");
    string reponse;
    cin >> reponse;
    if(reponse == "o"){
        system("cls");
        normal_calculator();
    }else{
        system("cls");

        printf("   Veuillez fermez la fenetre!!");
    }

}







int science_calculator(){

    cout << "    vous avez choisi la calculatrice scientifique!!" << endl;
    cout << "" << endl;

    cout << "    voila ce que cette calculatrice puisse faire: " << endl;
    cout << "" << endl;

    cout << "            1.calculer les racines d'un nombre \"racine\"!!" << endl;
    cout << "" << endl;

    cout << "            2.calculer le sinus d'un angle \"sin\"!!" << endl;
    cout << "" << endl;

    cout << "            3.calculer le cosinus d'un angle \"cos\"" << endl;
    cout << "" << endl;

    cout << "            4.calculer la tangente d'un angle \"tan\"!!" << endl;
    cout << "" << endl;

    string choix;
    float a;

    cout << "     Veuillez entrer votre choix: " ;
    cin >> choix;

    if(choix == "racine"){
        system("cls");

        cout << "Ecrivez le nombre: ";
        cin >> a;
        printf("La racine est: ");
        printf("%f", sqrt(a));
    }else if(choix == "sin"){
        system("cls");
        cout << "        voici le triangle ABC rectangle en A." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;

        cout << "   B" << endl;
        cout << "   |\" "<< endl;
        cout << "   | \" "<< endl;
        cout << "   |  \" "<< endl;
        cout << "   |   \" "<< endl;
        cout << "   |    \" " << endl;
        cout << "   |     \" " << endl;
        cout << "   |      \" " << endl;
        cout << "   |_______\" " << endl;
        cout << "   A        C" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        float ab, bc, sinu;
        cout << "   donne moi la mesure du cote oppose: ";
        cin >> ab;
        cout << "   donne moi la mesure de l'hypotenuse: ";
        cin >> bc;
        cout << "" << endl;
        cout << "   La mesure du sinus de votre angle est: ";
        sinu = ab / bc;
        printf("%f", sinu);
    }else if(choix == "cos"){
        cout << "   voici le triangle ABC rectangle en A." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;

        cout << "   B" << endl;
        cout << "   |\" "<< endl;
        cout << "   | \" "<< endl;
        cout << "   |  \" "<< endl;
        cout << "   |   \" "<< endl;
        cout << "   |    \" " << endl;
        cout << "   |     \" " << endl;
        cout << "   |      \" " << endl;
        cout << "   |_______\" " << endl;
        cout << "   A        C" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        float ac, bc, cosi;
        cout << "  donne moi la mesure du cote adjacent: ";
        cin >> ac;
        cout << "  donne moi la mesure de l'hypotenuse: ";
        cin >> bc;
        cout << "" << endl;
        cout << "  La mesure du sinus de votre angle est: ";
        cosi = ac / bc;
        printf("%f", cosi);
    }else if(choix == "tan"){
        cout << "  voici le triangle ABC rectangle en A." << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;

        cout << "   B" << endl;
        cout << "   |\" "<< endl;
        cout << "   | \" "<< endl;
        cout << "   |  \" "<< endl;
        cout << "   |   \" "<< endl;
        cout << "   |    \" " << endl;
        cout << "   |     \" " << endl;
        cout << "   |      \" " << endl;
        cout << "   |_______\" " << endl;
        cout << "   A        C" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        float ab, ac, tang;
        cout << "  donne moi la mesure du cote adjacent: ";
        cin >> ab;
        cout << "  donne moi la mesure du cote oppose: ";
        cin >> ac;
        cout << "" << endl;
        cout << "  La mesure du sinus de votre angle est: ";
        tang = ab / ac;
        printf("%f", tang);

    }else{
        system("cls");
        cout << "  C'est quoi cela?" << endl;
        science_calculator();

    }

    cout << "Voulez-vous calculer autre chose? \"oui\" ou \"non\": ";
    string decision2;
    cin >> decision2;
    if (decision2 == "oui"){
            system("cls");
        science_calculator();
    }else{
        system("cls");
        cout << "Fermez la fenetre" << endl;
    }
}











int home_page(){
    string decision;

    printf("Veuillez choisir calculatrice veux-tu? Ecrivez n pour la normale et s pour scientifique: ");
    cin >> decision;

    if(decision == "n"){
        normal_calculator();
    }else if(decision == "s"){
        science_calculator();
    }else{
        printf("Veuillez revoir ce que vous avez ecrit!! ");
        home_page();
    }
}

int main(){
    home_page();
    return 0;
}


