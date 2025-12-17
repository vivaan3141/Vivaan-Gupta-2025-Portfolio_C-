#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;


char randUp(){
   return 'a' + (rand() % 26);
}
char randLow(){
   return 'A' + (rand() % 26);
}


char randInt(){
   return '0'+ rand() % 10;
}
char randSym(){
   const string symbols = "!@#$%^&*()_+-=[]{}|;:',.<>?/~";
   return symbols[rand() % symbols.size()];
}


int randA(){
   return rand() % 10;
}




int main() {


   srand(time(0));
   int digits;


   int type = 0;


   while (true){
       cout<<"Digits?"<<endl;
       cin>>digits;
       char holder[digits+1];
       holder[digits]='\0';
       for (int i=0; i<digits; i++){
           type=randA();
           if (type==1 || type==2 || type==3){
               holder[i]=randUp();
           }else if (type==4 || type==5 || type==6){
               holder[i]=randLow();


           }else if (type==7 || type==8 ){
               holder[i]=randInt();


           }else if (type==9 || type==0){
               holder[i]=randSym();


           }


       }


       string card(holder);


       cout<<card<<endl<<endl;
   }
}



