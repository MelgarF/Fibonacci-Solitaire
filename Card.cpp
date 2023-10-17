//  Francisco Melgar
// Class (CECS 282-04)
// Project Name (Prog 1 – Solitaire Prime)
//  Due Date (02/15/2022)
// 
/* I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
*/
#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(){}

Card::Card(char r, char s){
    rank = r;
    suit = s;
}
void Card::setCard(char r, char s){
    Card c(r,s);
}
int Card::getValue(){
    if(rank == 'A'){
        point = 1;
    } else if(rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T'){
        point = 10;
    }else{
        point = (int)rank - 48;
    }
    return point;
}

void Card::display(){
    cout<< rank << suit << "\t";
}