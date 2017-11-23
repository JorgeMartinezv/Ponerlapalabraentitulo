#include<iostream>
using namespace std;
int main() { 
char frase[50];
cout<<"Ingrese las palabras: "; 
cin.getline(frase,50); 
frase[0]=toupper(frase[0]); 
cout<<frase;
return 0; 
}
