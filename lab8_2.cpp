#include<iostream>
#include<string>
using namespace std;
#include<stdlib.h>
#include<stdio.h>

int main(){
    string name;
    int id;
    string M;
    string date;
    string P;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": " ;
    cin >> id;
    cin.ignore();
    int code = id/10000000;
    cout << "Fahsai: I think you may be GEAR " << code-12 << "." << "I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;

    cout << name << ": " << M ;
    getline(cin,M);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
  
    cout << name << ": " << date;
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << M << " with you." << endl;
    
    cout << name << ": " << P ;
    getline(cin,P);
    cout << "Fahsai: 555+ see you Next Monday. Bye Bye" << "\\" << "(^ ^)" << "/";
}
