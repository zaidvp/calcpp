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

int main()
{
    // dichiarazione variabili
    int scelta;
    float a,b,risultato;
    
    cout << "Salve, selezionare il tipo di operazione che si desidera fare." << endl;
    cout << "1 per l'addizione" << endl << "2 per la sottrazione" << endl << "3 per la moltiplicazione" << endl << "4 per la divisione" << endl;
    cin >> scelta;
    // controllo scelta valida
    while (scelta < 1 || scelta > 4) {
        cout << "scelta non valida, riprovare" << endl;
        cin >> scelta;
    }
    // inserimento dei 2 numeri
    cout << "Inserire il primo numero" << endl;
    cin >> a;
    cout << endl;
    
    cout << "inserire il secondo numero" << endl;
    cin >>b;
    cout << endl;

   switch (scelta) {
        
        case 1: 
        cout << "Scelta selezinata: Somma" << endl;
        cout << endl;
        risultato = somma(a,b);
        break;
        
        case 2: 
        cout << "Scelta selezinata: Sottrazione3" << endl;
        cout << endl;
        risultato = sottrazione(a,b);
        break;
        
        case 3:
        cout << "Scelta selezinata: Moltiplicazione" << endl;
        cout << endl;
        risultato = moltiplicazione(a,b);
        break;
        
        case 4:
        if (b==0) {
            cout << "Impossibile dividere per zero." << endl;
            break;
        } 
        cout << "Scelta selezinata: Divisione" << endl;
        cout << endl;
        risultato = divisione(a,b);
        break;

   }

    cout << "Il risultato e' uguale a: " << risultato << endl;
    if (scelta==4) {
        cout << "Nota: Se il risultato è 0 quando non lo deve essere, " << endl << "significa che c'è stato un errore nella divisone (hai provato a dividere per 0)"<< endl;
    }
    return 0;
}
