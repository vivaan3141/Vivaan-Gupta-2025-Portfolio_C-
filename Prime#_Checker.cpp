#include <iostream>
using namespace std;
int main() {
    int num=0;
    int c=0;
    int f=0;
    cout << "Number: ";
    cin >> num;
    int factors[num/2];

    
        for (int i = 2; i <= (num/2); i++) {
        if (num % i==0){
           c=1;
           f++;
           factors[f]=i;
           cout<<i<<", ";
           
       }
       
     
    }
         cout<<endl;

    
    if (c==0){
        cout<<"PRIME NUMBER!"<<endl;
    }else{
        cout<<"Factors Above! NOT A PRIME NUMBER!"<<endl;
           
       }        
    cout<<"--------------------------------------"<<endl;
    
    
    
   

    return 0;
}





