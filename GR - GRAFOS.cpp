#include<iostream>
#include<list>
using namespace std;

// Armazena os dados de cada aresta
struct no
{
	int v; // vértice adjacente
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux; // var aux para criar aresta

	aux.v = v;
	aux.peso = p;

	adj[u].push_back(aux);

	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

int main()
{
	list<no> adj[10]; // lista de adjacências
	int nVertices; // numero de vértices do grafo
	int orientado; // 1:orientado 0:não orientado
	int u, v; // vertices de origem e destino de uma aresta
	int peso; // peso da aresta (u,v)
	int i; // contador
	list<no>::iterator p; // iterador para varrer as listas

	//lendo numero de vertices e se é orientado
	cin >> nVertices >> orientado;

	//lendo primeiros vertices e peso
	cin >> u >> v >> peso;
	while(u != -1 && v != -1 && peso != -1)
	{
		//criando aresta
		cria_aresta(adj, u, v, peso, orientado);

		//lendo proxima aresta
		cin >> u >> v >> peso;
	}


	for(i = 0; i < nVertices; i++)
		for(p = adj[i].begin(); p != adj[i].end(); p++)
			cout << i << " " << p->v << " " << p->peso << endl;

	return 0;
}
