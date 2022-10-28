#include<iostream>
#include<string.h>
#define sizeW 30
#define ChancesMAX 4
using namespace std;

int main(){
    init:
    
    cout << "\n###################################\n";
    cout << "JOGO DA FORCA, FEITO POR <PVICTOR>\n";
    cout << "###################################\n";

    char word[sizeW];
    char letter,op;
    char secret[sizeW];
    int size=0,chances=ChancesMAX,rights=0;
    bool right=false;

    cout << "\nDigite a palavra:";
    cin >> word;
    system("cls");

    for(int i=0;i<sizeW;i++){
      secret[i]='-';  
    }

    for(int i=0;word[i]!='\0';i++){
        size++;
    }
  
    while((chances>0) && (rights<size)){

      cout << "Voce tem " << chances << " chanches para adivinhar a palavra!\n\n";
      for(int i=0;i<size;i++)
        cout  << " " << secret[i] << " ";

    cout << "\n\nDigite uma letra:";
    cin >> letter;

    for(int i=0;i<size;i++){
      if(letter == word[i]){
        right=true;
        secret[i]=word[i];
        rights++;
        cout << "R=" << rights;
        cout<< "size=" << size;
      }
    }
    if(!right){
        chances--;
    }
    right=false;
    system("cls");
    }
    if(rights==size){
      cout << "#####################\n";
      cout << "PARABENS,voce ganhou!\n";
      cout << "#####################\n\n";      
      cout<< "Deseja jogar de novo?\n";
      cin >> op;
      if(op=='s' || op=='S')
          goto init;
    }else{
      cout << "#####################\n";
      cout << "Uma pena! Voce perdeu\n";
      cout << "#####################\n\n";
      cout<< "Deseja jogar de novo?\n";
      cin >> op;
      if(op=='s' || op=='S')
        goto init;

    }
}