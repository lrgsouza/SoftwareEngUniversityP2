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

void bfs(list<no>adj[], int nVertices, int s)
{
	int state[100]; //estado
	int p[100]; //pai
	int u, v; // auxiliares
	list<no>::iterator it; // iterador para varrer as lista
	list<int> Q; // LISTA PARA FILA

	//declarando estados undiscovered
	for(u = 0; u < nVertices; u++)
		if (u != s)
		{
			state[u] = -1;
			p[u] = -1;
		}

	//define estado do vertice inicial
	state[s] = 0;
	p[s] = -1;
	Q.push_back(s);

	//processando vertices
	while(!Q.empty())
	{
		u = *Q.begin();
		Q.pop_front();
		cout << u << endl;
		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{
			v = it->v;
			cout << u << " " << v << endl;
			if(state[v] == -1)
			{
				state[v] = 0;
				p[v] = u;
				Q.push_back(v);
			}
		}
		state[u] = 1;
	}
}

int main()
{
	list<no> adj[10]; // lista de adjacências
	int nVertices; // numero de vértices do grafo
	int s; // 1:orientado 0:não orientado
	int u, v; // vertices de origem e destino de uma aresta
	int peso; // peso da aresta (u,v)

	//lendo numero de vertices e o primeiro vertice
	cin >> nVertices >> s;

	//lendo vertices e peso
	cin >> u >> v >> peso;
	while(u != -1 && v != -1 && peso != -1)
	{
		//criando aresta
		cria_aresta(adj, u, v, peso,0);

		//lendo proxima aresta
		cin >> u >> v >> peso;
	}

	//chamando BFS
	bfs(adj, nVertices, s);

	return 0;
}
