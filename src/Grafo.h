#ifndef GRAFO_H

#define GRAFO_H

#include "Aresta.h"
#include <vector>

class Grafo{
public: 
    Grafo(int num_vertices);
    int num_vertices();
    int num_arestas();
    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);
    void imprime();
    bool eh_passeio(std::vector<int> &seq_vertices);
    bool eh_caminho(std::vector<int> &seq_vertices);
    int grau(int vertice);
    int grau_minimo();
    int grau_maximo();

    bool caminho(int v1, int v2, int marcado[], std::string str_recursiva = "");

    void busca_largura(int v, std::vector<int> pai, std::vector<int> dist);



private:
    int num_vertices_;
    int num_arestas_;
    std::vector<std::vector<int>> matriz_adj_;

};


#endif /*GRAFO_H*/

