#include <iostream>
#include "clases/Productos/ropa/Camiseta.h"

using namespace std;

int main() {
    Camiseta c("Camiseta de Colombia", "AFAXP22", "Amarillo","Adidas","Unisex","2023",
               "Algodon",120000,3,30,9.5,
               "Futbol","Colombia", false,"V");
    cout << c << endl;
    cout << "Daniel es gei";
    return 0;



}
