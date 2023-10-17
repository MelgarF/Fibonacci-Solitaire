#include <iostream>

using namespace std;

class Card{

private:
    int point;
    char suit;
    char rank;

public:
    Card();
    Card(char r, char s);
    void setCard(char r, char s);
    int getValue();
    void display();
};