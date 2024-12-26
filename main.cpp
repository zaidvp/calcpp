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
    return a/b;
}

int main()
{
    int scelta;
    float a,b,risultato;
    cout << "Salve, selezionare il tipo di operazione che si desidera fare." << endl;
    cout << "1 per l'addizione" << endl << "2 per la sottrazione" << endl << "3 per la moltiplicazione" << endl << "4 per la divisione" << endl;
    cin >> scelta;
    while (scelta < 1 || scelta > 4) {
        cout << "scelta non valida, riprovare" << endl;
        cin >> scelta;
    }
    cout << "Inserire il primo numero" << endl;
    cin >> a;
    cout << "inserire il secondo numero" << endl;
    cin >>b;
    if (scelta == 1) {
        risultato = somma(a,b);
    } else if (scelta == 2) {
        risultato = sottrazione(a,b);
    } else if (scelta == 3) {
        risultato = moltiplicazione(a,b);
    } else if (scelta == 4) {
        risultato = divisione(a,b);
    }
    cout << "Il risultato e' uguale a: " << risultato << endl;
    return 0;
}
