#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main()

{

int v;

float m;

float a;

int i;

cout << "Dimmi quanti voti vuoi inserire: " << endl;
cin >> v;
    
float vettore[v];

for(i=0; i<v; i++) {
    
    cout << "inserisci il  voto: ";
    cout << i + 1 << endl;
    
    cin >> vettore[i];
    
   
    
    a = a + vettore[i];
    
}
	
	m = a/v;
	
    cout << " La media e' --->  " << m << endl;
     
    
    
    
     
     
     
}
