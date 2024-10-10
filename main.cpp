#include <iostream>
using namespace std;

int main() {
    int a,b,s,m,d,st,p;
    cout << "Inserisci a" << endl;
    cin >> a;
    cout << "Inserisci b" << endl;
    cout << "Visualizzare la somma tra a e b" << endl;
    s = somma(a,b);
    cout << "La somma tra a e b è " << "s" << endl;
    cout << "Visualizzare la differenza tra a e b" << endl;
    st = sottrazione(a,b);
    cout << "La differenza tra a e b è " << "st" << endl;
    cout << "Visualizzare il prodotto tra a e b" << endl;
    m = moltiplicazione(a,b);
    cout << "Il prodotto tra a e b è " << "m" << endl;
    cout << "Visualizzare il quoziente tra a e b" << endl;
    d = divisione(a,b);
    cout << "Il quoziente tra a e b è " << "d" << endl;
    cout << "Visualizzare il prodotto di a elevato a b" << endl;
    p = elevamentop(a,b);
    cout << "Il prodotto di a elevato a b è " << "p" << endl;
    return 0;
}

int somma (int a , int b) {
   int s

   s = a+b ; 
 
   return s;
}

int sottrazione (int a , int b) {
   int st 

   st = a-b ;

   return st;
}

int moltiplicazione (int a , int b) {
   int m

   m = a*b ;

   return m;
}

int divisione (int a , int b) {
   int d

   d = a*b ;

   return d;
}

int elevamentop (int base , int esponente) {
   int p

   p = pow(base , esponente) ;

   return p;
}

int imput (int x) {
   int imputpositivo 
   do {
       cin >> x ;
   } while(x>0)
   
    return imputpositivo;
}
       




