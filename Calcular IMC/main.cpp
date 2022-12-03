#include "imc.h"

using namespace std;

int main(){
    cout << "\n#----------------------------------------------#" << endl;
    cout << "|  Calculo do IMC - Feito por Paulo Victor C.  |" << endl;
    cout << "#----------------------------------------------#" << endl;
    char again;

    do{
        system("pause");
        system("cls");
        user *person=new user();
        cout<< "\nDigite seu peso (Kg):\n";
        cin >> person->weight;

        cout<< "\nDigite sua altura (M):\n";
        cin >> person->height;

        cout << "\n#------------------------------------#" << endl;
        cout << " >  Seu resultado foi: "  << person ->resultIMC(person->calculateIMC(person->weight,person->height))  << endl;
        cout << "#------------------------------------#\n";

        cout << "\nDeseja fazer outo teste?:" << endl;
    }while(cin >> again && toupper(again)=='S');
}