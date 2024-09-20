//git init, git status, git add., git commit -m "nombre", copiar y pegar link, git push -u
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int materias, notas, ponderacion;
    float promedioPonderado = 0, sumaDeNotas = 0, resultado = 0, sumaDePonderaciones = 0;

    cout << "Ingrese las materias a considerar: ";
    cin >> materias;

    for (int i= 1 ; i <= materias; i++){
        cout << "Materia " << i << endl;
        cout << "Nota obtenida en la materia: "; cin >> notas;
        cout << "Ponderacion de la materia: "; cin >> ponderacion;
        cout << endl;


        promedioPonderado += notas * ponderacion;
        sumaDePonderaciones += ponderacion;

    }

        promedioPonderado /= sumaDePonderaciones;

        cout << "Promedio ponderado final: " << fixed << setprecision(2) << promedioPonderado << endl;
        cout << endl;


    return 0;
}
