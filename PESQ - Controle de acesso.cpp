#include <iostream>

using namespace std;


int binaria(int vetor[], int tamanho, int x) //função binaria para achar ID
{
	bool achou; // var aux p/ busca
	int baixo; // var aux
	int meio; // var aux
	int alto; // var aux

	//definindo estado inicial das auxiliares
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	
	//verificando se meu ID está em uma das posições
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio; //retorna posição do vetor
	else
		return -1; //não encontrou o ID
}

int main ()
{

	int vetor[20]; //vetor de dados para guardar IDs
	int IdIN; //IDs a serem inseridas
	int IdFIND; //ID a ser Verificada
	int i; //contador
	int tamanho; //tamanho do vetor
	int verif; //verificador caso o elemento for encontrado


	//Cadastrando IDs no sistema
	cin >> IdIN;
	i = 0;
	while(IdIN != -1)
	{

		vetor[i] = IdIN;
		cin >> IdIN;
		i++;

	}
	tamanho = i;

	//lendo ID a ser verificada
	cin >> IdFIND;


	//chamando função para checagem de ID
	verif = binaria(vetor, tamanho, IdFIND);


	//apresentando resultado
	if (verif != -1)
		cout << "Possui acesso" << endl;
	else
		cout <<  "Nao possui acesso" << endl;

	return 0;
}
