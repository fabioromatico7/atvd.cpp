#include <iostream>
#include <string>
using namespace std;

struct Feitico {
    string nome;
    int dificuldade;
    int dano_base;
    float custo_mana_final;
};

int main() {
    Feitico f;
    f.nome = "Relâmpago em Cadeia";
    f.dificuldade = 4;
    f.dano_base = 75;

    float multiplicador = 1.0f;

    if (f.dificuldade == 1 || f.dificuldade == 2) {
        multiplicador = 1.0f;
    } 
    else if (f.dificuldade == 3 || f.dificuldade == 4) {
        multiplicador = 1.5f;
    } 
    else if (f.dificuldade == 5) {
        multiplicador = 2.0f;
    } 
    else {
        cout << "Atenção: dificuldade fora do intervalo 1-5. Usando multiplicador = 1.0\n";
        multiplicador = 1.0f;
    }

    f.custo_mana_final = f.dano_base * multiplicador;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "\n===== Ficha do Feitiço =====\n";
    cout << "Nome: " << f.nome << endl;
    cout << "Dificuldade: " << f.dificuldade << endl;
    cout << "Dano Base: " << f.dano_base << endl;
    cout << "Multiplicador: " << multiplicador << endl;
    cout << "Custo de Mana Final: " << f.custo_mana_final << endl;
    cout << "============================\n";

    return 0;
}