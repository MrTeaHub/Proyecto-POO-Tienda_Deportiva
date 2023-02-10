#include <iostream>
#include <string.h>

using namespace std;

char* Mayuscula(char Cadena[], int tamaño){
    char Letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char Mayusculas[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    for(int i=0;i<tamaño;i++){
      for(int x=0;x<26;x++){
          if(Cadena[i]==Letras[x]){
            Cadena[i]=Mayusculas[x];
          }
      }
    } 
    
     return Cadena;
    } 


int main(){
    char Cadena[100]="hola";
    int tamaño=strlen(Cadena);
    
    char *p;

    p = Mayuscula(Cadena,tamaño);

      for(int i=0;i<tamaño;i++){
         cout << *(p+i);
      }
     
   
    return 0;
}