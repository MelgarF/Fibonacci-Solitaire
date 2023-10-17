//  Francisco Melgar
// Class (CECS 282-04)
// Project Name (Prog 1 – Solitaire Prime)
//  Due Date (02/15/2022)
// 
/* I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
*/
#include <iostream>
#include "Deck.h"


using namespace std;

Deck::Deck(){
 top = 0;
  char r[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  for(int i=0; i<52; i++){
    if (i<13){
     deck[i] = Card(r[i], 'S');
    }else if (i<26){
      deck[i] = Card(r[i-13], 'H');
    }else if (i<39){
      deck[i] = Card(r[i-26], 'D');
    }else{
      deck[i] = Card(r[i-39], 'C');
    }
  
    
  }
}

void Deck::refreshDeck(){
  top = 0;
  char r[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  for(int i=0; i<52; i++){
    if (i<13){
     deck[i] = Card(r[i], 'S');
    }else if (i<26){
      deck[i] = Card(r[i-13], 'H');
    }else if (i<39){
      deck[i] = Card(r[i-26], 'D');
    }else{
      deck[i] = Card(r[i-39], 'C');
    }
  
    
  }
}

Card Deck::deal(){
  
  return deck[top++];
}

void Deck::shuffle(){
  for(int i=0; i<52; i++){
    Card c = deck[i];
    deck[i] = deck[(rand()% 52+1)];
    deck[(rand()% 52+1)] = c;
   


  }
}

bool Deck::isEmpty(){
  if(top==52){
    return true;
  }
  return false;
}

void Deck::display(){
  for(int i=0; i<52; i++){
    deck[i].display();
    if((i + 1) % 13 == 0) {
            cout << endl;
        }
  }
}
