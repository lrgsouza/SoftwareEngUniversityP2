#include<iostream>
#include<iomanip>

using namespace std;

struct Notas 
{
    int n1, n2, n3, n4; // Váriaveis para notas
    double m; // Variavel para média
};

int main()

{
    Notas *media; //declarando ponteiro
    media = new Notas; //definindo ponteiro como nova alocação de memoria no struct
    
    // Lendo notas
    cin >> media->n1 >> media->n2  >> media->n3 >> media->n4;
    
    // Cálculo da média
    media->m = (media->n1 + media->n2 + media->n3 + media->n4) / 4.0;
    
    //mostrando média com 2 casas decimais
    cout << fixed << setprecision (2); 
    cout << media->m; 

	//desalocando memoria
    delete media;
    
    return 0;
}