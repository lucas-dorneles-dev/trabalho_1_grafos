#include "Aresta.h"
#include "Grafo.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n_nos, c_conexoes, x, y, o_operacao;
    cin >> n_nos >> c_conexoes;

    Grafo grafo(n_nos);

    for (int i = 0; i < c_conexoes; i++) {
        cin >> x >> y;
        grafo.insere_aresta(Aresta(x, y));
    }

    cin >> o_operacao;

    for (int j = 0; j < o_operacao; j++) {
        cin >> x >> y;
        grafo.nao_recebem_mensagem(x, y);
    }

    return 0;
}
