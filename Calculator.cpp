#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the two  numbers"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter the operation : + , - , / , * , % "<<endl;
    cin>>op;
    switch(op){
              case '+':
              cout<<"addition is "<<n1+n2<<endl;
              break;

              case '-':
              cout<<"substraction is "<<n1-n2<<endl;
              break;

              case '*':
              cout<<"mutliplication  is "<<n1*n2<<endl;
              break;
              
              case '/':
              cout<<"division is "<<n1/n2<<endl;
              break;
              
              case '%':
              cout<<"precentage is "<<n1*n2<<endl;
              break;

              default :
              cout<<"default case" <<endl;
    }
    return 0;
}