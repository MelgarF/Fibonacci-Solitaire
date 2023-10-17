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

bool fibo(int check){
  int num = 0;
  int num2 = 1;
  int sum;

  for(int i=2; i<=15; i++){
    sum = num + num2;
    num = num2;
    num2 = sum;
    //cout<<num2<<endl;
    if(check==num){
     // cout<<"T"<<endl;
      return true;
      cout << i << ":" << fibo(i)<<endl;
    }
  }
  //cout<<"F"<<endl;
  return false;
  
}

int main() {
 
 
 Deck d;
 Deck d2;
 int play = 0;
 int fibo = 0;
 int fibo2 = 0;
 cout<<"Welcome to FIbonacci Solitare!"<<endl;

  int option;
 
 bool check = true;
 while(check){

   
   cout<<"1) New Deck"<<endl;
   cout<<"2) Display Deck"<<endl;
   cout<<"3) Shuffle Deck"<<endl;
   cout<<"4) Play Solitaire"<<endl;
   cout<<"5) Exit"<<endl;
   
    cin>>option;

    if(option==1){ // 1) New Deck
      Deck D;
      d = D;
    }else if(option==2){ // 2) Display Deck
      d.display();
    }
    else if(option==3){ // 3) Shuffle Deck
      d.shuffle();
    }
    else if(option==4){ // 4) Play Solitaire
      
      d.shuffle();
      int piles = 0;
      cout<<"Playing FIbonacci Solotare !!!"<<endl;
      cout<<endl;

      while(!d.isEmpty()){
        Card c = d.deal();


        if(!isFibo(c.getValue())){
          fibo += c.getValue();
          c.display();

        }else{
          fibo += c.getValue();
          c.display();
          cout<<"Fibbo: "<<fibo<<endl;
          piles += 1;
          fibo = 0;
        }
        
        if(d.isEmpty()){
          piles += 1;
          cout<<"last hand value: "<<fibo<<endl;
          if(isFibo(fibo)){
            cout<<"Winner in "<<piles<<"!"<<endl;
          }else{
            cout<<"Loser in "<<piles<<" piles!"<<endl;
            cout<<endl;
          }
        }
        
      }
      play++;
      cout<<endl;
      cout<<"games played: "<<play<<endl;
      cout<<endl;
      d = d2;
      

    }else{ // 5) Exit
      cout<<"Thank for playing!"<<endl;
      return 0;
    }
    }


       
}
        