#include<iostream>
#include<string>
using namespace std;
int main(){
    string character;
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;
    /*    cout << "Enter your bounty: ";
    cin >> bounty;*/

    if(age <= 25){
    cout << "Enter your height: ";
    cin >> height;
    if(height < 100){
        character = "Chopper";
    } else if(height<180 && height >= 100){
        character = "Usopp";
    } else {
    cout << "Enter your bounty: ";
    cin >> bounty;
    if(bounty < 1100000000){
        character = "Sanji";
    }else{
        character = "Zoro";
    }
    }

    } else if (age <= 60){
    cout << "Enter your bounty: ";
    cin >> bounty;
    if(bounty > 500000000){
        character = "Jinbe";
    } else{character = "Franky";}

} else {character = "Brook";}
cout << "Your character = "<< character;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
