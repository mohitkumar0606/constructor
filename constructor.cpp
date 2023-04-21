#include<iostream>
using namespace std;

class Hero{
    int health;
    public:
    char level;

    // 1. Default Constructor
    Hero(){
        cout<<"default constructor is called"<<endl;
    }

    // 2. Parameterised Constructor
    Hero(int h, char level){
        cout<<"Parameterised constructor is called"<<endl;
        this->health= h;
        this->level= level;
    }

    // // 2. Parameterised Constructor
    // Hero(int h, char l){
    //     cout<<"Parameterised constructor is called"<<endl;
    //     health= h;
    //     level= l;
    // }
    
    // 2. Copy Constructor
    Hero(Hero &temp){
        cout<<"Copy constructor is called"<<endl;
        this->health= temp.health;
        this->level= temp.level;
    }



    int gethealth(){
        return health;
    }

    void sethealth(int health){
        this->health= health; // this keyword is used when we passing same variable as parameter
    }

    void setlevel(char ch){
      level= ch;
    }   
    char getlevel(){
        return level;
    } 

    void print(){
        cout<<"health-> "<<this->health<<endl;
        cout<<"level-> "<<this->level<<endl;

    }
};

int main(){
    Hero h1;
    // h1.level= 'S';
    // h1.setlevel('M');
    // cout<<h1.getlevel()<<endl;
    // h1.sethealth(70);
    // cout<<h1.gethealth()<<endl;
    // Hero h2(h1);
    // h1.print();
    // cout<<"Copy Constructor of h1 "<<endl;
    // h2.print();

    


}
