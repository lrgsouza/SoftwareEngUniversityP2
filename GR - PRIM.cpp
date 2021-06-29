#include<iostream>
#include<list>
#include <limits.h>

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

	//criando aresta
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void prim(list<no>adj[], int nVertices, int start)
{
	bool intree[100]; //variavel para salvar se está na arvore
	int distance[100]; //variavel para distancia
	int parent[100]; //varaivel para pai
	int u, v; // auxiliares
	list<no>::iterator p; // iterador para varrer as lista
	int destino; //variavel recebe destino
	int weight; //variavel recebe peso
	int dist, custo; //variavel soma destino e custo

	//zerando custo
	custo = 0;

	//declarando estados undiscovered
	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}

	//define estado inicial distancia e V
	distance[start] = 0;
	v = start;

	//definindo caminho a ser escolhido
	while(intree[v] == false)
	{
		intree[v] = true;
		//expansão
		for(p = adj[v].begin(); p != adj[v].end(); p++)
		{
			destino = p->v;
			weight = p->peso;
			if(distance[destino] > weight && intree[destino] == false)
			{
				distance[destino] = weight;
				parent[destino] = v;
			}
		}
		//escolha
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
	}

	//cabeçalho saida
	cout << "Arvore Geradora Minima:" << endl;

	//mostrando arvore e somando custo
	for(u = 0; u < nVertices; u++)
	{
		if (u != start)
		{
			//mostrando vertices
			cout << parent[u] << " " << u << endl;
			custo = custo + distance[u];
		}
	}
	//cabeçalho saida
	cout << "Custo: " << custo << endl;

}


int main()
{
	list<no> adj[10]; // lista de adjacências
	int nVertices; // numero de vértices do grafo
	int start; // primeiro vertice
	int u, v, orientado; // vertices de origem e destino e orientado
	int peso; // peso da aresta (u,v)

	//lendo numero de vertices, se é orientado e o vertice inicial.
	cin >> nVertices >> orientado >> start;

	//lendo vertices e peso
	cin >> u >> v >> peso;
	while(u != -1 && v != -1 && peso != -1)
	{
		//criando aresta
		cria_aresta(adj, u, v, peso, orientado);

		//lendo proxima aresta
		cin >> u >> v >> peso;
	}

	//chamando PRIM
	prim(adj, nVertices, start);

	return 0;
}
