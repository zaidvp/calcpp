#include <iostream>

using namespace std;

int somma(int a, int b) {
    return a+b;
}

int sottrazione(int a, int b) {
    return a-b;
}

int moltiplicazione(int a, int b) {
    return a*b;
}

float divisione(float a, float b) {
    if (b==0) {
        cout << "Errore: divisione per zero!" << endl;
        return 0; // Lo 0 indica che c'è un errore!
    }
    return a/b;
}

int potenza(int a, int esponente) {
    int risultato=1;
    for (int i=0;i<esponente;i++) {
        risultato *= a;
    }
    return risultato;
}

int main()
{
    // dichiarazione variabili
    int scelta, esponente=0;
    float a,b,risultato;
    
    cout << "Salve, selezionare il tipo di operazione che si desidera fare." << endl;
    cout << "1 per l'addizione" << endl << "2 per la sottrazione" << endl << "3 per la moltiplicazione" << endl << "4 per la divisione" << endl << "5 per il calcolo di una potenza" << endl;
    cin >> scelta;
    // controllo scelta valida
    while (scelta < 1 || scelta > 5) {
        cout << "Scelta non valida, riprovare" << endl;
        cin >> scelta;
    }
    
    if (scelta >= 1 && scelta <= 4) {
        // inserimento dei 2 numeri
        cout << "Inserire il primo numero" << endl;
        cin >> a;
        cout << endl;
        
        cout << "inserire il secondo numero" << endl;
        cin >>b;
        cout << endl;
    } 


   switch (scelta) {
        
        case 1: 
        cout << "Scelta selezionata: Somma" << endl;
        cout << endl;
        risultato = somma(a,b);
        break;
        
        case 2: 
        cout << "Scelta selezionata: Sottrazione3" << endl;
        cout << endl;
        risultato = sottrazione(a,b);
        break;
        
        case 3:
        cout << "Scelta selezionata: Moltiplicazione" << endl;
        cout << endl;
        risultato = moltiplicazione(a,b);
        break;
        
        case 4:
        if (b==0) {
            cout << "Impossibile dividere per zero." << endl;
            break;
        } 
        cout << "Scelta selezionata: Divisione" << endl;
        cout << endl;
        risultato = divisione(a,b);
        break;
        
        case 5: 
        cout << "Specifica il numero" << endl;
        cin >> a;
        cout << "Specifica l'esponente della potenza" << endl;
        cin >> esponente;
        risultato = potenza(a,esponente);
        break;
   }

    cout << "Il risultato e' uguale a: " << risultato << endl;
    return 0;
}
