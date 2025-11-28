
#include <iostream>
using namespace std;

int main(){   
    
    int c[]={};
    int a;
    
    for (int i=0; i<3; i++){
        cout<<"Number"<<i+1<<":";
        cin>>a;
        c[i]=a;
    }
    int n;
    int two= c[1];
    int three=c[2];
    int d=three-two;
    int com=c[0]-d;
    
    if (com>0){
        cout<<"The equation of this series is "<<d<<"n"<<"+"<<com<<endl;  
    } else if (com<0){
        cout<<"The equation of this series is "<<d<<"n"<<com<<endl;  
    }else if (com==0){
        cout<<"The equation of this series is "<<d<<"n"<<endl;  
    }
    int val=0;
    int find=0;
    cout<<"What number in the series would you like to find?"<<endl;
    cin>>val;
    find=(d*val);
    cout<<"The "<<val<<" number in this series is "<<find+com;
      
    return 0;
}


