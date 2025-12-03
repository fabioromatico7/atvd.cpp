#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Carga {
    int id_caixa;
    float peso_kg;
    string destino;
};

int main() {
    stack<Carga> pilha;

    Carga c1 = {501, 12.5, "Macapá"};
    Carga c2 = {502, 18.2, "Belém"};
    Carga c3 = {503, 25.0, "Marajó"};

    pilha.push(c1);
    pilha.push(c2);
    pilha.push(c3);

    cout << "Caixa no topo:" << endl;
    cout << "ID: " << pilha.top().id_caixa << endl;
    cout << "Destino: " << pilha.top().destino << endl << endl;

    // Remoção 1
    cout << "Caixa " << pilha.top().id_caixa 
         << " removida para processamento." << endl;
    pilha.pop();

    // Remoção 2
    cout << "Caixa " << pilha.top().id_caixa 
         << " removida para processamento." << endl;
    pilha.pop();

    cout << "\nNova caixa no topo:" << endl;
    cout << "ID: " << pilha.top().id_caixa << endl;
       cout << "Destino: " << pilha.top().destino << endl << endl;
    cout << "Tamanho atual da pilha: " << pilha.size() << endl;

    return 0;
}
