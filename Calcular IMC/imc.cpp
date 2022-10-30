#include<iostream>
#include<cctype>
using namespace std;

class user{
  public:
    double weight,height;
    double calculateIMC(double w, double h );
    string resultIMC(double IMC);

};

int main(){
  cout << "\n######################################" << endl;
  cout << "Cálculo do IMC - Feito por <PVICTOR>" << endl;
  cout << "######################################" << endl;  
  char again;

  do{
    system("pause");
    system("cls");
    user *person=new user();
    cout<< "\nDigite seu peso (Kg):\n";
    cin >> person->weight;

    cout<< "\nDigite sua altura (M):\n";
    cin >> person->height;

  cout << "\n######################################" << endl;
  cout << "Seu resultado foi:"  << person ->resultIMC(person->calculateIMC(person->weight,person->height)) << endl;
  cout << "######################################\n";

cout << "\nDeseja fazer outo teste?:" << endl;
  }while(cin >> again && toupper(again)=='S');
}

double user::calculateIMC(double w,double h){
    
    return (w /(h*h));
}

string user::resultIMC(double IMC){
  if(IMC < 18.5 ){
    return "Underweight";
  }
  else if (IMC == 18.5 || IMC < 25.0){
    return "Normal";
  }
  else if (IMC == 25.0 || IMC < 30.0){
    return "Ovweweight";
  }
  else if (IMC == 30.0 || IMC < 35.0){
    return "Obese";
  }
  else if (IMC > 35.0){ 
    return "Extremely Obese";
  }
}