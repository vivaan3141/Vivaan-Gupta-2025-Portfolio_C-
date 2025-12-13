// Uses the Luhn Algorithm to validate card numbers
#include <iostream>
#include <string>
using namespace std;
int main() {

    string credit;
    cin>>credit;
    int dob[credit.size()];
    int sum;
    int b;
    for (int i=1;i<credit.size()+1;i++){
        b=i-1;
        if (i%2==0){
            dob[b]=(credit[b] - '0')*2;
        }
        else{
            dob[b]=(credit[b] - '0');
        }

    }

    for (int i=0; i<credit.size(); i++){
        if (dob[i]>9){
            sum=sum+((dob[i]%10)+(((dob[i]%100)-dob[i]%10))/10);
        }else{
            sum=sum+dob[i];
        }

    }
  
    if (sum%10==0){
        cout<<"Valid Card";
    }else{
        cout<<"Invalid Card";
    }
    return 0;
}


