#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

int main(){


  cout << "\n###################################\n";
  cout << "JOGO DA FORCA, FEITO POR <PVICTOR>\n";
  cout << "###################################\n";
  char restart;
  do{
    
  bool right=false;

  cout << "\nDigite a palavra:";
  string word;
  cin >> word;

  int wordSize= int(word.size());
  string secret(wordSize,'-');
  int chances{4};
  int rights{0};
  system("cls");
  
  while((chances>0) && (rights<wordSize)){
    cout << "Voce tem " << chances << " chanches para adivinhar a palavra!\n\n";
    for(int i=0;i<wordSize;i++)
      cout  << " " << secret[i] << " ";

  cout << "\n\nDigite uma letra:";
  char letter;
  cin >> letter;
  bool right{false};
  for(int i=0;i<wordSize;i++)
    if(toupper(letter) == toupper(word[i])){
      right=true;
      secret[i]=word[i];
      rights++;
    }
  
  if(!right)
    chances--;
                 
  right=false;  
  system("cls");
    }
    if(rights==wordSize){
      cout << "#####################\n";
      cout << "PARABENS,voce ganhou!\n";
      cout << "#####################\n\n";  
          
    }else{
      cout << "#####################\n";
      cout << "Uma pena! Voce perdeu\n";
      cout << "#####################\n\n";
    }
    
  }while(cin >> restart && toupper(restart) =='S');
}