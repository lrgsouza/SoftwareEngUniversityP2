#include<iostream>
#include<list>
using namespace std;

// Armazena os dados de cada aresta
struct no
{
	int v; // vértice adjacente
	int peso; // peso da aresta
};
void cria_aresta(list<no>adj[], int u, int v, int orientado)
{
	no aux; // var aux para criar aresta
	//criando aresta
	aux.v = v;
	adj[u].push_back(aux);
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void ordenacao_topologica(int f[], int nVertices)
{
	int i = 0; //contador
	int j = 0; //contador
	int temp; //temporario maior
	int aux; //vetor para ordenar

	//Achando vertice com maior time e imprimindo (decrescente)
	for (i = 0; i < nVertices; ++i)
	{
		temp = 0; //zerando temp
		for (j = 0; j < nVertices; ++j)
		{
			if (f[j] > temp)
			{
				temp =  f[j];
				aux = j;
			}
		}
		cout << aux << " ";
		f[aux] = 0;
	}
}

void dfs_visit(list<no>adj[], int u, int color[], int pi[], int d[], int f[], int &time)
{
	//variaveis
	list<no>::iterator p; // iterador para varrer as lista
	int v; //variavel auxiliar

	//definições
	color[u] = 0; //mudando cor vertice pra cinza (0)
	time ++; //agregando 1 ao tempo
	d[u] = time; //definindo d[u] com o valor do tempo

	//varrendo vertices adjacentes do vertice u
	for(p = adj[u].begin(); p != adj[u].end(); p++)
	{
		v = p->v; //pegando valor da adjacencia

		//definindo pai e usando recursividade para varrer proximos filhos
		if(color[v] == -1)
		{
			pi[v] = u;
			dfs_visit(adj, v, color, pi, d, f, time);
		}
	}
	//defindo cor do vertice para preto e definindo f[u] como time+1
	color[u] = 1;
	f[u] = time + 1;
}

void dfs(list<no>adj[], int nVertices)
{
	//--variaveis
	int u; // auxiliar
	int color[100]; //guarda cor ( -1 = White , 0 = Grey , 1 = Black)
	int pi[100]; //vetor pai
	int d[100]; //vedor d
	int f[100]; //vetor f
	int time; //vetor tempo
	list<no>::iterator it; // iterador para varrer as lista

	//declarando estados iniciais
	for(u = 0; u < nVertices; u++)
	{
		color[u] = -1;
		pi[u] = -1;
	}
	//zerando tempo
	time = 0;

	//percorrendo todos os vertices para montar ordenação
	for(u = 0; u < nVertices; u++)
	{
		if(color[u] == -1)
			dfs_visit(adj, u, color, pi, d, f, time);
	}

	//chamando ordenação
	ordenacao_topologica(f, nVertices);
}

int main()
{
	list<no> adj[10]; // lista de adjacências
	int nVertices; // numero de vértices do grafo
	int o; // 1:orientado 0:não orientado
	int u, v; // vertices de origem e destino de uma aresta

	//lendo numero de vertices e se é orientado
	cin >> nVertices >> o;

	//lendo vertices origem destino
	cin >> u >> v ;
	while(u != -1 && v != -1 )
	{
		//criando aresta
		cria_aresta(adj, u, v, o);

		//lendo proxima aresta
		cin >> u >> v ;
	}

	//chamando DFS
	dfs(adj, nVertices);

	return 0;
}
