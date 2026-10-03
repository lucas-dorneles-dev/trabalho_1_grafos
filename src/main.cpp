#include "Aresta.h"
#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    try {

        //EXERCICIO 2

        Grafo grafo(8);
        Aresta a1(0, 2);
        grafo.insere_aresta(a1);

        Aresta a2(0, 5);
        grafo.insere_aresta(a2);

        Aresta a3(0, 7);
        grafo.insere_aresta(a3);

        Aresta a4(1, 7);
        grafo.insere_aresta(a4);

        Aresta a5(2, 6);
        grafo.insere_aresta(a5);

        Aresta a6(3, 4);
        grafo.insere_aresta(a6);

        Aresta a7(3, 5);
        grafo.insere_aresta(a7);

        Aresta a8(4, 5);
        grafo.insere_aresta(a8);

        Aresta a9(4, 6);
        grafo.insere_aresta(a9);

        Aresta a10(4, 7);
        grafo.insere_aresta(a10);

        grafo.imprime();

        bool existe_caminho = grafo.caminho(0, 7, new int[grafo.num_vertices()]());

        if (existe_caminho) {
            cout << "Existe caminho entre os vértices\n";

        } else {
            cout << "Nao existe caminho entre os vértices\n";
        }

        vector<int> pai(grafo.num_vertices());
        vector<int> dist(grafo.num_vertices());
        grafo.busca_largura(0, pai, dist);
       
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}
